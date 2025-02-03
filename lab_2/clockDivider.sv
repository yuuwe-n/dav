// clockDivider.sv
// sequential circuit not combinational
// takes in input clock signal
// and outputs slower clock signal

`timescale 1ns/1ns

// input clock with default speed 50Mhz
//
//
// circ

// default parameter = 5Mhz
module clockDivider #(BASE_SPEED=5000000)
(

input logic clk,
input logic speed,
input logic reset,
input logic outClk

);
