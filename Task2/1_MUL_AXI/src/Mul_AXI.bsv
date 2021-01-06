package Mul_AXI;

import BlueAXI::*;
import GetPut::*;
import BUtils :: *;

interface Mul_AXI;
    // Add custom interface definitions
    (* prefix = "S00_AXI" *)
    interface AXI4_Lite_Slave_Rd_Fab#(32, 64) rd;	
    (* prefix = "S00_AXI" *)
    interface AXI4_Lite_Slave_Wr_Fab#(32, 64) wr;
endinterface

(*clock_prefix = "aclk", reset_prefix = "aresetn"*)
module mkMul_AXI(Mul_AXI);

    AXI4_Lite_Slave_Wr#(32, 64) writeHandler <- mkAXI4_Lite_Slave_Wr(2);
    AXI4_Lite_Slave_Rd#(32, 64) readHandler <- mkAXI4_Lite_Slave_Rd(2);
    
    Reg#(Bit#(64)) reg1 <- mkReg(0);
    Reg#(Bit#(64)) reg2 <- mkReg(0);
    Reg#(Bit#(64)) product <- mkReg(0);
	
    rule read_AXI; 
        let r <- readHandler.request.get();
	case(r.addr[6:0])
		0:  readHandler.response.put(AXI4_Lite_Read_Rs_Pkg{ data: zExtend(pack(reg1)), resp: OKAY});
		8:  readHandler.response.put(AXI4_Lite_Read_Rs_Pkg{ data: zExtend(pack(reg2)), resp: OKAY});
		16: readHandler.response.put(AXI4_Lite_Read_Rs_Pkg{ data: zExtend(pack(product)), resp: OKAY});
	endcase
    endrule

    rule write_AXI;
        let r <- writeHandler.request.get();
	case(r.addr[6:0])
		0: begin 
			 reg1 <= r.data; 
			 writeHandler.response.put(AXI4_Lite_Write_Rs_Pkg{resp: OKAY});
		   end
		8: begin  
			reg2 <= r.data;
            		writeHandler.response.put(AXI4_Lite_Write_Rs_Pkg{resp: OKAY});
		   end	
	endcase
    endrule 

    rule product_operation;
        product <= reg1 *  reg2;
    endrule 

    interface AXI4_Lite_Slave_Rd_Fab rd = readHandler.fab;
    interface AXI4_Lite_Slave_Wr_Fab wr = writeHandler.fab;

endmodule

endpackage
