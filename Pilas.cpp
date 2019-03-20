#include "Pilas.h"

#include <iostream>

Pilas::Pilas(int posX, int posY,int * punt):posX(posX),posY(posY) ,primera(0),ultima(0)
{
	texture.loadFromFile("cards\\PNG\\oculta.png");
	sprite.setTexture(texture);
	puntuacion = punt;
}


Pilas::~Pilas()
{
}


void Pilas::agregarInicial(Cartav2 * nuevaCarta)
{
	if (primera==0 || ultima==0)
	{
		this->primera = nuevaCarta;
		this->ultima = nuevaCarta;
		primera->setSiguiente(ultima);
		primera->setAnterior(ultima);
		ultima->setAnterior(primera);
		ultima->setSiguiente(primera);
	}
	else
	{
		ultima->setSiguiente(nuevaCarta);
		primera->setAnterior(nuevaCarta);
		nuevaCarta->setAnterior(ultima);
		nuevaCarta->setSiguiente(primera);
		ultima = nuevaCarta;

	}
}

int Pilas::size()
{
	int tam = 0;
	Cartav2 * temp;
	temp = primera;
	do
	{ 
		if (temp != 0)
		{
			tam++;
			temp = temp->getSiguiente();
		}
		
	} while (temp != primera);
	return tam;
}

//vector<Cartav2 *> Pilas::getFromPosition(int pos)
//{
//	vector<Cartav2 *> packCartas;
//	while (pos <= cartas.size())
//	{
//		packCartas.push_back(cartas.at(pos));
//		pos++;
//	}
//	return  packCartas;
//}

