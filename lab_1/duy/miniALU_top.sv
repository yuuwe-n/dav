`timescale 1ns/1ns

module miniALU_top (
    input [9:0] switches,         // 10 switches: op1, op2, operation, sign
    output [47:0] displayBits     // 48-bit output for six seven-segment displays
);

    // Signals for connecting miniALU and displayEncoder
    wire [3:0] op1;               // 4-bit operand 1
    wire [3:0] op2;               // 4-bit operand 2
    wire operation;               // 1-bit operation selector
    wire sign;                    // 1-bit sign selector
    wire [19:0] result;           // 20-bit ALU result

    // Assign switches to ALU inputs
    assign op1 = switches[9:6];   // First four switches (9-6)
    assign op2 = switches[5:2];   // Next four switches (5-2)
    assign operation = switches[1]; // Next switch (1)
    assign sign = switches[0];    // Last switch (0)

    // Instantiate miniALU
    miniALU alu_instance (
        .op1(op1),
        .op2(op2),
        .operation(operation),
        .sign(sign),
        .result(result)
    );

    // Instantiate displayEncoder
    displayEncoder encoder_instance (
        .result(result),
        .displayBits(displayBits)
    );

endmodule
