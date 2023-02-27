`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:31:42 01/21/2022 
// Design Name: 
// Module Name:    ReservatorioV4 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module ReservatorioV4(
    output reg TemAgua , HouveRefill,
	 output reg [3:0] TempoDeAgua,
    input Usar,
    input Refill,
    input Clock
    );
	 
	integer tempo = 10;
	 
	always @(negedge (Refill))begin
	
		tempo = 10;
		
		assign HouveRefill=1;
		
	end
	
	always @(posedge Clock)begin
		assign HouveRefill=0;
		TempoDeAgua = tempo ;
	end
	
	always @(negedge Clock)begin
					
		if (Usar & tempo!= 0 ) tempo = tempo - 1;
		
		if(tempo > 0)begin
			assign TemAgua = 1;
			end
		else 
			assign TemAgua = 0;	
	end

endmodule 