void Pilas::InitialAdd(Cartav2 * nuevaCarta)
{
		if (primera == 0 )
		{
			this->primera = nuevaCarta;
			this->ultima = nuevaCarta;
			primera->setSiguiente(ultima);
			primera->setAnterior(ultima);
			ultima->setAnterior(primera);
			ultima->setSiguiente(primera);
			sprite = (*ultima);
			nuevaCarta->setPosition(posX, posY);
			nuevaCarta->ix = posX;
			nuevaCarta->iy = posY;
			posY += 30;
			
			nuevaCarta->ocultada = true;
			nuevaCarta->creada = false;
			
			cartas.push_back(nuevaCarta);
		
		}
		else
		{
				ultima->setSiguiente(nuevaCarta);
				primera->setAnterior(nuevaCarta);
				nuevaCarta->setAnterior(ultima);
				nuevaCarta->setSiguiente(primera);
				ultima = nuevaCarta;
				sprite = (*ultima);
				nuevaCarta->setPosition(posX, posY);
				nuevaCarta->ix = posX;
				nuevaCarta->iy = posY;
				posY += 30;
				nuevaCarta->ocultada = true;
				nuevaCarta->creada = false;
				cartas.push_back(nuevaCarta);
				
			
		}
	

}
bool Pilas::addFromAnotherPile(vector<Cartav2 *> temp)
{
	for (std::vector<Cartav2 *>::iterator it = temp.begin(); it != temp.end(); it++)
	{
		if ((ultima == 0) ||
			((ultima->getvalor() - 1 == (*it)->getvalor()) &&
			(ultima->getcolor() != (*it)->getcolor())))
		{
			cout << "Se agrega";

			bool result = this->agregar((*it));
			if (!result)
				return false;
		}
		else
		return false;
	}
	return true;
}
bool Pilas::agregar(Cartav2 *  nuevaCarta)
	{


		if (primera == 0 && nuevaCarta->getvalor() == 13)
		{
			this->primera = nuevaCarta;
			this->ultima = nuevaCarta;
			primera->setSiguiente(ultima);
			primera->setAnterior(ultima);
			ultima->setAnterior(primera);
			ultima->setSiguiente(primera);
			sprite = (*ultima);
			nuevaCarta->setPosition(posX, posY);
			nuevaCarta->ix = posX;
			nuevaCarta->iy = posY;
			posY += 30;
			
			cartas.push_back(nuevaCarta);
			return true;
		}
		else {
			if (nuevaCarta->getvalor() == ultima->getvalor() - 1 && nuevaCarta->getcolor() != ultima->getcolor())
			{
				ultima->setSiguiente(nuevaCarta);
				primera->setAnterior(nuevaCarta);
				nuevaCarta->setAnterior(ultima);
				nuevaCarta->setSiguiente(primera);
				ultima = nuevaCarta;
				sprite = (*ultima);
				nuevaCarta->setPosition(posX, posY);
				nuevaCarta->ix = posX;
				nuevaCarta->iy = posY;
				posY += 30;
				cartas.push_back(nuevaCarta);
				return true;
			}
			cout << "Retorna false";
			return false;

		}

		
	}


	void Pilas::imprimircartas(RenderWindow * window)
	{
		int x = 250;
		int y = 250;
		Cartav2 * actual = primera;
	/*	while (actual != 0)
		{
			window->draw(*actual);
			actual = actual->getSiguiente();
		}*/
		for (std::vector<Cartav2 *>::iterator it = cartas.begin(); it != cartas.end(); it++)
		{
		
			if ((*it)->ocultada != true)
				window->draw(*(*it));
			else if ((*it)->creada == false)
			{
				
				
					Texture *temp = new Texture;
					Sprite* spriteTemp = new Sprite();
					temp->loadFromFile("cards\\PNG\\oculta.png");
					spriteTemp->setTexture(*temp);
					spriteTemp->setPosition((*it)->ix, (*it)->iy);
					spriteTemp->scale(0.2f, 0.2f);
					(*it)->creada = true;
					(*it)->ocult = spriteTemp;
					window->draw(*spriteTemp);
					cout << "hola";
				
			
			}
			else
			{
				window->draw(*(*it)->ocult);
			}
			
				
				//window->draw(sprite);
			
		}

		liberarUltima();
	
	}

	Cartav2 * Pilas::checkInteraction(int mx, int my,RenderWindow * window)
	{
		
		 //Movimiento funcional usando lista enlazada
	/*	Cartav2 * actual = primera;
		do
		{
			if (my >= actual->getPosition().y && my <= actual->getPosition().y + 30 && mx >= actual->getPosition().x && mx <= actual->getPosition().x + 140
				&& Mouse::isButtonPressed(Mouse::Left))
			{
				int x = Mouse::getPosition((*window)).x;
				int y = Mouse::getPosition((*window)).y;
				actual->setPosition(x - (actual)->getGlobalBounds().width / 2, y - (actual)->getGlobalBounds().height / 8);
				bool primer = true;
				int cont = 30;

				Cartav2 * temp = actual->getSiguiente();
				while (temp != primera)
				{
					temp->setPosition(x - temp->getGlobalBounds().width / 2, y - temp->getGlobalBounds().height / 8 + cont);
					cont += 30;
					temp = temp->getSiguiente();
					cout << "hola";
				}
			}
			else { actual = actual->getSiguiente(); }
		} while (actual != primera);*/
		

		// Movimiento funcional usando vectores


		for (std::vector<Cartav2 *>::iterator it = cartas.begin(); it != cartas.end(); it++)
		{
			if (my>=(*it)->getPosition().y && my<= (*it)->getPosition().y+30 && mx>= (*it)->getPosition().x && mx<= (*it)->getPosition().x+140)
			{
				if (Mouse::isButtonPressed(Mouse::Left))
				{
					
				
					int x = Mouse::getPosition((*window)).x;
					int y = Mouse::getPosition((*window)).y;
					(*it)->setPosition(x - (*it)->getGlobalBounds().width / 2, y -(*it)->getGlobalBounds().height / 8);
					vector<Cartav2 *>following = getFromPosition((*it));
					bool primera = true;
					int cont = 30;
					for (std::vector<Cartav2 *>::iterator it = following.begin(); it != following.end(); ++it)
					{
						if (primera)
						{
							
							(*it)->setPosition(x - (*it)->getGlobalBounds().width / 2, y - (*it)->getGlobalBounds().height / 8);
							primera = false;
						}
						else
						{
							
							(*it)->setPosition(x - (*it)->getGlobalBounds().width / 2, y - (*it)->getGlobalBounds().height / 8+cont);
							cont += 30;
						}

					}
													   
				}

				return(*it);
				
			}
			

		}

		return NULL;
	}

	vector<Cartav2 *> Pilas::getFromPosition(Cartav2 * pos)
	{
		vector<Cartav2 *> cards;
		bool encontrado = false;
		for (std::vector<Cartav2 *>::iterator it = cartas.begin(); it != cartas.end(); it++)
		{
			if ((*it) == pos)
			{
				encontrado = true;

			}

			if (encontrado)
			{
				cards.push_back((*it));
			}
		}
		return cards;
	}

	void Pilas::updatePila(vector<Cartav2*> vec)
	{
		// actualizando vector de cartas
		bool encontrado = false;
		int cont = 0;
		vector<Cartav2 *>newcards ;
		
		for (std::vector<Cartav2 *>::iterator it = cartas.begin(); it != cartas.end(); ++it)
		{
			cout << "prueba1";
			if ((*it) != vec.front())
			{
				newcards.push_back((*it));
				cout << "hay push back";
			
			}
			else if ((*it) == vec.front())
			{
				break;
			}
			

		}

		cartas = newcards;
		

		//actualizando lista enlazada de cartas
		Cartav2 * actual = primera;
		do {
			if (actual== vec.front()&& primera == ultima)
			{
				primera = 0;
				ultima = 0;
				imprimir();
				cout << "AQUIIIIIIIIIIIIIIIIIIIIIIIIIIIII";
				return;
			}
			
			else if (actual->getSiguiente() == vec.front())
			{
				actual->setSiguiente(primera);
				primera->setAnterior(actual);
				ultima = actual;
				imprimir();
				return;
			}
			actual = actual->getSiguiente();
		} while (actual != primera);
		imprimir();
	}

	void Pilas::imprimir()
	{
		Cartav2* actual = primera;
		do
		{
			if (ultima != 0)
			{
				cout << "Carta Numero: " << actual->getvalor() << " Carta color: " << actual->getcolor() << " Carta tipo: " << actual->gettipo() << "\n";
				actual = actual->getSiguiente();
			} 
			else { cout<<"Pila vacia";
			break;
			}
		} while (actual != primera);
	}
	void Pilas::resetCartas()
	{
	
		for (std::vector<Cartav2 *>::iterator it = cartas.begin(); it != cartas.end(); it++)
		{

			(*it)->restPos();

		}
	}

	void Pilas::liberarUltima()
	{
		if ( ultima != 0 &&ultima->ocultada == true )
		{
			ultima->ocultada = false;
			*puntuacion +=5;
		}
	}