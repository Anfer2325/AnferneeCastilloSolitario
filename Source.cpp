#include <SFML/Graphics.hpp>
#include "Baraja.h"
#include "Carta.h"
#include <stdio.h>
#include <Windows.h>
#include "Stacks.h"
#include "Pilas.h"
#include "Cartav2.h"
#include <vector>
#include <fstream>
int main()
{
	cout << "Ingrese el nombre del jugador: ";
	string nombre;
	cin >> nombre;
	int puntuacion = 0;
	//medidas de las cartas de alto 310 y de ancho 140
	Baraja* a = new Baraja();
	cout << " Tamanoooo: " << a->TamBajara()<<"\n";
	Baraja* a2 = new Baraja(2);
	Stacks* stack1 = new Stacks();
	Stacks* stack2 = new Stacks();
	Stacks* stack3 = new Stacks();
	Stacks* stack4 = new Stacks();

	Pilas * pila1 = new Pilas(250, 250,&puntuacion);
	pila1->InitialAdd(a->getCarta());

	cout << " Tamanoooo: " << a->TamBajara() << "\n";

	Pilas * pila4 = new Pilas(850, 250, &puntuacion);
	pila4->InitialAdd(a->getCarta());
	pila4->InitialAdd(a->getCarta());
	pila4->InitialAdd(a->getCarta());
	pila4->InitialAdd(a->getCarta());
	cout << " Tamanoooo: " << a->TamBajara() << "\n";
	
	Pilas * pila3 = new Pilas(650, 250, &puntuacion);
	pila3->InitialAdd(a->getCarta());
	pila3->InitialAdd(a->getCarta());
	pila3->InitialAdd(a->getCarta());
	
	cout << " Tamanoooo: " << a->TamBajara() << "\n";

	Pilas * pila2 = new Pilas(450, 250, &puntuacion);
	pila2->InitialAdd(a->getCarta());
	pila2->InitialAdd(a->getCarta());
	
	cout << " Tamanoooo: " << a->TamBajara() << "\n";

	Pilas * pila5 = new Pilas(1050, 250, &puntuacion);
	pila5->InitialAdd(a->getCarta());
	pila5->InitialAdd(a->getCarta());
	pila5->InitialAdd(a->getCarta());
	pila5->InitialAdd(a->getCarta());
	pila5->InitialAdd(a->getCarta());

	Pilas * pila6 = new Pilas(1250, 250, &puntuacion);
	pila6->InitialAdd(a->getCarta());
	pila6->InitialAdd(a->getCarta());
	pila6->InitialAdd(a->getCarta());
	pila6->InitialAdd(a->getCarta());
	pila6->InitialAdd(a->getCarta());
	pila6->InitialAdd(a->getCarta());

	Pilas * pila7 = new Pilas(1450, 250, &puntuacion);
	pila7->InitialAdd(a->getCarta());
	pila7->InitialAdd(a->getCarta());
	pila7->InitialAdd(a->getCarta());
	pila7->InitialAdd(a->getCarta());
	pila7->InitialAdd(a->getCarta());
	pila7->InitialAdd(a->getCarta());
	pila7->InitialAdd(a->getCarta());

	puntuacion = 0;
	// barajas y stacks
	Sprite * barajaPrincipal = a->getSprite();
	Sprite * barajaSecundaria = a2->getSprite();
	barajaSecundaria->setPosition(180, 0);

	Sprite * stack1Sprite = stack1->getSprite();
	stack1Sprite->setPosition(1100, 0);

	Sprite * stack2Sprite = stack2->getSprite();
	stack2Sprite->setPosition(1250, 0);

	Sprite * stack3Sprite = stack3->getSprite();
	stack3Sprite->setPosition(1400, 0);

	Sprite * stack4Sprite = stack4->getSprite();
	stack4Sprite->setPosition(1550, 0);


	Texture * texturaPila1= new Texture();
	texturaPila1->loadFromFile("cards\\PNG\\pilas.png");

	Sprite * Spritepila1= new Sprite();
	Spritepila1->setTexture(*texturaPila1);
	Spritepila1->scale(0.2f, 0.2f);
	Spritepila1->setPosition(250,250);

	Sprite * Spritepila2 = new Sprite();
	Spritepila2->setTexture(*texturaPila1);
	Spritepila2->scale(0.2f, 0.2f);
	Spritepila2->setPosition(450, 250);

	Sprite * Spritepila3 = new Sprite();
	Spritepila3->setTexture(*texturaPila1);
	Spritepila3->scale(0.2f, 0.2f);
	Spritepila3->setPosition(650, 250);

	Sprite * Spritepila4 = new Sprite();
	Spritepila4->setTexture(*texturaPila1);
	Spritepila4->scale(0.2f, 0.2f);
	Spritepila4->setPosition(850, 250);

	Sprite * Spritepila5 = new Sprite();
	Spritepila5->setTexture(*texturaPila1);
	Spritepila5->scale(0.2f, 0.2f);
	Spritepila5->setPosition(1050, 250);

	Sprite * Spritepila6 = new Sprite();
	Spritepila6->setTexture(*texturaPila1);
	Spritepila6->scale(0.2f, 0.2f);
	Spritepila6->setPosition(1250, 250);

	Sprite * Spritepila7 = new Sprite();
	Spritepila7->setTexture(*texturaPila1);
	Spritepila7->scale(0.2f, 0.2f);
	Spritepila7->setPosition(1450, 250);


	



	sf::RenderWindow window(sf::VideoMode(1920, 1080), "SFML works!");

	sf::Vector2f vec;

	bool menuactive = true;
	sf::Texture BackgroundTexture;
	sf::Sprite background;
	background.setScale(1.2, 1.2);

	BackgroundTexture.loadFromFile("cards\\PNG\\background.jpg");
	background.setTexture(BackgroundTexture);
	sf::Clock clock;
	sf::Time time;
	unsigned int seconds;
	time += clock.restart();
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		// Mneu

		Font font;
		font.loadFromFile("cards\\PNG\\font.ttf");
		//Titulo;
		Text text("SOLITARIO", font);
		text.setCharacterSize(30);
		text.setStyle(sf::Text::Bold);
		text.setFillColor(sf::Color::White);
		text.setPosition(900, 50);

		//Iniciar juego text
		Text textIniciarJuego("Iniciar Juego", font);
		textIniciarJuego.setCharacterSize(30);
		textIniciarJuego.setStyle(sf::Text::Bold);
		textIniciarJuego.setFillColor(sf::Color::White);
		textIniciarJuego.setPosition(870, 250);

		//Ver Estadisticas text
		Text textEstadisticas("Estadisticas", font);
		textEstadisticas.setCharacterSize(30);
		textEstadisticas.setStyle(sf::Text::Bold);
		textEstadisticas.setFillColor(sf::Color::White);
		textEstadisticas.setPosition(870, 450);

		// Salir del juego text

		Text textSalir("Salir del juego", font);
		textSalir.setCharacterSize(30);
		textSalir.setStyle(sf::Text::Bold);
		textSalir.setFillColor(sf::Color::White);
		textSalir.setPosition(860, 650);

		Text textpunt("Puntuacion: " , font);
		textpunt.setCharacterSize(30);
		textpunt.setStyle(sf::Text::Bold);
		textpunt.setFillColor(sf::Color::White);
		textpunt.setPosition(560, 50);

		window.draw(background);
		window.draw(textIniciarJuego);
		window.draw(text);
		window.draw(textEstadisticas);
		window.draw(textSalir);

		

		//window.draw(textpunt);
		
		if (Mouse::isButtonPressed(Mouse::Left) &&textIniciarJuego.getGlobalBounds().contains(Mouse::getPosition(window).x,Mouse::getPosition(window).y))
		{
			menuactive = false;
			puntuacion -=puntuacion;
			puntuacion = -35;

		}


		if (Mouse::isButtonPressed(Mouse::Left) && textEstadisticas.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y))
		{

			ShellExecute(GetDesktopWindow(), "open", "board.txt", NULL, NULL, SW_SHOWNORMAL);
		}

		while (!menuactive)
		{ 
		time+= clock.restart();
		text.setString("Tiempo: "+to_string(time.asSeconds()));
		textpunt.setString("Puntuacion: " + to_string(puntuacion));
		window.clear();
		window.draw(background);
		window.draw(textpunt);
		window.draw(text);
		
		window.draw((*barajaPrincipal));
		window.draw((*barajaSecundaria));
		window.draw((*stack1Sprite));
		window.draw((*stack2Sprite));
		window.draw((*stack3Sprite));
		window.draw((*stack4Sprite));
		window.draw((*Spritepila1));
		window.draw((*Spritepila2));
		window.draw((*Spritepila3));
		window.draw((*Spritepila4));
		window.draw((*Spritepila5));
		window.draw((*Spritepila6));
		window.draw((*Spritepila7));
		pila1->imprimircartas(&window);
		pila2->imprimircartas(&window);
		pila3->imprimircartas(&window);
		/////////////////////////////////////////////////
		pila4->imprimircartas(&window);
		pila5->imprimircartas(&window);
		pila6->imprimircartas(&window);
		pila7->imprimircartas(&window);
		
		
		
		
		//mover carta
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left)
			&& (*barajaPrincipal).getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y) && a->clickable == true && a->dragable == true) {
			vec.x = sf::Mouse::getPosition(window).x;
			vec.y = sf::Mouse::getPosition(window).y;
			(*barajaPrincipal).setPosition(vec.x - (*barajaPrincipal).getGlobalBounds().width / 2, vec.y - (*barajaPrincipal).getGlobalBounds().height / 2);
			cout << "hola";
			window.draw((*barajaPrincipal));
		}

		// click en barajaPrincipal para meter carta a barajaSecundaria
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left)
			&& (*barajaPrincipal).getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y) && a->clickable == true && a->dragable == false) {

			//Paso carta de barajaPrincipal a barajaSecundaria
			Cartav2 *  temp2 = a->getCarta();
			a2->Agregar(temp2);

			//Obtengo el sprite de la ultima carta en barajaSecundaria
			barajaSecundaria = (a2->ultima);
			barajaSecundaria->setPosition(180, 0);

			Sleep(250);


		}
		// Movercartas de la baraja secundaria
		if (Mouse::isButtonPressed(Mouse::Left) &&
			(*barajaSecundaria).getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y) && a2->clickable == true && a2->dragable == true)
		{
			vec.x = sf::Mouse::getPosition(window).x;
			vec.y = sf::Mouse::getPosition(window).y;
			(*barajaSecundaria).setPosition(vec.x - (*barajaSecundaria).getGlobalBounds().width / 2, vec.y - (*barajaSecundaria).getGlobalBounds().height / 2);

			window.draw((*barajaPrincipal));

		}
		// insertar cartas en el primer Stack
		if (Mouse::isButtonPressed(Mouse::Left) &&
			(*stack1Sprite).getGlobalBounds().contains(barajaSecundaria->getPosition().x, barajaSecundaria->getPosition().y))
		{


			if (stack1->ultima == 0  || ((stack1->ultima->getvalor() + 1 == a2->ultima->getvalor()) && (stack1->ultima->gettipo() == a2->ultima->gettipo())))
			{

				if (stack1->ultima == 0 && a2->ultima->getvalor() != 1)
				{
					barajaSecundaria = a2->ultima;
					barajaSecundaria->setPosition(180, 0);
					stack1Sprite->setPosition(1100, 0);
				}
				else {

					if (stack1->agregar((a2->getUltimaCarta())))
					{
						puntuacion += 10;
						barajaSecundaria->setPosition(180, 0);
						stack1Sprite->setPosition(1100, 0);
						barajaSecundaria = a2->ultima;
					}
					
					else {
						cout << "DIO FALSE";
						barajaSecundaria = a2->ultima;
						barajaSecundaria->setPosition(180, 0);
						stack1Sprite->setPosition(1100, 0);
					}
				}
				

			}
			else {
				cout << "DIO FALSE";
				barajaSecundaria = a2->ultima;
				barajaSecundaria->setPosition(180, 0);
				stack1Sprite->setPosition(1100, 0);
			}

			
		}
		//insertar cartas en el segundo Stack
		if (Mouse::isButtonPressed(Mouse::Left) &&
			(*stack2Sprite).getGlobalBounds().contains(barajaSecundaria->getPosition().x, barajaSecundaria->getPosition().y))
		{


			if ((stack2->ultima == 0) ||
				((stack2->ultima->getvalor() + 1 == a2->ultima->getvalor()) &&
				(stack2->ultima->gettipo() == a2->ultima->gettipo())))
			{

				if (stack2->ultima == 0 && a2->ultima->getvalor() != 1)
				{
					cout << "DIO FALSE";
					barajaSecundaria = a2->ultima;
					barajaSecundaria->setPosition(180, 0);
					stack2Sprite->setPosition(1250, 0);
				}
				else {
					if (stack2->agregar((a2->getUltimaCarta())))
					{
						barajaSecundaria->setPosition(180, 0);
						stack2Sprite->setPosition(1250, 0);
						barajaSecundaria = a2->ultima;
						puntuacion += 10;
					}

					else {
						cout << "DIO FALSE";
						barajaSecundaria = a2->ultima;
						barajaSecundaria->setPosition(180, 0);
						stack2Sprite->setPosition(1250, 0);
					}
				}
			}
			else {
				cout << "DIO FALSE";
				barajaSecundaria = a2->ultima;
				barajaSecundaria->setPosition(180, 0);
				stack2Sprite->setPosition(1250, 0);
			}

		


		}
		// Insertar cartas en el tercer stack
		if (Mouse::isButtonPressed(Mouse::Left) &&
			(*stack3Sprite).getGlobalBounds().contains(barajaSecundaria->getPosition().x, barajaSecundaria->getPosition().y))
		{


			if ((stack3->ultima == 0) ||
				((stack3->ultima->getvalor() + 1 == a2->ultima->getvalor()) &&
				(stack3->ultima->gettipo() == a2->ultima->gettipo())))
			{

				if (stack3->ultima == 0 && a2->ultima->getvalor() != 1)
				{
					cout << "DIO FALSE";
					barajaSecundaria = a2->ultima;
					barajaSecundaria->setPosition(180, 0);
					stack3Sprite->setPosition(1400, 0);
				}
				else {
					if (stack3->agregar((a2->getUltimaCarta())))
					{
						barajaSecundaria->setPosition(180, 0);
						stack3Sprite->setPosition(1400, 0);
						barajaSecundaria = a2->ultima;
						puntuacion += 10;
					}

					else {
						cout << "DIO FALSE";
						barajaSecundaria = a2->ultima;
						barajaSecundaria->setPosition(180, 0);
						stack3Sprite->setPosition(1400, 0);
					}
				}
			}
			else {
				cout << "DIO FALSE";
				barajaSecundaria = a2->ultima;
				barajaSecundaria->setPosition(180, 0);
				stack3Sprite->setPosition(1400, 0);
			}

		}
		// insertar cartas en el cuarto stack

		if (Mouse::isButtonPressed(Mouse::Left) &&
			(*stack4Sprite).getGlobalBounds().contains(barajaSecundaria->getPosition().x, barajaSecundaria->getPosition().y))
		{


			if ((stack4->ultima == 0) ||
				((stack4->ultima->getvalor() + 1 == a2->ultima->getvalor()) &&
				(stack4->ultima->gettipo() == a2->ultima->gettipo())))
			{

				if (stack4->ultima == 0 && a2->ultima->getvalor() != 1)
				{
					cout << "DIO FALSE";
					barajaSecundaria = a2->ultima;
					barajaSecundaria->setPosition(180, 0);
					stack4Sprite->setPosition(1550, 0);
				}
				else {
					if (stack4->agregar((a2->getUltimaCarta())))
					{
						barajaSecundaria->setPosition(180, 0);
						stack4Sprite->setPosition(1550, 0);
						barajaSecundaria = a2->ultima;
						puntuacion += 10;
					}

					else {
						cout << "DIO FALSE";
						barajaSecundaria = a2->ultima;
						barajaSecundaria->setPosition(180, 0);
						stack4Sprite->setPosition(1550, 0);
					}
				}
			}
			else {
				cout << "DIO FALSE";
				barajaSecundaria = a2->ultima;
				barajaSecundaria->setPosition(180, 0);
				stack4Sprite->setPosition(1550, 0);
			}

		}

		//Pilas
		Cartav2 * pila1select = pila1->checkInteraction(Mouse::getPosition(window).x, Mouse::getPosition(window).y, &window);
		Cartav2 * pila2select = pila2->checkInteraction(Mouse::getPosition(window).x, Mouse::getPosition(window).y, &window);
		Cartav2 * pila3select = pila3->checkInteraction(Mouse::getPosition(window).x, Mouse::getPosition(window).y, &window);
		Cartav2 * pila4select = pila4->checkInteraction(Mouse::getPosition(window).x, Mouse::getPosition(window).y, &window);
		Cartav2 * pila5select = pila5->checkInteraction(Mouse::getPosition(window).x, Mouse::getPosition(window).y, &window);
		Cartav2 * pila6select = pila6->checkInteraction(Mouse::getPosition(window).x, Mouse::getPosition(window).y, &window);
		Cartav2 * pila7select = pila7->checkInteraction(Mouse::getPosition(window).x, Mouse::getPosition(window).y, &window);
		//Insertar de pila1s a todos los stacks
		if (pila1select != NULL)
		{
			vector<Cartav2 *> temp = pila1->getFromPosition(pila1select);
			if (Mouse::isButtonPressed(Mouse::Left) &&
				(*stack4Sprite).getGlobalBounds().contains(pila1select->getPosition().x, pila1select->getPosition().y))
			{
				stack4->agregarPorVector(temp);
				puntuacion += 10;
				pila1->updatePila(temp);
				stack4Sprite->setPosition(1550, 0);
			}

			if (Mouse::isButtonPressed(Mouse::Left) &&
				(*stack3Sprite).getGlobalBounds().contains(pila1select->getPosition().x, pila1select->getPosition().y))
			{
				stack3->agregarPorVector(temp);
				puntuacion += 5;
				pila1->updatePila(temp);
				stack3Sprite->setPosition(1400, 0);
			}

			if (Mouse::isButtonPressed(Mouse::Left) &&
				(*stack2Sprite).getGlobalBounds().contains(pila1select->getPosition().x, pila1select->getPosition().y))
			{
				stack2->agregarPorVector(temp);
				puntuacion += 5;
				pila1->updatePila(temp);
				stack2Sprite->setPosition(1250, 0);
			}

			if (Mouse::isButtonPressed(Mouse::Left) &&
				(*stack1Sprite).getGlobalBounds().contains(pila1select->getPosition().x, pila1select->getPosition().y))
			{
				stack1->agregarPorVector(temp);
				puntuacion += 5;
				pila1->updatePila(temp);
				stack1Sprite->setPosition(1100, 0);
			}
		}
		if (pila2select != NULL)
		{
			vector<Cartav2 *> temp = pila2->getFromPosition(pila2select);
			if (Mouse::isButtonPressed(Mouse::Left) &&
				(*stack4Sprite).getGlobalBounds().contains(pila2select->getPosition().x, pila2select->getPosition().y))
			{
				stack4->agregarPorVector(temp);
				puntuacion += 5;
				pila2->updatePila(temp);
				stack4Sprite->setPosition(1550, 0);
			}

			if (Mouse::isButtonPressed(Mouse::Left) &&
				(*stack3Sprite).getGlobalBounds().contains(pila2select->getPosition().x, pila2select->getPosition().y))
			{
				stack3->agregarPorVector(temp);
				puntuacion += 5;
				pila2->updatePila(temp);
				stack3Sprite->setPosition(1400, 0);
			}

			if (Mouse::isButtonPressed(Mouse::Left) &&
				(*stack2Sprite).getGlobalBounds().contains(pila2select->getPosition().x, pila2select->getPosition().y))
			{
				stack2->agregarPorVector(temp);
				puntuacion += 5;
				pila2->updatePila(temp);
				stack2Sprite->setPosition(1250, 0);
			}

			if (Mouse::isButtonPressed(Mouse::Left) &&
				(*stack1Sprite).getGlobalBounds().contains(pila2select->getPosition().x, pila2select->getPosition().y))
			{
				stack1->agregarPorVector(temp);
				puntuacion += 5;
				pila2->updatePila(temp);
				stack1Sprite->setPosition(1100, 0);
			}
		}
		if (pila3select != NULL)
		{
			vector<Cartav2 *> temp = pila3->getFromPosition(pila3select);
			if (Mouse::isButtonPressed(Mouse::Left) &&
				(*stack4Sprite).getGlobalBounds().contains(pila3select->getPosition().x, pila3select->getPosition().y))
			{
				stack4->agregarPorVector(temp);
				puntuacion += 5;
				pila3->updatePila(temp);
				stack4Sprite->setPosition(1550, 0);
			}

			if (Mouse::isButtonPressed(Mouse::Left) &&
				(*stack3Sprite).getGlobalBounds().contains(pila3select->getPosition().x, pila3select->getPosition().y))
			{
				stack3->agregarPorVector(temp);
				puntuacion += 5;
				pila3->updatePila(temp);
				stack3Sprite->setPosition(1400, 0);
			}

			if (Mouse::isButtonPressed(Mouse::Left) &&
				(*stack2Sprite).getGlobalBounds().contains(pila3select->getPosition().x, pila3select->getPosition().y))
			{
				stack2->agregarPorVector(temp);
				puntuacion += 5;
				pila3->updatePila(temp);
				stack2Sprite->setPosition(1250, 0);
			}

			if (Mouse::isButtonPressed(Mouse::Left) &&
				(*stack1Sprite).getGlobalBounds().contains(pila3select->getPosition().x, pila3select->getPosition().y))
			{
				stack1->agregarPorVector(temp);
				puntuacion += 5;
				pila3->updatePila(temp);
				stack1Sprite->setPosition(1100, 0);
			}
		}
		if (pila4select != NULL)
		{
			vector<Cartav2 *> temp = pila4->getFromPosition(pila4select);
			if (Mouse::isButtonPressed(Mouse::Left) &&
				(*stack4Sprite).getGlobalBounds().contains(pila4select->getPosition().x, pila4select->getPosition().y))
			{
				stack4->agregarPorVector(temp);
				puntuacion += 5;
				pila4->updatePila(temp);
				stack4Sprite->setPosition(1550, 0);
			}

			if (Mouse::isButtonPressed(Mouse::Left) &&
				(*stack3Sprite).getGlobalBounds().contains(pila4select->getPosition().x, pila4select->getPosition().y))
			{
				stack3->agregarPorVector(temp);
				puntuacion += 5;
				pila4->updatePila(temp);
				stack3Sprite->setPosition(1400, 0);
			}

			if (Mouse::isButtonPressed(Mouse::Left) &&
				(*stack2Sprite).getGlobalBounds().contains(pila4select->getPosition().x, pila4select->getPosition().y))
			{
				stack2->agregarPorVector(temp);
				puntuacion += 5;
				pila4->updatePila(temp);
				stack2Sprite->setPosition(1250, 0);
			}

			if (Mouse::isButtonPressed(Mouse::Left) &&
				(*stack1Sprite).getGlobalBounds().contains(pila4select->getPosition().x, pila4select->getPosition().y))
			{
				stack1->agregarPorVector(temp);
				puntuacion += 5;
				pila4->updatePila(temp);
				stack1Sprite->setPosition(1100, 0);
			}
		}
		if (pila5select != NULL)
		{
			vector<Cartav2 *> temp = pila5->getFromPosition(pila5select);
			if (Mouse::isButtonPressed(Mouse::Left) &&
				(*stack4Sprite).getGlobalBounds().contains(pila5select->getPosition().x, pila5select->getPosition().y))
			{
				stack4->agregarPorVector(temp);
				puntuacion += 5;
				pila5->updatePila(temp);
				stack4Sprite->setPosition(1550, 0);
			}

			if (Mouse::isButtonPressed(Mouse::Left) &&
				(*stack3Sprite).getGlobalBounds().contains(pila5select->getPosition().x, pila5select->getPosition().y))
			{
				stack3->agregarPorVector(temp);
				puntuacion += 5;
				pila5->updatePila(temp);
				stack3Sprite->setPosition(1400, 0);
			}

			if (Mouse::isButtonPressed(Mouse::Left) &&
				(*stack2Sprite).getGlobalBounds().contains(pila5select->getPosition().x, pila5select->getPosition().y))
			{
				stack2->agregarPorVector(temp);
				puntuacion += 5;
				pila5->updatePila(temp);
				stack2Sprite->setPosition(1250, 0);
			}

			if (Mouse::isButtonPressed(Mouse::Left) &&
				(*stack1Sprite).getGlobalBounds().contains(pila5select->getPosition().x, pila5select->getPosition().y))
			{
				stack1->agregarPorVector(temp);
				puntuacion += 5;
				pila5->updatePila(temp);
				stack1Sprite->setPosition(1100, 0);
			}
		}
		if (pila6select != NULL)
		{
			vector<Cartav2 *> temp = pila6->getFromPosition(pila6select);
			if (Mouse::isButtonPressed(Mouse::Left) &&
				(*stack4Sprite).getGlobalBounds().contains(pila6select->getPosition().x, pila6select->getPosition().y))
			{
				stack4->agregarPorVector(temp);
				puntuacion += 5;
				pila6->updatePila(temp);
				stack4Sprite->setPosition(1550, 0);
			}

			if (Mouse::isButtonPressed(Mouse::Left) &&
				(*stack3Sprite).getGlobalBounds().contains(pila6select->getPosition().x, pila6select->getPosition().y))
			{
				stack3->agregarPorVector(temp);
				puntuacion += 5;
				pila6->updatePila(temp);
				stack3Sprite->setPosition(1400, 0);
			}

			if (Mouse::isButtonPressed(Mouse::Left) &&
				(*stack2Sprite).getGlobalBounds().contains(pila6select->getPosition().x, pila6select->getPosition().y))
			{
				stack2->agregarPorVector(temp);
				puntuacion += 5;
				pila6->updatePila(temp);
				stack2Sprite->setPosition(1250, 0);
			}

			if (Mouse::isButtonPressed(Mouse::Left) &&
				(*stack1Sprite).getGlobalBounds().contains(pila6select->getPosition().x, pila6select->getPosition().y))
			{
				stack1->agregarPorVector(temp);
				puntuacion += 5;
				pila6->updatePila(temp);
				stack1Sprite->setPosition(1100, 0);
			}
		}
		if (pila7select != NULL)
		{
			vector<Cartav2 *> temp = pila7->getFromPosition(pila7select);
			if (Mouse::isButtonPressed(Mouse::Left) &&
				(*stack4Sprite).getGlobalBounds().contains(pila7select->getPosition().x, pila7select->getPosition().y))
			{
				stack4->agregarPorVector(temp);
				puntuacion += 5;
				pila7->updatePila(temp);
				stack4Sprite->setPosition(1550, 0);
			}

			if (Mouse::isButtonPressed(Mouse::Left) &&
				(*stack3Sprite).getGlobalBounds().contains(pila7select->getPosition().x, pila7select->getPosition().y))
			{
				stack3->agregarPorVector(temp);
				puntuacion += 5;
				pila7->updatePila(temp);
				stack3Sprite->setPosition(1400, 0);
			}

			if (Mouse::isButtonPressed(Mouse::Left) &&
				(*stack2Sprite).getGlobalBounds().contains(pila7select->getPosition().x, pila7select->getPosition().y))
			{
				stack2->agregarPorVector(temp);
				puntuacion += 5;
				pila7->updatePila(temp);
				stack2Sprite->setPosition(1250, 0);
			}

			if (Mouse::isButtonPressed(Mouse::Left) &&
				(*stack1Sprite).getGlobalBounds().contains(pila7select->getPosition().x, pila7select->getPosition().y))
			{
				stack1->agregarPorVector(temp);
				puntuacion += 5;
				pila7->updatePila(temp);
				stack1Sprite->setPosition(1100, 0);
			}
		}

		//inserstar de barajasecundaria a pilas (erreglar bug de getultimacarta())
		if (pila3->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
			(*pila3->ultima).getGlobalBounds().contains(barajaSecundaria->getPosition().x, barajaSecundaria->getPosition().y))
		{
			
			if (pila3->agregar(a2->getUltimaCarta()))
			{
				barajaSecundaria = a2->ultima;
				barajaSecundaria->setPosition(180, 0);
				cout << "Se agrego";
				puntuacion += 5;
				Sleep(550);

			}
			else {
				barajaSecundaria = a2->ultima;
				barajaSecundaria->setPosition(180, 0);
			}
		}

		if (pila2->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
			(*pila2->ultima).getGlobalBounds().contains(barajaSecundaria->getPosition().x, barajaSecundaria->getPosition().y))
		{
			if (pila2->agregar(a2->getUltimaCarta()))
			{
				barajaSecundaria = a2->ultima;
				barajaSecundaria->setPosition(180, 0);
				puntuacion += 5;
				cout << "Se agrego";

			}
			else {
				barajaSecundaria = a2->ultima;
				barajaSecundaria->setPosition(180, 0);
			}
		}
		
		if (pila1->ultima!=0&& Mouse::isButtonPressed(Mouse::Left) &&
			(*pila1->ultima).getGlobalBounds().contains(barajaSecundaria->getPosition().x, barajaSecundaria->getPosition().y))
		{
			if (pila1->agregar(a2->getUltimaCarta()))
			{
				barajaSecundaria = a2->ultima;
				barajaSecundaria->setPosition(180, 0);
				cout << "Se agrego";
				puntuacion += 5;

			}
			else {
				barajaSecundaria = a2->ultima;
				barajaSecundaria->setPosition(180, 0);
			}
		}
		
		if (pila4->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
			(*pila4->ultima).getGlobalBounds().contains(barajaSecundaria->getPosition().x, barajaSecundaria->getPosition().y))
		{
			if (pila4->agregar(a2->getUltimaCarta()))
			{
				barajaSecundaria = a2->ultima;
				barajaSecundaria->setPosition(180, 0);
				cout << "Se agrego";
				puntuacion += 5;

			}
			else {
				barajaSecundaria = a2->ultima;
				barajaSecundaria->setPosition(180, 0);
			}
		}
	
		if (pila5->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
			(*pila5->ultima).getGlobalBounds().contains(barajaSecundaria->getPosition().x, barajaSecundaria->getPosition().y))
		{
			if (pila5->agregar(a2->getUltimaCarta()))
			{
				barajaSecundaria = a2->ultima;
				barajaSecundaria->setPosition(180, 0);
				cout << "Se agrego";
				puntuacion += 5;

			}
			else {
				barajaSecundaria = a2->ultima;
				barajaSecundaria->setPosition(180, 0);
			}
		}
						
		if (pila6->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
			(*pila6->ultima).getGlobalBounds().contains(barajaSecundaria->getPosition().x, barajaSecundaria->getPosition().y))
		{
			if (pila6->agregar(a2->getUltimaCarta()))
			{
				barajaSecundaria = a2->ultima;
				barajaSecundaria->setPosition(180, 0);
				cout << "Se agrego";
				puntuacion += 5;

			}
			else {
				barajaSecundaria = a2->ultima;
				barajaSecundaria->setPosition(180, 0);
			}
		}
		
		if (pila7->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
			(*pila7->ultima).getGlobalBounds().contains(barajaSecundaria->getPosition().x, barajaSecundaria->getPosition().y))
		{
			if (pila7->agregar(a2->getUltimaCarta()))
			{
				barajaSecundaria = a2->ultima;
				barajaSecundaria->setPosition(180, 0);
				cout << "Se agrego";
				puntuacion += 5;

			}
			else {
				barajaSecundaria = a2->ultima;
				barajaSecundaria->setPosition(180, 0);
			}
		}
		//Inserccion de pila a otras pilas
		
		if (pila1select != NULL)
		{
			
			vector<Cartav2 *> temp = pila1->getFromPosition(pila1select);

			// Insertando en pila 2
			if (pila2->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
				(*pila2->ultima).getGlobalBounds().contains(pila1select->getPosition().x, pila1select->getPosition().y))
			{
				bool result=pila2->addFromAnotherPile(temp);
				if (result)
				{
					pila1->updatePila(temp);
					cout << "Se llama update";
				}
				else
					pila1->resetCartas();
				
			}

			//Insertando en pila 3
			if (pila3->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
				(*pila3->ultima).getGlobalBounds().contains(pila1select->getPosition().x, pila1select->getPosition().y))
			{
				bool result = pila3->addFromAnotherPile(temp);
				if (result)
				{
					pila1->updatePila(temp);
					cout << "Se llama update";
				}
				else
					pila1->resetCartas();

			}

			//Insertando en pila4
			if (pila4->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
				(*pila4->ultima).getGlobalBounds().contains(pila1select->getPosition().x, pila1select->getPosition().y))
			{
				bool result = pila4->addFromAnotherPile(temp);
				if (result)
				{
					pila1->updatePila(temp);
					cout << "Se llama update";
				}
				else
					pila1->resetCartas();

			}

			//Insertando pila5
			if (pila5->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
				(*pila5->ultima).getGlobalBounds().contains(pila1select->getPosition().x, pila1select->getPosition().y))
			{
				bool result = pila5->addFromAnotherPile(temp);
				if (result)
				{
					pila1->updatePila(temp);
					cout << "Se llama update";
				}
				else
					pila1->resetCartas();

			}
			//Insertando pila6
			if (pila6->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
				(*pila6->ultima).getGlobalBounds().contains(pila1select->getPosition().x, pila1select->getPosition().y))
			{
				bool result = pila6->addFromAnotherPile(temp);
				if (result)
				{
					pila1->updatePila(temp);
					cout << "Se llama update";
				}
				else
					pila1->resetCartas();

			}
			//Insertando pila7
			if (pila7->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
				(*pila7->ultima).getGlobalBounds().contains(pila1select->getPosition().x, pila1select->getPosition().y))
			{
				bool result = pila7->addFromAnotherPile(temp);
				if (result)
				{
					pila1->updatePila(temp);
					cout << "Se llama update";
				}
				else
					pila1->resetCartas();

			}
		}

		if (pila2select != NULL)
		{

			vector<Cartav2 *> temp = pila2->getFromPosition(pila2select);

			// Insertando en pila 1
			if (pila1->ultima != 0 &&  Mouse::isButtonPressed(Mouse::Left) &&
				(*pila1->ultima).getGlobalBounds().contains(pila2select->getPosition().x, pila2select->getPosition().y))
			{
				bool result = pila1->addFromAnotherPile(temp);
				if (result)
				{
					pila2->updatePila(temp);
					cout << "Se llama update";
				}
				else
					pila2->resetCartas();

			}

			//Insertando en pila 3
			if (pila3->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
				(*pila3->ultima).getGlobalBounds().contains(pila2select->getPosition().x, pila2select->getPosition().y))
			{
				bool result = pila3->addFromAnotherPile(temp);
				if (result)
				{
					pila2->updatePila(temp);
					cout << "Se llama update";
				}
				else
					pila2->resetCartas();

			}

			//Insertando en pila4
			if (pila4->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
				(*pila4->ultima).getGlobalBounds().contains(pila2select->getPosition().x, pila2select->getPosition().y))
			{
				bool result = pila4->addFromAnotherPile(temp);
				if (result)
				{
					pila2->updatePila(temp);
					cout << "Se llama update";
				}
				else
					pila2->resetCartas();

			}
	
			//Insertando pila5
			if (pila5->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
				(*pila5->ultima).getGlobalBounds().contains(pila2select->getPosition().x, pila2select->getPosition().y))
			{
				bool result = pila5->addFromAnotherPile(temp);
				if (result)
				{
					pila2->updatePila(temp);
					cout << "Se llama update";
				}
				else
					pila2->resetCartas();

			}
			//Insertando pila6
			if (pila6->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
				(*pila6->ultima).getGlobalBounds().contains(pila2select->getPosition().x, pila2select->getPosition().y))
			{
				bool result = pila6->addFromAnotherPile(temp);
				if (result)
				{
					pila2->updatePila(temp);
					cout << "Se llama update";
				}
				else
					pila2->resetCartas();

			}
			//Insertando pila7
			if (pila7->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
				(*pila7->ultima).getGlobalBounds().contains(pila2select->getPosition().x, pila2select->getPosition().y))
			{
				bool result = pila7->addFromAnotherPile(temp);
				if (result)
				{
					pila2->updatePila(temp);
					cout << "Se llama update";
				}
				else
					pila2->resetCartas();

			}
		}

		if (pila3select != NULL)
		{

			vector<Cartav2 *> temp = pila3->getFromPosition(pila3select);

			// Insertando en pila 1
			if (pila1->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
				(*pila1->ultima).getGlobalBounds().contains(pila3select->getPosition().x, pila3select->getPosition().y))
			{
				bool result = pila1->addFromAnotherPile(temp);
				if (result)
				{
					pila3->updatePila(temp);
					cout << "Se llama update";
				}
				else
					pila3->resetCartas();

			}

			//Insertando en pila 2
			if (pila2->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
				(*pila2->ultima).getGlobalBounds().contains(pila3select->getPosition().x, pila3select->getPosition().y))
			{
				bool result = pila2->addFromAnotherPile(temp);
				if (result)
				{
					pila3->updatePila(temp);
					cout << "Se llama update";
				}
				else
					pila3->resetCartas();

			}

			//Insertando en pila4
			if (pila4->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
				(*pila4->ultima).getGlobalBounds().contains(pila3select->getPosition().x, pila3select->getPosition().y))
			{
				bool result = pila4->addFromAnotherPile(temp);
				if (result)
				{
					pila3->updatePila(temp);
					cout << "Se llama update";
				}
				else
					pila3->resetCartas();

			}
			//Insertando pila5
			if (pila5->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
				(*pila5->ultima).getGlobalBounds().contains(pila3select->getPosition().x, pila3select->getPosition().y))
			{
				bool result = pila5->addFromAnotherPile(temp);
				if (result)
				{
					pila3->updatePila(temp);
					cout << "Se llama update";
				}
				else
					pila3->resetCartas();

			}
			//Insertando pila6
			if (pila6->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
				(*pila6->ultima).getGlobalBounds().contains(pila3select->getPosition().x, pila3select->getPosition().y))
			{
				bool result = pila6->addFromAnotherPile(temp);
				if (result)
				{
					pila3->updatePila(temp);
					cout << "Se llama update";
				}
				else
					pila3->resetCartas();

			}
			//Insertando pila7
			if (pila7->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
				(*pila7->ultima).getGlobalBounds().contains(pila3select->getPosition().x, pila3select->getPosition().y))
			{
				bool result = pila7->addFromAnotherPile(temp);
				if (result)
				{
					pila3->updatePila(temp);
					cout << "Se llama update";
				}
				else
					pila3->resetCartas();

			}
		}

		if (pila4select != NULL)
		{

			vector<Cartav2 *> temp = pila4->getFromPosition(pila4select);

			// Insertando en pila 1
			if (pila1->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
				(*pila1->ultima).getGlobalBounds().contains(pila4select->getPosition().x, pila4select->getPosition().y))
			{
				bool result = pila1->addFromAnotherPile(temp);
				if (result)
				{
					pila4->updatePila(temp);
					cout << "Se llama update";
					Sleep(250);
				}
				else
					pila4->resetCartas();

			}

			//Insertando en pila 2
			if (pila2->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
				(*pila2->ultima).getGlobalBounds().contains(pila4select->getPosition().x, pila4select->getPosition().y))
			{
				bool result = pila2->addFromAnotherPile(temp);
				if (result)
				{
					pila4->updatePila(temp);
					cout << "Se llama update";
					Sleep(250);
				}
				else
					pila4->resetCartas();

			}

			//Insertando en pila3
			if (pila3->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
				(*pila3->ultima).getGlobalBounds().contains(pila4select->getPosition().x, pila4select->getPosition().y))
			{
				bool result = pila3->addFromAnotherPile(temp);
				if (result)
				{
					pila4->updatePila(temp);
					cout << "Se llama update";
					Sleep(250);
				}
				else
					pila4->resetCartas();

			}


			//Insertando pila5
			if (pila5->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
				(*pila5->ultima).getGlobalBounds().contains(pila4select->getPosition().x, pila4select->getPosition().y))
			{
				bool result = pila5->addFromAnotherPile(temp);
				if (result)
				{
					pila4->updatePila(temp);
					cout << "Se llama update";
					Sleep(250);
				}
				else
					pila4->resetCartas();

			}
			//Insertando pila6
			if (pila6->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
				(*pila6->ultima).getGlobalBounds().contains(pila4select->getPosition().x, pila4select->getPosition().y))
			{
				bool result = pila6->addFromAnotherPile(temp);
				if (result)
				{
					pila4->updatePila(temp);
					cout << "Se llama update";
					Sleep(250);
				}
				else
					pila4->resetCartas();

			}
			//Insertando pila7
			if (pila7->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
				(*pila7->ultima).getGlobalBounds().contains(pila4select->getPosition().x, pila4select->getPosition().y))
			{
				bool result = pila7->addFromAnotherPile(temp);
				if (result)
				{
					pila4->updatePila(temp);
					cout << "Se llama update";
					Sleep(250);
				}
				else
					pila4->resetCartas();

			}
		}

		if (pila5select != NULL)
		{

			vector<Cartav2 *> temp = pila5->getFromPosition(pila5select);

			// Insertando en pila 1
			if (pila1->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
				(*pila1->ultima).getGlobalBounds().contains(pila5select->getPosition().x, pila5select->getPosition().y))
			{
				bool result = pila1->addFromAnotherPile(temp);
				if (result)
				{
					pila5->updatePila(temp);
					cout << "Se llama update";
				}
				else
					pila5->resetCartas();

			}

			//Insertando en pila 2
			if (pila2->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
				(*pila2->ultima).getGlobalBounds().contains(pila5select->getPosition().x, pila5select->getPosition().y))
			{
				bool result = pila2->addFromAnotherPile(temp);
				if (result)
				{
					pila5->updatePila(temp);
					cout << "Se llama update";
				}
				else
					pila5->resetCartas();

			}

			//Insertando en pila3
			if (pila3->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
				(*pila3->ultima).getGlobalBounds().contains(pila5select->getPosition().x, pila5select->getPosition().y))
			{
				bool result = pila3->addFromAnotherPile(temp);
				if (result)
				{
					pila5->updatePila(temp);
					cout << "Se llama update";
				}
				else
					pila5->resetCartas();

			}


			//Insertando pila4
			if (pila4->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
				(*pila4->ultima).getGlobalBounds().contains(pila5select->getPosition().x, pila5select->getPosition().y))
			{
				bool result = pila4->addFromAnotherPile(temp);
				if (result)
				{
					pila5->updatePila(temp);
					cout << "Se llama update";
				}
				else
					pila5->resetCartas();

			}
			//Insertando pila6
			if (pila6->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
				(*pila6->ultima).getGlobalBounds().contains(pila5select->getPosition().x, pila5select->getPosition().y))
			{
				bool result = pila6->addFromAnotherPile(temp);
				if (result)
				{
					pila5->updatePila(temp);
					cout << "Se llama update";
				}
				else
					pila5->resetCartas();

			}
			//Insertando pila7
			if (pila7->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
				(*pila7->ultima).getGlobalBounds().contains(pila5select->getPosition().x, pila5select->getPosition().y))
			{
				bool result = pila7->addFromAnotherPile(temp);
				if (result)
				{
					pila5->updatePila(temp);
					cout << "Se llama update";
				}
				else
					pila5->resetCartas();

			}
		}

		if (pila6select != NULL)
		{

			vector<Cartav2 *> temp = pila6->getFromPosition(pila6select);

			// Insertando en pila 1
			if (pila1->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
				(*pila1->ultima).getGlobalBounds().contains(pila6select->getPosition().x, pila6select->getPosition().y))
			{
				bool result = pila1->addFromAnotherPile(temp);
				if (result)
				{
					pila6->updatePila(temp);
					cout << "Se llama update";
					Sleep(250);
				}
				else
					pila6->resetCartas();

			}

			//Insertando en pila 2
			if (pila2->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
				(*pila2->ultima).getGlobalBounds().contains(pila6select->getPosition().x, pila6select->getPosition().y))
			{
				bool result = pila2->addFromAnotherPile(temp);
				if (result)
				{
					pila6->updatePila(temp);
					cout << "Se llama update";
					Sleep(250);
				}
				else
					pila6->resetCartas();

			}

			//Insertando en pila3
			if (pila3->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
				(*pila3->ultima).getGlobalBounds().contains(pila6select->getPosition().x, pila6select->getPosition().y))
			{
				bool result = pila3->addFromAnotherPile(temp);
				if (result)
				{
					pila6->updatePila(temp);
					cout << "Se llama update";
					Sleep(150);
				}
				else
					pila6->resetCartas();

			}


			//Insertando pila4
			if (pila4->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
				(*pila4->ultima).getGlobalBounds().contains(pila6select->getPosition().x, pila6select->getPosition().y))
			{
				bool result = pila4->addFromAnotherPile(temp);
				if (result)
				{
					pila6->updatePila(temp);
					cout << "Se llama update";
					Sleep(250);
				}
				else
					pila6->resetCartas();

			}
			//Insertando pila5
			if (pila5->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
				(*pila5->ultima).getGlobalBounds().contains(pila6select->getPosition().x, pila6select->getPosition().y))
			{
				bool result = pila5->addFromAnotherPile(temp);
				if (result)
				{
					pila6->updatePila(temp);
					cout << "Se llama update";
					Sleep(250);
				}
				else
					pila6->resetCartas();

			}
			//Insertando pila7
			if (pila7->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
				(*pila7->ultima).getGlobalBounds().contains(pila6select->getPosition().x, pila6select->getPosition().y))
			{
				bool result = pila7->addFromAnotherPile(temp);
				if (result)
				{
					pila6->updatePila(temp);
					cout << "Se llama update";
					Sleep(250);
				}
				else
					pila6->resetCartas();

			}
		}
		
		if (pila7select != NULL)
		{

			vector<Cartav2 *> temp = pila7->getFromPosition(pila7select);

			// Insertando en pila 1
			if (pila1->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
				(*pila1->ultima).getGlobalBounds().contains(pila7select->getPosition().x, pila7select->getPosition().y))
			{
				bool result = pila1->addFromAnotherPile(temp);
				if (result)
				{
					pila7->updatePila(temp);
					cout << "Se llama update";
				}
				else
					pila7->resetCartas();

			}

			//Insertando en pila 2
			if (pila2->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
				(*pila2->ultima).getGlobalBounds().contains(pila7select->getPosition().x, pila7select->getPosition().y))
			{
				bool result = pila2->addFromAnotherPile(temp);
				if (result)
				{
					pila7->updatePila(temp);
					cout << "Se llama update";
				}
				else
					pila7->resetCartas();

			}

			//Insertando en pila3
			if (pila3->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
				(*pila3->ultima).getGlobalBounds().contains(pila7select->getPosition().x, pila7select->getPosition().y))
			{
				bool result = pila3->addFromAnotherPile(temp);
				if (result)
				{
					pila7->updatePila(temp);
					cout << "Se llama update";
				}
				else
					pila7->resetCartas();

			}


			//Insertando pila4
			if (pila4->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
				(*pila4->ultima).getGlobalBounds().contains(pila7select->getPosition().x, pila7select->getPosition().y))
			{
				bool result = pila4->addFromAnotherPile(temp);
				if (result)
				{
					pila7->updatePila(temp);
					cout << "Se llama update";
				}
				else
					pila7->resetCartas();

			}
			//Insertando pila5
			if (pila5->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
				(*pila5->ultima).getGlobalBounds().contains(pila7select->getPosition().x, pila7select->getPosition().y))
			{
				bool result = pila5->addFromAnotherPile(temp);
				if (result)
				{
					pila7->updatePila(temp);
					cout << "Se llama update";
				}
				else
					pila7->resetCartas();

			}
			//Insertando pila6
			if (pila6->ultima != 0 && Mouse::isButtonPressed(Mouse::Left) &&
				(*pila6->ultima).getGlobalBounds().contains(pila7select->getPosition().x, pila7select->getPosition().y))
			{
				bool result = pila6->addFromAnotherPile(temp);
				if (result)
				{
					pila7->updatePila(temp);
					cout << "Se llama update";
				}
				else
					pila7->resetCartas();

			}
		}

		if (Mouse::isButtonPressed(Mouse::Left) && textpunt.getGlobalBounds().contains(Mouse::getPosition(window).x, Mouse::getPosition(window).y))
		{
			ofstream archivo("board.txt", ios::app);

			archivo <<"Jugador: "<< nombre << " Puntuacion: "<< puntuacion << " Tiempo: "<<time.asSeconds()<< '\n';
			archivo.close();
			menuactive = true;


		}
		
		window.display();
		//Mouse::setPosition(sf::Vector2i(390, 250),window);
		}
		window.display();
		
	}
	
}

void gotoxy(int x, int y) {
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);
}
