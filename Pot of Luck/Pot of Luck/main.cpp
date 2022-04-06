///Name: Síne Whooley
//Student Number: C00271403
//Date: 25/02/22 Restart Date: 22/03/22
//---------------------
// Project: Final Project "Pot of Luck"
//---------------------


#ifdef _DEBUG 
#pragma comment(lib,"sfml-graphics-d.lib") 
#pragma comment(lib,"sfml-audio-d.lib") 
#pragma comment(lib,"sfml-system-d.lib") 
#pragma comment(lib,"sfml-window-d.lib") 
#pragma comment(lib,"sfml-network-d.lib") 
#else 
#pragma comment(lib,"sfml-graphics.lib") 
#pragma comment(lib,"sfml-audio.lib") 
#pragma comment(lib,"sfml-system.lib") 
#pragma comment(lib,"sfml-window.lib") 
#pragma comment(lib,"sfml-network.lib") 
#endif 


#include "Game.h"
#include "Open-Screen.h"
#include <SFML/Graphics.hpp>
#include <iostream>

class Open_Screen;

// Main enrtry point
// <returns>success or failure</returns>
int main()
{

		Game game;
		game.run();

		return 1; // success
	
}