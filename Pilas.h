#pragma once
#include "Cartav2.h"
#include <vector>
using namespace std;
class Pilas
{
public:
	Pilas(int, int, int *);
	~Pilas();

	Cartav2 * primera;
	Cartav2 * ultima;
	int posX, posY;
	Sprite sprite;
	Texture texture;

	void agregarInicial(Cartav2 *);

	bool agregar(Cartav2 *);
	int size();
	vector<Cartav2 *> cartas;
	vector<Cartav2 *>getFromPosition(Cartav2 *);

	Cartav2 * checkInteraction(int,int,RenderWindow *);

	void imprimircartas(RenderWindow *);

	void updatePila(vector<Cartav2 *>);
	void imprimir();
	void InitialAdd(Cartav2 *);

	bool addFromAnotherPile(vector<Cartav2 *>);

	void resetCartas();

	void liberarUltima();

	int  * puntuacion;
};

