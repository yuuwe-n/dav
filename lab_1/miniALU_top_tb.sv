//miniALU_top_tb.sv

`timescale 1ns/1ns

module miniALU_top_tb;

  // testbench signals
  reg [9:0] switches;
  wire [47:0] displayBits;

  // instantiate the top module
  miniALU_top uut (
      .switches(switches),
      .displayBits(displayBits)
  );

  initial begin
    
    $monitor("Time=%0t | Switches=%b | DisplayBits=%b", $time, switches, displayBits);

    // test case 1 : add 3 + 5
    // switches[9:6] = 3 (op1), switches[5:2] = 5 (op2), 
    // switches[1] = 0 (arithmetic), switches[0] = 0 (addition)

    switches = 10'b0000011011; 
    #10;

    // test case 2 : subtract 7 - 2
    // switches[9:6] = 7 (op1), switches[5:2] = 2 (op2), 
    // switches[1] = 0 (arithmetic), switches[0] = 1 (subtraction)

    switches = 10'b0000100111; 
    #10;

    // test case 3 : left shift 4 << 1
    // switches[9:6] = 4 (op1), switches[5:2] = 1 (op2),
    // switches[1] = 1 (shift), switches[0] = 0 (left shift)

    switches = 10'b0000100000; 
    #10;

    // test case 4 : right shift 8 >> 3
    // switches[9:6] = 8 (op1), switches[5:2] = 3 (op2), 
    // switches[1] = 1 (shift), switches[0] = 1 (right shift)

    switches = 10'b0001101000; 
    #10;

    // test case 5 : default (invalid inputs)
    switches = 10'b1111111111;
    #10;

    $finish; 
  end

endmodule
