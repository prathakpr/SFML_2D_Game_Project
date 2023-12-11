#include <iostream>
#include<SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include<SFML/Window.hpp>
#include<SFML/Audio.hpp>
#include<SFML/Network.hpp>


int main() {

	//window stuff
	sf::RenderWindow window(sf::VideoMode(640, 480), "My First Game", sf::Style::Titlebar | sf::Style::Close);
	sf::Event ev;

	// game loop
	while (window.isOpen())
	{


		// event polling
		while (window.pollEvent(ev))
		{
			switch (ev.type)
			{
			case sf::Event::Closed:
				window.close();
				break;
			case sf::Event::KeyPressed:
				if (ev.key.code == sf::Keyboard::Escape)
					window.close();
				break;
			}
		}

		//update
		
		//render

		window.clear(sf::Color::Cyan); //clear old frames

		//draw your game here

		window.display(); // tell app that window is done drawing
	}

	//end of the application




	
	return 0;
}