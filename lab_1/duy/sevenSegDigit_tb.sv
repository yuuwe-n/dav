`timescale 1ns/1ns

module sevenSegDigit_tb;
    reg [3:0] digit;
    wire [7:0] displayBits;

    sevenSegDigit uut (
        .digit(digit),
        .displayBits(displayBits)
    );

    initial begin
        $monitor("Digit: %d, DisplayBits: %b", digit, displayBits);

        digit = 4'd0; #10;
        digit = 4'd1; #10;
        digit = 4'd2; #10;
        digit = 4'd3; #10;
        digit = 4'd4; #10;
        digit = 4'd5; #10;
        digit = 4'd6; #10;
        digit = 4'd7; #10;
        digit = 4'd8; #10;
        digit = 4'd9; #10;

        $finish;
    end
endmodule
