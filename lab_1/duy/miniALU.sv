`timescale 1ns/1ns

module miniALU (
    input [3:0] op1;
    input [3:0] op2;
    input [0:0] operation;
    input [0:0] sign;

    output [19:0] output;
);

    always_comb begin
        if (operation == 1'b0) begin
            // Arithmetic operations
            if (sign == 1'b0) begin
                // Addition
                result = op1 + op2;
            end else begin
                // Subtraction
                result = op1 - op2;
            end
        end else begin
            // Shift operations
            if (sign == 1'b0) begin
                // Arithmetic Left Shift
                result = op1 <<< op2;
            end else begin
                // Arithmetic Right Shift
                result = op1 >>> op2;
            end
        end
    end

endmodule