`timescale 1ns/1ns

module miniALU (
    input [3:0] op1,            // 4-bit first operand
    input [3:0] op2,            // 4-bit second operand
    input [0:0] operation,            // 1-bit operation selector (0: arithmetic, 1: shift)
    input [0:0] sign,                 // 1-bit sign selector (0: positive, 1: negative)
    output reg [19:0] result    // 20-bit output result
);

    always_comb begin
        if (operation == 1'b0) begin
            // Arithmetic operations
            if (sign == 1'b0) begin
                // Addition (zero-extend operands to 20 bits)
                result = {16'b0, op1} + {16'b0, op2};
            end else begin
                // Subtraction (zero-extend operands to 20 bits)
                result = {16'b0, op1} - {16'b0, op2};
            end
        end else begin
            // Shift operations
            if (sign == 1'b0) begin
                // Arithmetic Left Shift
                result = {16'b0, op1} <<< op2;
            end else begin
                // Arithmetic Right Shift
                result = {16'b0, op1} >>> op2;
            end
        end
    end

endmodule
