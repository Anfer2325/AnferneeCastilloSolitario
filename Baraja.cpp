#include "Baraja.h"

#include <ctime>
#include <cstdlib>

Baraja::Baraja()
{
	
	texture.loadFromFile("cards\\PNG\\baraja.png");
	
	this->sprite.setTexture(texture);
	sprite.scale(0.2f, 0.2f);
	
	dragable = false;
	clickable = true;
	this->primero = 0;
	this->ultima = 0;
	// Trevoles Negros
	Cartav2 *carta1=new Cartav2(1, 'C', 'N');
	Cartav2 *carta2= new Cartav2(2, 'C', 'N');
	Cartav2 *carta3 = new Cartav2(3, 'C', 'N');
	Cartav2 *carta4 = new Cartav2(4, 'C', 'N');
	Cartav2 *carta5 = new Cartav2(5, 'C', 'N');
	Cartav2 *carta6 = new Cartav2(6, 'C', 'N');
	Cartav2 *carta7 = new Cartav2(7, 'C', 'N');
	Cartav2 *carta8 = new Cartav2(8, 'C', 'N');
	Cartav2 *carta9 = new Cartav2(9, 'C', 'N');
	Cartav2 *carta10 = new Cartav2(10, 'C', 'N');
	Cartav2 *carta11 = new Cartav2(11, 'C', 'N');
	Cartav2 *carta12 = new Cartav2(12, 'C', 'N');
	Cartav2 *carta13 = new Cartav2(13, 'C', 'N');

	////Corazones Rojos
	Cartav2 *carta14 = new Cartav2(1, 'H', 'R');
	Cartav2 *carta15 = new Cartav2(2, 'H', 'R');
	Cartav2 *carta16 = new Cartav2(3, 'H', 'R');
	Cartav2 *carta17 = new Cartav2(4, 'H', 'R');
	Cartav2 *carta18 = new Cartav2(5, 'H', 'R');
	Cartav2 *carta19 = new Cartav2(6, 'H', 'R');
	Cartav2 *carta20 = new Cartav2(7, 'H', 'R');
	Cartav2 *carta21 = new Cartav2(8, 'H', 'R');
	Cartav2 *carta22 = new Cartav2(9, 'H', 'R');
	Cartav2 *carta23 = new Cartav2(10, 'H', 'R');
	Cartav2 *carta24 = new Cartav2(11, 'H', 'R');
	Cartav2 *carta25 = new Cartav2(12, 'H', 'R');
	Cartav2 *carta26 = new Cartav2(13, 'H', 'R');

	////  Espadas Negras
	Cartav2 *carta27 = new Cartav2(1, 'S', 'N');
	Cartav2 *carta28 = new Cartav2(2, 'S', 'N');
	Cartav2 *carta29 = new Cartav2(3, 'S', 'N');
	Cartav2 *carta30 = new Cartav2(4, 'S', 'N');
	Cartav2 *carta31 = new Cartav2(5, 'S', 'N');
	Cartav2 *carta32 = new Cartav2(6, 'S', 'N');
	Cartav2 *carta33 = new Cartav2(7, 'S', 'N');
	Cartav2 *carta34 = new Cartav2(8, 'S', 'N');
	Cartav2 *carta35 = new Cartav2(9, 'S', 'N');
	Cartav2 *carta36 = new Cartav2(10, 'S', 'N');
	Cartav2 *carta37 = new Cartav2(11, 'S', 'N');
	Cartav2 *carta38 = new Cartav2(12, 'S', 'N');
	Cartav2 *carta39 = new Cartav2(13, 'S', 'N');

	//// Diamantes Rojos

	Cartav2 *carta40 = new Cartav2(1, 'D', 'R');
	Cartav2 *carta41 = new Cartav2(2, 'D', 'R');
	Cartav2 *carta42 = new Cartav2(3, 'D', 'R');
	Cartav2 *carta43 = new Cartav2(4, 'D', 'R');
	Cartav2 *carta44 = new Cartav2(5, 'D', 'R');
	Cartav2 *carta45 = new Cartav2(6, 'D', 'R');
	Cartav2 *carta46 = new Cartav2(7, 'D', 'R');
	Cartav2 *carta47 = new Cartav2(8, 'D', 'R');
	Cartav2 *carta48 = new Cartav2(9, 'D', 'R');
	Cartav2 *carta49 = new Cartav2(10, 'D', 'R');
	Cartav2 *carta50 = new Cartav2(11, 'D', 'R');
	Cartav2 *carta51 = new Cartav2(12, 'D', 'R');
	Cartav2 *carta52 = new Cartav2(13, 'D', 'R');

	Agregar(carta1);
	Agregar(carta2);
	Agregar(carta3);
	Agregar(carta4);
	Agregar(carta5);
	Agregar(carta6);
	Agregar(carta7);
	Agregar(carta8);
	Agregar(carta9);
	Agregar(carta10);
	Agregar(carta11);
	Agregar(carta12);
	Agregar(carta13);
	Agregar(carta14);
	Agregar(carta15);
	Agregar(carta16);
	Agregar(carta17);
	Agregar(carta18);
	Agregar(carta19);
	Agregar(carta20);
	Agregar(carta21);
	Agregar(carta22);
	Agregar(carta23);
	Agregar(carta24);
	Agregar(carta25);
	Agregar(carta26);
	Agregar(carta27);
	Agregar(carta28);
	Agregar(carta29);
	Agregar(carta30);
	Agregar(carta31);
	Agregar(carta32);
	Agregar(carta33);
	Agregar(carta34);
	Agregar(carta35);
	Agregar(carta36);
	Agregar(carta37);
	Agregar(carta38);
	Agregar(carta39);
	Agregar(carta40);
	Agregar(carta41);
	Agregar(carta42);
	Agregar(carta43);
	Agregar(carta44);
	Agregar(carta45);
	Agregar(carta46);
	Agregar(carta47);
	Agregar(carta48);
	Agregar(carta49);
	Agregar(carta50);
	Agregar(carta51);
	Agregar(carta52);

}

