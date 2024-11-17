module displayEncoder(
    input [19:0] result,         // 20-bit input from ALU
    output [47:0] displayBits    // 48-bit output for six 8-bit seven-segment displays
);

    // Signals for six 4-bit digits
    wire [3:0] digit0, digit1, digit2, digit3, digit4, digit5;

    // Temporary signals for BCD conversion
    reg [23:0] bcd;              // 24-bit temporary storage for BCD digits

    // BCD Conversion: Binary to Decimal
    always_comb begin
        integer i;
        bcd = 24'b0;             // Clear BCD storage
        bcd[19:0] = result;      // Initialize with input binary value

        // Shift-and-add-3 algorithm
        for (i = 0; i < 20; i = i + 1) begin
            if (bcd[23:20] >= 5) bcd[23:20] = bcd[23:20] + 3;
            if (bcd[19:16] >= 5) bcd[19:16] = bcd[19:16] + 3;
            if (bcd[15:12] >= 5) bcd[15:12] = bcd[15:12] + 3;
            if (bcd[11:8]  >= 5) bcd[11:8]  = bcd[11:8]  + 3;
            if (bcd[7:4]   >= 5) bcd[7:4]   = bcd[7:4]   + 3;
            if (bcd[3:0]   >= 5) bcd[3:0]   = bcd[3:0]   + 3;
            bcd = bcd << 1;      // Shift left by 1 bit
        end
    end

    // Assign each digit from BCD
    assign digit5 = bcd[23:20];
    assign digit4 = bcd[19:16];
    assign digit3 = bcd[15:12];
    assign digit2 = bcd[11:8];
    assign digit1 = bcd[7:4];
    assign digit0 = bcd[3:0];

    // Instantiate six `sevenSegDigit` modules
    sevenSegDigit digitDisplay0 (.digit(digit0), .displayBits(displayBits[7:0]));
    sevenSegDigit digitDisplay1 (.digit(digit1), .displayBits(displayBits[15:8]));
    sevenSegDigit digitDisplay2 (.digit(digit2), .displayBits(displayBits[23:16]));
    sevenSegDigit digitDisplay3 (.digit(digit3), .displayBits(displayBits[31:24]));
    sevenSegDigit digitDisplay4 (.digit(digit4), .displayBits(displayBits[39:32]));
    sevenSegDigit digitDisplay5 (.digit(digit5), .displayBits(displayBits[47:40]));

endmodule
