`timescale 1ns/1ns

module miniALU_tb ();

	logic [9:0] switches_tb;
	logic [9:0] leds_tb;

	miniALU_top uut(
		.switches(switches_tb),
		.leds(leds_tb)
	);

	initial begin
		switches_tb = 10'd10; // Assign an initial value to the signal
		$display("Test 2 - a = %d", leds_tb);
		#10;
	end

endmodule
