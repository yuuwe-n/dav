//miniALU.sv

`timescale 1ns/1ns

module miniALU (

  // 4 bit operands
  input [3:0] op1,
  input [3:0] op2,
  
  // 1-bit operation selector (0 arithmatic, 1 shift)
  input [0:0] operation,

  // 0: positive, 1 negative
  input [0:0] sign,

  // 20-bit output
  output reg [19:0] result
);

  always_comb begin

    // arithmatic
    if (operation == 1'b0) begin
      
      // addition
      if (sign == 1'b0) begin
        result = {16'b0, op1} + {16'b0, op2};
        
      // subtraction
      end else begin
        result = {16'b0, op1} - {16'b0, op2};
      end

    // shifting
    end else begin

      // shift left
      if (sign == 1'b0) begin
        result = {16'b0, op1} <<< op2;
        
      // shift right
      end else begin
        result = {16'b0, op1} >>> op2;
      end
    end
  end

endmodule
