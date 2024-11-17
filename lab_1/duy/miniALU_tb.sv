`timescale 1ns/1ns

module miniALU_tb ();

	/*
	logic [9:0] switches_tb;
	logic [9:0] leds_tb;

	miniALU_top uut_top(
		.switches(switches_tb),
		.leds(leds_tb)
	);

	initial begin
		switches_tb = 10'd10; // Assign an initial value to the signal
		$display("Test miniALU_top - a = %d", leds_tb);
		#10;
	end
	*/

	reg [3:0] op1;
    reg [3:0] op2;
    reg operation;
    reg sign;
    wire [19:0] result;

	miniALU uut ( // unit under test
        .op1(op1),
        .op2(op2),
        .operation(operation),
        .sign(sign),
        .result(result)
    );

    task addition_operation(input [3:0] a, input [3:0] b);
        begin
            #5 operation = 0;  // Set operation to arithmetic
            #5 sign = 0;       // Set sign to positive (addition)
            op1 = a;           // Assign operand 1
            op2 = b;           // Assign operand 2
        end
    endtask

    task subtraction_operation(input [3:0] a, input [3:0] b);
        begin
            #5 operation = 0;  // Set operation to arithmetic
            #5 sign = 1;       // Set sign to negative (subtraction)
            op1 = a;           // Assign operand 1
            op2 = b;           // Assign operand 2
        end
    endtask

    task left_shift_operation(input [3:0] a, input [3:0] shift_amt);
        begin
            #5 operation = 1;  // Set operation to shift
            #5 sign = 0;       // Set sign to left shift
            op1 = a;           // Assign operand 1
            op2 = shift_amt;   // Assign shift amount
        end
    endtask

    task right_shift_operation(input [3:0] a, input [3:0] shift_amt);
        begin
            #5 operation = 1;  // Set operation to shift
            #5 sign = 1;       // Set sign to right shift
            op1 = a;           // Assign operand 1
            op2 = shift_amt;   // Assign shift amount
        end
    endtask


	// runs testbench simulation (only used for test benches)
    initial begin
        $display("Starting ALU Testbench...");

        // Loop through test cases
        for (integer i = 0; i < 16; i = i + 1) begin
            #5;
			$display("TEST %0d", i);
			#5;
            // Test Addition
            addition_operation(i[3:0], 4'b0011);  // Add i with 3
            #10;
            $display("Addition: %d + %d = %0d", op1, op2, result);

            // Test Subtraction
            subtraction_operation(i[3:0], 4'b0001);  // Subtract 1 from i
            #10;
            $display("Subtraction: %d - %d = %0d", op1, op2, result);

            // Test Left Shift
            left_shift_operation(i[3:0], 4'b0001);  // Left shift by 1
            #10;
            $display("Left Shift: %d << %d = %0d", op1, op2, result);

            // Test Right Shift
            right_shift_operation(i[3:0], 4'b0001);  // Right shift by 1
            #10;
            $display("Right Shift: %d >> %d = %0d", op1, op2, result);
			$display("\n------------\n");
        end

        $display("ALU Testbench Completed.");
        $finish;
    end


endmodule
