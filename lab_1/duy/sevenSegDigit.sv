module sevenSegDigit(
    input [3:0] digit,           // 4-bit input digit (0-9)
    output reg [7:0] displayBits // 8-bit active-low output for seven-segment display
);

    always_comb begin
        case (digit)
            4'b0000: displayBits = 8'b11000000; // 0
            4'b0001: displayBits = 8'b11111001; // 1
            4'b0010: displayBits = 8'b10100100; // 2
            4'b0011: displayBits = 8'b10110000; // 3
            4'b0100: displayBits = 8'b10011001; // 4
            4'b0101: displayBits = 8'b10010010; // 5
            4'b0110: displayBits = 8'b10000010; // 6
            4'b0111: displayBits = 8'b11111000; // 7
            4'b1000: displayBits = 8'b10000000; // 8
            4'b1001: displayBits = 8'b10010000; // 9
            default: displayBits = 8'b11111111; // All segments off (invalid input)
        endcase
    end

endmodule
