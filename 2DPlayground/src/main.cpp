
#include <iostream>
#include <string>
#include <SFML\Graphics.hpp>
#include <SFML\Window.hpp>

int main()
{
	std::cout << "Hello World.\n";

	sf::Window window(sf::VideoMode(640, 480), "SFML_Window");
	while (window.isOpen())
	{
		sf::Event sfmlEvent;
		while (window.pollEvent(sfmlEvent))
		{
			switch (sfmlEvent.type)
			{
			case sf::Event::Closed:
			{
				window.close();
				break;
			}
			}
		}

	}

	char c;
	std::cin >> c;
	return 0;
}