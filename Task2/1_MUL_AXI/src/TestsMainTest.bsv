package TestsMainTest;
    import StmtFSM :: *;
    import TestHelper :: *;
    import Mul_AXI :: *;
    import AXI4_Lite_Master::*;
    import Connectable :: *;
    import AXI4_Lite_Types :: *;

    (* synthesize *)
    module [Module] mkTestsMainTest#(Bit#(64) opA, Bit#(64) opB, Bit#(64) expectedResult)(TestHandler);

        Mul_AXI dut <- mkMul_AXI();
	AXI4_Lite_Master_Rd#(32, 64) rd <- mkAXI4_Lite_Master_Rd(2);
 	AXI4_Lite_Master_Wr#(32, 64) wr <- mkAXI4_Lite_Master_Wr(2);

 	mkConnection(rd.fab,dut.rd);
 	mkConnection(wr.fab,dut.wr);
	
        Stmt s = {
          seq
	    action
	    	axi4_lite_write(wr,0,opA);
	    endaction 
	    action		
	    	let r <- axi4_lite_write_response(wr); 
   	    	if (r == OKAY) begin
       	        	axi4_lite_write(wr,8,opB);
            	end	
	    endaction
	    action
	    	let r1 <- axi4_lite_write_response(wr);
      	    	if( r1 == OKAY) begin
        		axi4_lite_read(rd,16);    
    	     	end
	    endaction
	    action
		let r2 <- axi4_lite_read_response(rd);
		if (r2 == expectedResult) begin
			$display("TEST PASS %d mul %d : %d",opA, opB, r2);
		end else begin
			$display("TEST FAIL: %d != %d", r2, expectedResult);
		end
	    endaction 
	  endseq
        };
        FSM testFSM <- mkFSM(s);

        method Action go();
            testFSM.start();
        endmethod

        method Bool done();
            return testFSM.done();
        endmethod
    endmodule

endpackage
