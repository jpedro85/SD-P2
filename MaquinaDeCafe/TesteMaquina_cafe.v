// Verilog test fixture created from schematic C:\Users\Francisco MSI\Documents\UNI\Systemas Digitais\P2\SimB\PJ2\Maquina_de_cafe.sch - Fri Jan 21 13:40:05 2022

`timescale 1ns / 1ps

module Maquina_de_cafe_Maquina_de_cafe_sch_tb();

// Inputs
   reg [1:0] Seletor;
   reg Clock;
   reg Power;
   reg Start;
   reg Refill;
   reg [3:0] CodigoCapsula;

// Output
   wire BombaAgua;
   wire [3:0] TempoDeAgua;
   wire [2:0] EstadoAtual;
   wire Termobloco;

// Bidirs

// Instantiate the UUT
   Maquina_de_cafe UUT (
		.BombaAgua(BombaAgua), 
		.Seletor(Seletor), 
		.Clock(Clock), 
		.TempoDeAgua(TempoDeAgua), 
		.Power(Power), 
		.Start(Start), 
		.EstadoAtual(EstadoAtual), 
		.Termobloco(Termobloco), 
		.Refill(Refill), 
		.CodigoCapsula(CodigoCapsula)
   );
// Initialize Inputs
initial begin
	
	//Caso 1
	Seletor = 2'b 00;
	Clock = 0;
	Power = 0;
	Start = 0;
	Refill = 0;
	CodigoCapsula = 4'b 0000; //errado
	
	Clock = 1;
	#1
	Clock = 0;
	#1
	
	Clock = 1;
	#1
	Clock = 0;
	#1
	
	Clock = 1;
	Power = 1;
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
	#1
	Clock = 0;
	#101

	//caso2
	
	CodigoCapsula = 4'b 0010; //certo
	
	Clock = 1;
	#1
	Clock = 0;
	#1
	
	Clock = 1;
	Start = 1;
	#1
	Clock = 0;
	#1
	
	Clock = 1;
	Start = 0;
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
	#101
	
	//caso 3
	
	Seletor = 2'b 10;
	
	Clock = 1;
	Start =1;
	#1
	Clock = 0;
	#1
	
	Clock = 1;
	Start =0;
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
	#101
	
	//caso 4
	
	Seletor = 2'b 01;
	
	Clock = 1;
	Start =1;
	#1
	Clock = 0;
	#1
	
	Clock = 1;
	Start =0;
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
	Refill = 1;
	#1
	Clock = 0;
	#1
	
	Clock = 1;
	Refill = 0;
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
	#1
	Clock = 0;
	#1
	
	Clock = 1;
	#1
	Clock = 0;
	#1
	
	#100
	
	/*
	Clock = 1;
	Start =1;
	#1
	Clock = 0;
	#1
	
	Clock = 1;
	Start =0;
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
	#1
	Clock = 0;
	#1
		
		
	Clock = 1;
	#1
	Clock = 0;
	#1
		
	*/
	
	//caso5
	
	Clock = 1;
	Power = 0;
	#1
	Clock = 0;
	#1
	
	Clock = 1;
	Power = 1;
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
		
	

	$finish;

end
endmodule
	