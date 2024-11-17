`timescale 1ns/1ns

module miniALU_top(
	input [9:0] switches,
	output [9:0] leds
);

	// assigns inputs to outputs
	assign leds = switches;

endmodule
