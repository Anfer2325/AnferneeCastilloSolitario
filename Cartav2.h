#pragma once
#include "SFML/Graphics.hpp"
using namespace sf;
class Cartav2: public  sf::Sprite
{
public:
	Cartav2(int, char , char);
	Cartav2();
	~Cartav2();

	char tipo;
	char color;
	int valor;

	int x, y;

	int ix, iy;
	
	void restPos();
	Cartav2 * siguiente;
	Cartav2 * anterior;
	bool ocultada;
	bool creada ;

	Sprite *ocult;

	void setAnterior(Cartav2 *);
	void setSiguiente(Cartav2 *);
	Cartav2 * getSiguiente();
	Cartav2* getAnterior();
	Texture  *textura;
	Texture oculta;
	char gettipo();
	char getcolor();
	int getvalor();
};

