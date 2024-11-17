`timescale 1ns/1ns

module miniALU_top_tb;

    // Testbench signals
    reg [9:0] switches;         // Simulated FPGA switches
    wire [47:0] displayBits;    // Output for seven-segment displays

    // Instantiate the top module
    miniALU_top uut (
        .switches(switches),
        .displayBits(displayBits)
    );

    initial begin
        // Monitor signals for debugging
        $monitor("Time=%0t | Switches=%b | DisplayBits=%b", $time, switches, displayBits);

        // Test case 1: Add 3 + 5
        // switches[9:6] = 3 (op1), switches[5:2] = 5 (op2), switches[1] = 0 (arithmetic), switches[0] = 0 (addition)
        switches = 10'b0000011011; 
        #10; // Wait 10 time units

        // Test case 2: Subtract 7 - 2
        // switches[9:6] = 7 (op1), switches[5:2] = 2 (op2), switches[1] = 0 (arithmetic), switches[0] = 1 (subtraction)
        switches = 10'b0000100111; 
        #10;

        // Test case 3: Left shift 4 << 1
        // switches[9:6] = 4 (op1), switches[5:2] = 1 (op2), switches[1] = 1 (shift), switches[0] = 0 (left shift)
        switches = 10'b0000100000; 
        #10;

        // Test case 4: Right shift 8 >> 3
        // switches[9:6] = 8 (op1), switches[5:2] = 3 (op2), switches[1] = 1 (shift), switches[0] = 1 (right shift)
        switches = 10'b0001101000; 
        #10;

        // Test case 5: Default case (invalid inputs)
        switches = 10'b1111111111; // Invalid inputs
        #10;

        $finish; // End simulation
    end

endmodule
