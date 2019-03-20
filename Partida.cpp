#include "Partida.h"
#include <SFML/Graphics.hpp>
#include "Baraja.h"
#include "Carta.h"
#include <stdio.h>
#include <Windows.h>
#include "Stacks.h"


Partida::Partida()
{
	Baraja* a = new Baraja();
	Baraja* a2 = new Baraja(2);
	Stacks* stack1 = new Stacks();
	
	


	// barajas y stacks
	Sprite * barajaPrincipal = a->getSprite();
	Sprite * barajaSecundaria = a2->getSprite();
	barajaSecundaria->setPosition(180, 0);
	Sprite * stack1Sprite = stack1->getSprite();
	stack1Sprite->setPosition(500, 0);


	sf::RenderWindow window(sf::VideoMode(1280, 720), "SFML works!");

	sf::Vector2f vec;

	

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw((*barajaPrincipal));
		window.draw((*barajaSecundaria));
		window.draw((*stack1Sprite));

		//mover carta
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left)
			&& (*barajaPrincipal).getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y) && a->clickable == true && a->dragable == true) {
			vec.x = sf::Mouse::getPosition(window).x;
			vec.y = sf::Mouse::getPosition(window).y;
			(*barajaPrincipal).setPosition(vec.x - (*barajaPrincipal).getGlobalBounds().width / 2, vec.y - (*barajaPrincipal).getGlobalBounds().height / 2);
			cout << "hola";
			window.draw((*barajaPrincipal));
		}

		// click en baraja
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left)
			&& (*barajaPrincipal).getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y) && a->clickable == true && a->dragable == false) {

			cout << "prueba hola";

			Cartav2 *  temp2 = a->getCarta();
			barajaSecundaria = (temp2);
			barajaSecundaria->setPosition(180, 0);
			cout << "IMPRESION A2 \n\n";
			//a2->imprimir();
			Sleep(100);


		}
	

		window.display();


	}
	system("pause");

}


Partida::~Partida()
{
}
