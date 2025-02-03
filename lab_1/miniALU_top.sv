//miniALU_top.sv

`timescale 1ns/1ns

module miniALU_top (

  // 4 bits op1, 4 bits op2, 1 bit operation, 1 bit sign
  input [9:0] switches,

  // output for seven segment display
  output [47:0] displayBits
);

    // connect miniALU and displayEncoder
    wire [3:0] op1;
    wire [3:0] op2;
    wire operation; // 1 bit
    wire sign; // 1 bit
    wire [19:0] result;

    // assign switches to inputs
    assign op1 = switches[9:6];   // switches (9-6)
    assign op2 = switches[5:2];   // switches (5-2)
    assign operation = switches[1]; // switch (1)
    assign sign = switches[0];    // switch (0)

    // instantiate miniALU
    miniALU alu_instance (
        .op1(op1),
        .op2(op2),
        .operation(operation),
        .sign(sign),
        .result(result)
    );

    // instantiate displayEncoder
    displayEncoder encoder_instance (
        .result(result),
        .displayBits(displayBits)
    );

endmodule
