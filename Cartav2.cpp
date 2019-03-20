#include "Cartav2.h"

Cartav2::Cartav2()
{

}

void Cartav2::restPos()
{
	this->setPosition(ix, iy);
}
Cartav2::Cartav2(int val,char tipo , char color):valor(val),tipo(tipo),color(color)
{
	Texture * texture = new Texture();
	


	switch (tipo)

	{
	case 'C':
		switch (val)
		{
		case 1:

			texture->loadFromFile("cards\\Trevol\\1C.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 2:
			texture->loadFromFile("cards\\Trevol\\2C.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 3:
			texture->loadFromFile("cards\\Trevol\\3C.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 4:
			texture->loadFromFile("cards\\Trevol\\4C.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 5:
			texture->loadFromFile("cards\\Trevol\\5C.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 6:
			texture->loadFromFile("cards\\Trevol\\6C.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 7:
			texture->loadFromFile("cards\\Trevol\\7C.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 8:
			texture->loadFromFile("cards\\Trevol\\8C.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 9:
			texture->loadFromFile("cards\\Trevol\\9C.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 10:
			texture->loadFromFile("cards\\Trevol\\10C.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 11:
			texture->loadFromFile("cards\\Trevol\\11C.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 12:
			texture->loadFromFile("cards\\Trevol\\12C.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 13:
			texture->loadFromFile("cards\\Trevol\\13C.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;

		}

		break;

	case 'H':
		switch (val)
		{
		case 1:

			texture->loadFromFile("cards\\Corazones\\1H.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 2:
			texture->loadFromFile("cards\\Corazones\\2H.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 3:
			texture->loadFromFile("cards\\Corazones\\3H.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 4:
			texture->loadFromFile("cards\\Corazones\\4H.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 5:
			texture->loadFromFile("cards\\Corazones\\5H.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 6:
			texture->loadFromFile("cards\\Corazones\\6H.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 7:
			texture->loadFromFile("cards\\Corazones\\7H.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 8:
			texture->loadFromFile("cards\\Corazones\\8H.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 9:
			texture->loadFromFile("cards\\Corazones\\9H.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 10:
			texture->loadFromFile("cards\\Corazones\\10H.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 11:
			texture->loadFromFile("cards\\Corazones\\11H.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 12:
			texture->loadFromFile("cards\\Corazones\\12H.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 13:
			texture->loadFromFile("cards\\Corazones\\13H.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;

		}

		break;

	case 'S':
		switch (val)
		{
		case 1:

			texture->loadFromFile("cards\\Espadas\\1S.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 2:
			texture->loadFromFile("cards\\Espadas\\2S.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 3:
			texture->loadFromFile("cards\\Espadas\\3S.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 4:
			texture->loadFromFile("cards\\Espadas\\4S.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 5:
			texture->loadFromFile("cards\\Espadas\\5S.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 6:
			texture->loadFromFile("cards\\Espadas\\6S.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 7:
			texture->loadFromFile("cards\\Espadas\\7S.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 8:
			texture->loadFromFile("cards\\Espadas\\8S.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 9:
			texture->loadFromFile("cards\\Espadas\\9S.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 10:
			texture->loadFromFile("cards\\Espadas\\10S.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 11:
			texture->loadFromFile("cards\\Espadas\\11S.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 12:
			texture->loadFromFile("cards\\Espadas\\12S.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 13:
			texture->loadFromFile("cards\\Espadas\\13S.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;

		}

		break;

	case 'D':
		switch (val)
		{
		case 1:

			texture->loadFromFile("cards\\Diamantes\\1D.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 2:
			texture->loadFromFile("cards\\Diamantes\\2D.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 3:
			texture->loadFromFile("cards\\Diamantes\\3D.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 4:
			texture->loadFromFile("cards\\Diamantes\\4D.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 5:
			texture->loadFromFile("cards\\Diamantes\\5D.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 6:
			texture->loadFromFile("cards\\Diamantes\\6D.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 7:
			texture->loadFromFile("cards\\Diamantes\\7D.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 8:
			texture->loadFromFile("cards\\Diamantes\\8D.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 9:
			texture->loadFromFile("cards\\Diamantes\\9D.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 10:
			texture->loadFromFile("cards\\Diamantes\\10D.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 11:
			texture->loadFromFile("cards\\Diamantes\\11D.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 12:
			texture->loadFromFile("cards\\Diamantes\\12D.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;
		case 13:
			texture->loadFromFile("cards\\Diamantes\\13D.png");
			this->setTexture(*texture);
			this->scale(0.2f, 0.2f);
			break;

		}

		break;
	}


	this->setTexture(*texture);
}


Cartav2::~Cartav2()
{
}

void Cartav2::setAnterior(Cartav2 * ant)
{
	this->anterior = ant;
}

void Cartav2::setSiguiente(Cartav2 * sig)
{
	this->siguiente = sig;
}

Cartav2 * Cartav2::getSiguiente()
{
	return this->siguiente;
}

Cartav2 * Cartav2::getAnterior()
{
	return this->anterior;
}

char Cartav2::gettipo()
{
	return this->tipo;
}

char Cartav2::getcolor()
{
	return this->color;
}

int Cartav2::getvalor()
{
	return this->valor;
}