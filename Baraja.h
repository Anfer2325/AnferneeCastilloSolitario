#pragma once
#include "Cartav2.h"
#include <iostream>
#include "SFML/Graphics.hpp"

using namespace std;
class Baraja
{
public:
	Baraja();
	Baraja(int);
	~Baraja();
	friend std::ostream& operator<<(std::ostream &, const Cartav2 &);
	Cartav2 *primero;
	Cartav2 *ultima;
	Sprite sprite;
	bool dragable;
	bool clickable;
	Texture texture;
	Sprite * getSprite();
	bool esVacia();
	void Agregar(Cartav2 *);
	void setPrimero(Cartav2 *);
	void setUltima(Cartav2 *);
	void imprimir();
	Cartav2 * getCarta();
	Cartav2* getUltimaCarta();
	int TamBajara();
	
};

