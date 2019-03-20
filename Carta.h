#pragma once
#include "SFML/Graphics.hpp"
using namespace sf;

class Carta
{
public:
	Carta(int,char,char);
	~Carta();
	
	void setAnterior(Carta *);
	void setSiguiente(Carta *);
	Carta * getSiguiente();
	Carta * getAnterior();

	char gettipo();
	char getcolor();
	int getvalor();
	Sprite * getSprite();

private:
	Sprite sprite;
	Texture texture;
	char tipo;
	char color;
	int valor;
	Carta * siguiente;
	Carta * anterior;
	

};

