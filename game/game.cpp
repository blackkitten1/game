#include <SFML/Graphics.hpp>
#include <iostream>
int main()

{

	sf::RenderWindow window(sf::VideoMode(1080, 720), "Thunder Stike");
	////// Texture
	sf::Texture playerTexture;
	if (!playerTexture.loadFromFile("img/spaceship1.png"))
	{
		std::cout << "Load failed" << std::endl;
	}

	sf::Sprite shapeSprite;
	shapeSprite.setTexture(playerTexture);
	shapeSprite.setTextureRect(sf::IntRect(0, 0, 70, 70));

	while (window.isOpen())
	{
		window.draw(shapeSprite);
		
		window.display();
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		{
			shapeSprite.move(.1f, 0.f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		{
			shapeSprite.move(-.1f, 0.f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		{
			shapeSprite.move(0.f, -.1f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		{
			shapeSprite.move(0.f, .1f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
		{
			window.close();
		}
		window.clear();
	}
	return 0;
}