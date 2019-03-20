#include "Carta.h"



Carta::Carta(int numero, char tipo, char color):valor(numero),tipo(tipo),color(color)
{
	switch (tipo)

	{
	case 'C':
		switch (numero)
		{
			case 1:
				
				texture.loadFromFile("cards\\Trevol\\1C.png");
				this->sprite.setTexture(texture);
				sprite.scale(0.2f, 0.2f);
				break;
			case 2:
				texture.loadFromFile("cards\\Trevol\\2C.png");
				this->sprite.setTexture(texture);
				sprite.scale(0.2f, 0.2f);
				break;
			case 3:
				texture.loadFromFile("cards\\Trevol\\3C.png");
				this->sprite.setTexture(texture);
				sprite.scale(0.2f, 0.2f);
				break;
			case 4:
				texture.loadFromFile("cards\\Trevol\\4C.png");
				this->sprite.setTexture(texture);
				sprite.scale(0.2f, 0.2f);
				break;
			case 5:
				texture.loadFromFile("cards\\Trevol\\5C.png");
				this->sprite.setTexture(texture);
				sprite.scale(0.2f, 0.2f);
				break;
			case 6:
				texture.loadFromFile("cards\\Trevol\\6C.png");
				this->sprite.setTexture(texture);
				sprite.scale(0.2f, 0.2f);
				break;
			case 7:
				texture.loadFromFile("cards\\Trevol\\7C.png");
				this->sprite.setTexture(texture);
				sprite.scale(0.2f, 0.2f);
				break;
			case 8:
				texture.loadFromFile("cards\\Trevol\\8C.png");
				this->sprite.setTexture(texture);
				sprite.scale(0.2f, 0.2f);
				break;
			case 9:
				texture.loadFromFile("cards\\Trevol\\9C.png");
				this->sprite.setTexture(texture);
				sprite.scale(0.2f, 0.2f);
				break;
			case 10:
				texture.loadFromFile("cards\\Trevol\\10C.png");
				this->sprite.setTexture(texture);
				sprite.scale(0.2f, 0.2f);
				break;
			case 11:
				texture.loadFromFile("cards\\Trevol\\11C.png");
				this->sprite.setTexture(texture);
				sprite.scale(0.2f, 0.2f);
				break;
			case 12:
				texture.loadFromFile("cards\\Trevol\\12C.png");
				this->sprite.setTexture(texture);
				sprite.scale(0.2f, 0.2f);
				break;
			case 13:
				texture.loadFromFile("cards\\Trevol\\13C.png");
				this->sprite.setTexture(texture);
				sprite.scale(0.2f, 0.2f);
				break;
			
		}
		
		break;

	case 'H':
		switch (numero)
		{
		case 1:

			texture.loadFromFile("cards\\Corazones\\1H.png");
			this->sprite.setTexture(texture);
			sprite.scale(0.2f, 0.2f);
			break;
		case 2:
			texture.loadFromFile("cards\\Corazones\\2H.png");
			this->sprite.setTexture(texture);
			sprite.scale(0.2f, 0.2f);
			break;
		case 3:
			texture.loadFromFile("cards\\Corazones\\3H.png");
			this->sprite.setTexture(texture);
			sprite.scale(0.2f, 0.2f);
			break;
		case 4:
			texture.loadFromFile("cards\\Corazones\\4H.png");
			this->sprite.setTexture(texture);
			sprite.scale(0.2f, 0.2f);
			break;
		case 5:
			texture.loadFromFile("cards\\Corazones\\5H.png");
			this->sprite.setTexture(texture);
			sprite.scale(0.2f, 0.2f);
			break;
		case 6:
			texture.loadFromFile("cards\\Corazones\\6H.png");
			this->sprite.setTexture(texture);
			sprite.scale(0.2f, 0.2f);
			break;
		case 7:
			texture.loadFromFile("cards\\Corazones\\7H.png");
			this->sprite.setTexture(texture);
			sprite.scale(0.2f, 0.2f);
			break;
		case 8:
			texture.loadFromFile("cards\\Corazones\\8H.png");
			this->sprite.setTexture(texture);
			sprite.scale(0.2f, 0.2f);
			break;
		case 9:
			texture.loadFromFile("cards\\Corazones\\9H.png");
			this->sprite.setTexture(texture);
			sprite.scale(0.2f, 0.2f);
			break;
		case 10:
			texture.loadFromFile("cards\\Corazones\\10H.png");
			this->sprite.setTexture(texture);
			sprite.scale(0.2f, 0.2f);
			break;
		case 11:
			texture.loadFromFile("cards\\Corazones\\11H.png");
			this->sprite.setTexture(texture);
			sprite.scale(0.2f, 0.2f);
			break;
		case 12:
			texture.loadFromFile("cards\\Corazones\\12H.png");
			this->sprite.setTexture(texture);
			sprite.scale(0.2f, 0.2f);
			break;
		case 13:
			texture.loadFromFile("cards\\Corazones\\13H.png");
			this->sprite.setTexture(texture);
			sprite.scale(0.2f, 0.2f);
			break;

		}

		break;

	case 'S':
		switch (numero)
		{
		case 1:

			texture.loadFromFile("cards\\Espadas\\1S.png");
			this->sprite.setTexture(texture);
			sprite.scale(0.2f, 0.2f);
			break;
		case 2:
			texture.loadFromFile("cards\\Espadas\\2S.png");
			this->sprite.setTexture(texture);
			sprite.scale(0.2f, 0.2f);
			break;
		case 3:
			texture.loadFromFile("cards\\Espadas\\3S.png");
			this->sprite.setTexture(texture);
			sprite.scale(0.2f, 0.2f);
			break;
		case 4:
			texture.loadFromFile("cards\\Espadas\\4S.png");
			this->sprite.setTexture(texture);
			sprite.scale(0.2f, 0.2f);
			break;
		case 5:
			texture.loadFromFile("cards\\Espadas\\5S.png");
			this->sprite.setTexture(texture);
			sprite.scale(0.2f, 0.2f);
			break;
		case 6:
			texture.loadFromFile("cards\\Espadas\\6S.png");
			this->sprite.setTexture(texture);
			sprite.scale(0.2f, 0.2f);
			break;
		case 7:
			texture.loadFromFile("cards\\Espadas\\7S.png");
			this->sprite.setTexture(texture);
			sprite.scale(0.2f, 0.2f);
			break;
		case 8:
			texture.loadFromFile("cards\\Espadas\\8S.png");
			this->sprite.setTexture(texture);
			sprite.scale(0.2f, 0.2f);
			break;
		case 9:
			texture.loadFromFile("cards\\Espadas\\9S.png");
			this->sprite.setTexture(texture);
			sprite.scale(0.2f, 0.2f);
			break;
		case 10:
			texture.loadFromFile("cards\\Espadas\\10S.png");
			this->sprite.setTexture(texture);
			sprite.scale(0.2f, 0.2f);
			break;
		case 11:
			texture.loadFromFile("cards\\Espadas\\11S.png");
			this->sprite.setTexture(texture);
			sprite.scale(0.2f, 0.2f);
			break;
		case 12:
			texture.loadFromFile("cards\\Espadas\\12S.png");
			this->sprite.setTexture(texture);
			sprite.scale(0.2f, 0.2f);
			break;
		case 13:
			texture.loadFromFile("cards\\Espadas\\13S.png");
			this->sprite.setTexture(texture);
			sprite.scale(0.2f, 0.2f);
			break;

		}

		break;
	
	case 'D':
		switch (numero)
		{
		case 1:

			texture.loadFromFile("cards\\Diamantes\\1D.png");
			this->sprite.setTexture(texture);
			sprite.scale(0.2f, 0.2f);
			break;
		case 2:
			texture.loadFromFile("cards\\Diamantes\\2D.png");
			this->sprite.setTexture(texture);
			sprite.scale(0.2f, 0.2f);
			break;
		case 3:
			texture.loadFromFile("cards\\Diamantes\\3D.png");
			this->sprite.setTexture(texture);
			sprite.scale(0.2f, 0.2f);
			break;
		case 4:
			texture.loadFromFile("cards\\Diamantes\\4D.png");
			this->sprite.setTexture(texture);
			sprite.scale(0.2f, 0.2f);
			break;
		case 5:
			texture.loadFromFile("cards\\Diamantes\\5D.png");
			this->sprite.setTexture(texture);
			sprite.scale(0.2f, 0.2f);
			break;
		case 6:
			texture.loadFromFile("cards\\Diamantes\\6D.png");
			this->sprite.setTexture(texture);
			sprite.scale(0.2f, 0.2f);
			break;
		case 7:
			texture.loadFromFile("cards\\Diamantes\\7D.png");
			this->sprite.setTexture(texture);
			sprite.scale(0.2f, 0.2f);
			break;
		case 8:
			texture.loadFromFile("cards\\Diamantes\\8D.png");
			this->sprite.setTexture(texture);
			sprite.scale(0.2f, 0.2f);
			break;
		case 9:
			texture.loadFromFile("cards\\Diamantes\\9D.png");
			this->sprite.setTexture(texture);
			sprite.scale(0.2f, 0.2f);
			break;
		case 10:
			texture.loadFromFile("cards\\Diamantes\\10D.png");
			this->sprite.setTexture(texture);
			sprite.scale(0.2f, 0.2f);
			break;
		case 11:
			texture.loadFromFile("cards\\Diamantes\\11D.png");
			this->sprite.setTexture(texture);
			sprite.scale(0.2f, 0.2f);
			break;
		case 12:
			texture.loadFromFile("cards\\Diamantes\\12D.png");
			this->sprite.setTexture(texture);
			sprite.scale(0.2f, 0.2f);
			break;
		case 13:
			texture.loadFromFile("cards\\Diamantes\\13D.png");
			this->sprite.setTexture(texture);
			sprite.scale(0.2f, 0.2f);
			break;

		}

		break;
	}

	
	
}


Carta::~Carta()
{
}

void Carta::setAnterior(Carta * anterior)
{
	this->anterior = anterior;
}

void Carta::setSiguiente(Carta * siguiente)
{
	this->siguiente = siguiente;
}

Carta * Carta::getAnterior()
{
	return this->anterior;
}

Carta * Carta::getSiguiente()
{
	return this->siguiente;
}

char Carta::gettipo()
{
	return this->tipo;
}

char Carta::getcolor()
{
	return this->color;
}

int Carta::getvalor()
{
	return this-> valor;
}

Sprite * Carta::getSprite()
{
	return &sprite;
}