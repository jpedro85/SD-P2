// Verilog test fixture created from schematic C:\Users\Francisco MSI\Documents\UNI\Systemas Digitais\P2\SimB\PJ2\ContadorTermobloco.sch - Thu Jan 20 22:26:27 2022

`timescale 1ns / 1ps

module ContadorTermobloco_ContadorTermobloco_sch_tb();

// Inputs
	
	reg Clock,Ativar;

// Output
	
	wire Saida;

// Instantiate the UUT
   ContadorTermobloco UUT (
		.Saida(Saida),
		.Clock(Clock),
		.Ativar(Ativar)
		
   );
// Initialize Inputs
initial begin
	
	Ativar = 0;
	
	Clock = 0;
	#1
	Clock = 1;
	Ativar = 0;
	#1
	
	Clock = 0;
	#1
	Clock = 1;
	Ativar = 0;
	#1
	
	Clock = 0;
	#1
	Clock = 1;
	Ativar = 1;
	#1
	
	Clock = 0;
	#1
	Clock = 1;
	Ativar = 1;
	#1
	
	Clock = 0;
	#1
	Clock = 1;
	Ativar = 1;
	#1
	
	Clock = 0;
	#1
	Clock = 1;
	Ativar = 1;
	#1
	
	Clock = 0;
	#1
	Clock = 1;
	Ativar = 1;
	#1
	
	Clock = 0;
	#1
	Clock = 1;
	Ativar = 1;
	#1
	
	Clock = 0;
	#1
	Clock = 1;
	Ativar = 0;
	#1
	
	Clock = 0;
	#1
	Clock = 1;
	Ativar = 1;
	#1
	
	Clock = 0;
	#1
	Clock = 1;
	Ativar = 1;
	#1
	
	Clock = 0;
	#1
	Clock = 1;
	Ativar = 1;
	#1
	
	Clock = 0;
	#1
	Clock = 1;
	Ativar = 0;
	#1
	
	Clock = 0;
	#1
	Clock = 1;
	Ativar = 1;
	#1
	
	Clock = 0;
	#1
	Clock = 1;
	Ativar = 0;
	#1
	
	Clock = 0;
	#1
	Clock = 1;
	Ativar = 1;
	#1
	
	Clock = 0;
	#1
	Clock = 1;
	Ativar = 1;
	#1
	
	Clock = 0;
	#1
	Clock = 1;
	Ativar = 1;
	#1
	
	Clock = 0;
	#1
	Clock = 1;
	Ativar = 1;
	#1
	
	Clock = 0;
	#1
	Clock = 1;
	Ativar = 1;
	#1
	
	Clock = 0;
	#1
	Clock = 1;
	Ativar = 1;
	#1
	
	Clock = 0;
	#1
	Clock = 1;
	Ativar = 1;
	#1
	
	Clock = 0;
	#1
	Clock = 1;
	Ativar = 1;
	#1
	
	Clock = 0;
	#1
	Clock = 1;
	Ativar = 1;
	#1
	
	$finish;
	
end
endmodule
