module miniALU_top(
	input [9:0] switches,
	output [9:0] led
);

	assign led = switches;

endmodule
