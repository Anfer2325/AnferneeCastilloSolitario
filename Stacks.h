#pragma once

#include "Cartav2.h"
#include <vector>
using namespace std;
class Stacks
{
public:
	Stacks();
	~Stacks();
	bool agregar(Cartav2 *);
	Sprite* getSprite();
	Cartav2 * primera;
	Cartav2 * ultima;
	vector<Cartav2 *> cartas;
	vector<Cartav2 *>getFromPosition(int);
	bool agregarPorVector(vector<Cartav2 *>);
private:

	Texture texture;
	Sprite sprite;
	
};

