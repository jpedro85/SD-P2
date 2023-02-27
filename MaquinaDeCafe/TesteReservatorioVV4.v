`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:43:07 01/22/2022
// Design Name:   ReservatorioV4
// Module Name:   C:/Users/Francisco MSI/Documents/UNI/Systemas Digitais/P2/Sim/MaquinaDeCafe/TesteReservatorioVV4.v
// Project Name:  MaquinaDeCafe
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ReservatorioV4
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TesteReservatorioVV4;

	// Inputs
	reg Usar;
	reg Refill;
	reg Clock;

	// Outputs
	wire TemAgua;
	wire HouveRefill;
	wire [3:0] TempoDeAgua;

	// Instantiate the Unit Under Test (UUT)
	ReservatorioV4 uut (
		.TemAgua(TemAgua), 
		.HouveRefill(HouveRefill), 
		.TempoDeAgua(TempoDeAgua), 
		.Usar(Usar), 
		.Refill(Refill), 
		.Clock(Clock)
	);

	initial begin
		// Initialize Inputs
		Usar = 0;
		Refill = 0;
		
		Clock = 0;
		#1
		Clock = 1;
		Usar = 1;
		#1
		
		Clock = 0;

		#1
		Clock = 1;
		#1
		
		Clock = 0;

		#1
		Clock = 1;
		#1
		
		Clock = 0;

		#1
		Clock = 1;
		#1
		
		Clock = 0;

		#1
		Clock = 1;
		#1
		
		Clock = 0;
		#1
		Clock = 1;
		Usar = 0;
		#1
		
		Clock = 0;

		#1
		Clock = 1;
		Usar = 1;
		#1
		
		Clock = 0;

		#1
		Clock = 1;
		#1
		
		Clock = 0;
		#1
		Clock = 1;
		#1
		
		Clock = 0;
		#1
		Clock = 1;
		#1
		
		Clock = 0;
		#1
		Clock = 1;
		#1
		
		Clock = 0;
		Refill= 1;
		#1
		Clock = 1;
		#1
		
		Clock = 0;
		#1
		Clock = 1;
		Usar = 1;
		Refill=0;
		#1
		
		Clock = 0;
		#1
		Clock = 1;
		Usar = 1;
		#1
		
		Clock = 0;
		Usar = 1;
		#1
		Clock = 1;
		#1
		
		Clock = 0;
		Usar = 1;
		#1
		Clock = 1;
		#1
		
		$finish;
		

	end
      
endmodule

