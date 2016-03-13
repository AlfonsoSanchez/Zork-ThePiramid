#include<stdio.h>
#include <stdlib.h>
#include "rooms.h"
#include "exit.h"

Exit::Exit()
{
	const char* exitEntrance[2] = { "Strangle Tunnel", "Main Hall Initation" };// Entrance
	const char* exitStrT[2] = { "Entrance", "Strangle Room" };//Strangle tunnel (floor0)
	const char* exitStrR[3] = { "Strangle Tunnel", "Main Hall Initation", "Secret Room" };// strangle Room (floor0)
	const char* exitSeR = { "Strangle Room" };// Secret Room
	const char* exitMHI[3] = { "Entrance", "Strangle Tunnel","Main Hall Middle" };// Main hall initation
	const char* exitMHM[3] = { "Main Hall End", "Main Hall Initation","Dicharge Room" };// Main Hall Midle ( enter in flor -1 down stairs)
	const char* exitDR[3] = { "Main Hall Midle", "Main Hall End","Strangle Tunnel" };// Discharge Room
	const char* exitStrT2[3] = { "Dicharge Room", "King Room","Secret Room: Ventilation Room" }; // Strangle tunnel 2 ( floor -1)
	const char* exitVR = { "Strangle Tunnel"};// Ventilation Room
	const char* exitMHE[4] = { "Main Hall Midle", "Queen Room","King Room","Dicharge Room" }; // Main Hall end
	const char* exitQR = { "Main Hall End" }; //Queen Room
	const char* exitKR[2] = { "Main Hall End", "Strangle Tunnel" }; //King Room







}