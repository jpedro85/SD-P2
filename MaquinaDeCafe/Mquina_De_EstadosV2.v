`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:23:49 01/21/2022 
// Design Name: 
// Module Name:    Mquina_De_EstadosV2 
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
module Mquina_De_EstadosV2(
   
	input contadorTermobloco, Reservatorio, refill, start, Power, clock,
	
	input [1:0] seletor,
	
	input [3:0] capsula,
	
	output reg BombaAgua, saida5s,
	
	output reg [2:0] EstadoAtual
	
	);
	
	
	reg [2:0] MemState = 3'b 000;
	
	reg ToggleStart = 1;
	
	integer Counter = 0;
	
	always @(negedge start)begin
		
		if(ToggleStart)
			ToggleStart = 0;
		else
			ToggleStart = 1;
			
	end
	
	
	
	always@(MemState)begin
	
		case(MemState)	
			3'b000:begin 
				BombaAgua=1'b 0;
				saida5s=0;
			end
			3'b001:BombaAgua=1'b 0;
			3'b010:BombaAgua=1'b 0;
			3'b011:BombaAgua=1'b 0;
			3'b100:BombaAgua=1'b 0;
			3'b101:BombaAgua=1'b 0;
			3'b110:BombaAgua=1'b 1;
		endcase
		
		assign EstadoAtual = MemState;
		
		//assign EstadoAtual = ToggleStart;
		//assign EstadoAtual = Counter;
	end
		
	always@(posedge clock)begin
	
		case(MemState)
			
			3'b 000:begin
				MemState = (Power)? 3'b 001: 3'b 000;				
			end
					
			3'b 001:begin
				if (Power)
					if (contadorTermobloco)begin
						saida5s = 1;
						MemState = 3'b 001;
						end
					else begin
						saida5s = 0;
						MemState = 3'b 010; 
					end
				else begin
					saida5s = 0;
					MemState = 3'b 000;
				end
			end
			
			3'b 010:begin
				if(Power)
					MemState = (capsula == 4'b 0010 )? 3'b 011: 3'b 010;
				else 
					MemState =3'b 000;
			end
			
			3'b 011:begin 	
				if(Power)		
					MemState = (ToggleStart)? 3'b 100: 3'b 011; 				
				else 
					MemState = 3'b 000;
			end
			
			3'b 100:begin 
				if(Power)begin
					if(ToggleStart) 
						MemState = (Reservatorio)? 3'b 110: 3'b 101;
					else
						MemState = 3'b 011;
					end
				else 
					MemState = 3'b 000;
			end
			
			3'b 101:begin 			
				if(Power)begin
					if(ToggleStart) 
						MemState = (refill)? 3'b 110: 3'b 101;
					else begin
						Counter = 0; 
						MemState = 3'b 011;
						end
					end
				else 
					MemState = 3'b000;
			end
			
			3'b 110:begin 
				if(Power)begin
					if(ToggleStart)begin
						if(Reservatorio)begin

							Counter = Counter + 1;
							
							case(seletor)
								
								2'b 00 :begin	
									if(Counter>=2)begin
											Counter = 0;
											ToggleStart = 0;
											MemState = 3'b011;
										end									
								end
								
								2'b 01 :begin								
									if(Counter>=4)begin
										Counter = 0;
										ToggleStart = 0;
										MemState = 3'b011;
									end								
								end
								
								2'b 10 :begin		
									if(Counter>=6)begin
										Counter = 0;
										ToggleStart = 0;
										MemState = 3'b011;
									end									
								end																
							endcase
							
						end
						else begin
							Counter = Counter + 1;
							
							if( ( Counter==2 & seletor==2'b 00 ) | (Counter==4 & seletor==2'b 01 ) | (Counter==6 & seletor==2'b 10 ))begin
							
								Counter = 0;
								ToggleStart = 0;
							
							end
							
							MemState = 3'b 101;
						end
							
					end	
					else begin
						
						Counter = Counter + 1;
						
						if( ( Counter==2 & seletor==2'b 00 ) | ( Counter==4 & seletor==2'b 01 ) | (Counter==6 & seletor==2'b 10 ))begin
							
							Counter = 0;
							ToggleStart = 0;
							
						end
						
						MemState = 3'b011;
						end
					end
				else begin
					
					Counter = Counter + 1;
					
					if( ( Counter==2 & seletor==2'b 00 ) | (Counter==4 & seletor==2'b 01 ) | (Counter==6 & seletor==2'b 10 ))begin
							
							Counter = 0;
							ToggleStart = 0;
							
					end
						
					MemState = 3'b000;
				end
			end
		endcase
	end
					
endmodule 
