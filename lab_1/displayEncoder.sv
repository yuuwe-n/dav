//displayEncoder.sv

`timescale 1ns/1ns

module displayEncoder(
  //
  // 20 bit input from ALU
  input [19:0] result,
  // 48 bit output for 6x 8 bit displays
  output [47:0] displayBits
);

  // six 4-bit digits 
  wire [3:0] digit0, digit1, digit2, digit3, digit4, digit5;

  reg [23:0] bcd;

  // binary to decimal (BCD) Conversion
  always_comb begin
    integer i;
    bcd = 24'b0;

    // initialize bcd with alu input
    bcd[19:0] = result;

    // idk what this algorithm is tbh
    for (i = 0; i < 20; i = i + 1) begin
      if (bcd[23:20] >= 5) bcd[23:20] = bcd[23:20] + 3;
      if (bcd[19:16] >= 5) bcd[19:16] = bcd[19:16] + 3;
      if (bcd[15:12] >= 5) bcd[15:12] = bcd[15:12] + 3;
      if (bcd[11:8]  >= 5) bcd[11:8]  = bcd[11:8]  + 3;
      if (bcd[7:4]   >= 5) bcd[7:4]   = bcd[7:4]   + 3;
      if (bcd[3:0]   >= 5) bcd[3:0]   = bcd[3:0]   + 3;
      bcd = bcd << 1;
    end
  end

    // assign each digit
  assign digit5 = bcd[23:20];
  assign digit4 = bcd[19:16];
  assign digit3 = bcd[15:12];
  assign digit2 = bcd[11:8];
  assign digit1 = bcd[7:4];
  assign digit0 = bcd[3:0];

  // instantiation ( 8 bits per display)
  sevenSegDigit digitDisplay0 (.digit(digit0), .displayBits(displayBits[7:0]));
  sevenSegDigit digitDisplay1 (.digit(digit1), .displayBits(displayBits[15:8]));
  sevenSegDigit digitDisplay2 (.digit(digit2), .displayBits(displayBits[23:16]));
  sevenSegDigit digitDisplay3 (.digit(digit3), .displayBits(displayBits[31:24]));
  sevenSegDigit digitDisplay4 (.digit(digit4), .displayBits(displayBits[39:32]));
  sevenSegDigit digitDisplay5 (.digit(digit5), .displayBits(displayBits[47:40]));

endmodule
