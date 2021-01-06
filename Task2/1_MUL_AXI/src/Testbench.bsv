package Testbench;
    import Vector :: *;
    import StmtFSM :: *;

    import TestHelper :: *;

    // Project Modules
    import `RUN_TEST :: *;
    import TestsMainTest :: *;
    import Mul_AXI::*;
    import AXI4_Lite_Master::*;
    import Connectable :: *;
    import AXI4_Lite_Types :: *;
    
    typedef 7 TestAmount;


    (* synthesize *)
    module [Module] mkTestbench();
        Vector#(TestAmount, TestHandler) testVec;
	testVec[0] <- mkTestsMainTest(11,11,121); 
	testVec[1] <- mkTestsMainTest(10,12,120); 
	testVec[2] <- mkTestsMainTest(13,123,1599);
	testVec[3] <- mkTestsMainTest(50,101,5050); 
	testVec[4] <- mkTestsMainTest(160,30,4800);  
        testVec[5] <- mkTestsMainTest(2,11,22); 
	testVec[6] <- mkTestsMainTest(13,13,169); 
	Reg#(UInt#(32)) testCounter <- mkReg(0);
        Stmt s = {
            seq
                for(testCounter <= 0;
                    testCounter < fromInteger(valueOf(TestAmount));
                    testCounter <= testCounter + 1)
                seq
                    testVec[testCounter].go();
                    await(testVec[testCounter].done());
                endseq
            endseq
        };
        mkAutoFSM(s);
    endmodule

endpackage
