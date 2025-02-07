// clockDivider.sv

// sequential circuit not combinational
// takes in input clock signal
// and outputs slower clock signal

`timescale 1ns/1ns


module clockDivider #(BASESPEED = 50000000)
(
	input clk [1:0],

	input speed [19:0], // outClk speed
	input rst [1:0],
	output outClk [1:0]
);

	logic counter [19:0];
	logic counter_d [19:0];

	logic clk_d [1:0];

always_comb begin
	if ( counter == BASESPEED / speed )
		clk_d = 1;
end

always @(posedge clk) begin

end

endmodule
