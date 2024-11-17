module displayEncoder_tb;
    reg [19:0] result;
    wire [47:0] displayBits;

    displayEncoder uut (
        .result(result),
        .displayBits(displayBits)
    );

    initial begin
        $monitor("Result: %d, DisplayBits: %b", result, displayBits);

        result = 20'd123456; #10;
        result = 20'd0; #10;
        result = 20'd999999; #10;

        $finish;
    end
endmodule
