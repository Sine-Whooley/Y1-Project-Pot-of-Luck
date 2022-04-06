///Name: Síne Whooley
//Student Number: C00271403
//Date: 25/02/22 Restart Date: 22/03/22
//---------------------
// Project: Final Project "Pot of Luck"
//---------------------

#pragma once
#include "Game.h" 
#include <SFML/Graphics.hpp>

class Open_Screen
{
public:
	Open_Screen();
	~Open_Screen();

	void initialise(sf::Font&);
	void render(sf::RenderWindow&);
	void update(sf::Time);
	void processEvent(sf::Event);



private:

	bool m_proceedKeyPressed;

	sf::Texture m_openScreenTexture;
	sf::Sprite m_openScreenSprite;
	sf::Font m_font;
	sf::Text m_message;

};