Baraja::Baraja(int a)
{
	dragable = true;
	clickable = true;
	this->primero = 0;
	this->ultima = 0;
}

Baraja::~Baraja()
{
}

bool Baraja::esVacia()
{
	if (primero == 0)
	{
		return true;
	}
	return false;
}

void Baraja::setPrimero(Cartav2 * primero)
{
	this->primero = primero;
}

void Baraja::setUltima(Cartav2 * ultima)
{
	this->ultima = ultima;
}

void Baraja::imprimir()
{
	Cartav2* actual = primero;
	do 
	{
		cout << "Carta Numero: "<<actual->getvalor()<<" Carta color: "<< actual->getcolor()<< " Carta tipo: "<<actual->gettipo()<<"\n";
		actual = actual->getSiguiente();
	} while (actual != primero);
}

std::ostream& operator<<(std::ostream &out,  Cartav2 *carta)
{
	 
	Cartav2 * dq = carta;
	out << "Carta Numero: " << (*dq).getvalor() << " Color: " << (*dq).getcolor() << " Tipo: " << (*dq).gettipo() << "\n";

	return out;
}

void Baraja::Agregar(Cartav2 * nuevaCarta)
{
	if (esVacia())
	{
		this->primero = nuevaCarta;
		this->ultima = nuevaCarta;
		primero->setSiguiente(ultima);
		primero->setAnterior(ultima);
		ultima->setAnterior(primero);
		ultima->setSiguiente(primero);
	}
	else
	{
		ultima->setSiguiente(nuevaCarta);
		primero->setAnterior(nuevaCarta);
		nuevaCarta->setAnterior(ultima);
		nuevaCarta->setSiguiente(primero);
		ultima = nuevaCarta;

	}
}

Sprite * Baraja::getSprite()
{
	return &sprite;
}

Cartav2*  Baraja::getCarta()
{
	srand(time(0));

	int num = rand() % TamBajara();
	
	int tam = 0;
	Cartav2 * actual = primero;
	do
	{
		if (tam == num)
		{
			if (actual == primero)
			{
				ultima->siguiente = actual->getSiguiente();
				actual->getSiguiente()->anterior = ultima;
				primero = actual->getSiguiente();
				return actual;
			}
			if (actual == ultima)
			{
				primero->anterior = ultima->getAnterior();
				ultima->getAnterior()->siguiente = primero;
				ultima = actual->getAnterior();
				return actual;
			}
			else 
			{
				actual->anterior->siguiente = actual->getSiguiente();
				actual->siguiente->anterior = actual->getAnterior();
				return actual;
			}
		}
		if (actual != 0)
		{
			tam++;
			actual = actual->getSiguiente();
		}


	} while (actual != primero);

	
	//Cartav2* temp2 = primero;
	//int num = rand() % TamBajara();
	//primero = primero->getSiguiente();
	//primero->setAnterior(ultima);
	//
	//ultima->setSiguiente(primero);
	//

	//
	//return temp2;
}

Cartav2 * Baraja::getUltimaCarta()
{
	Cartav2* temp2 = ultima;

	
	
	ultima = ultima->getAnterior();
	primero->setAnterior(ultima);
	ultima->setSiguiente(primero);
	return temp2;

}

int Baraja::TamBajara()
{
	
	int tam = 0;
	Cartav2 * actual = primero;
	do
	{
		if (actual != 0)
		{
			tam++;
			actual = actual->getSiguiente();
		}
		
	} while (actual != primero);

	return tam;
}




