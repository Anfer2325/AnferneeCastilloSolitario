#include "Stacks.h"
#include <iostream>


Stacks::Stacks()
{
	primera = 0;
	ultima = 0;
	
	texture.loadFromFile("cards\\PNG\\stacks.png");
	this->sprite.setTexture(texture);
	sprite.scale(0.2f, 0.2f);
	
}


Stacks::~Stacks()
{
}

bool Stacks::agregar(Cartav2 *  nuevaCarta)
{
	

	if (primera == 0 && nuevaCarta->getvalor()== 1)
	{
		this->primera = nuevaCarta;
		this->ultima = nuevaCarta;
		primera->setSiguiente(ultima);
		primera->setAnterior(ultima);
		ultima->setAnterior(primera);
		ultima->setSiguiente(primera);
		sprite =(* ultima);
		cartas.push_back(nuevaCarta);
		return true;
	}
	else if (ultima == 0)
	{
		return false;
	}
	else
	{
		if (nuevaCarta->getvalor() == ultima->getvalor() + 1 && nuevaCarta->gettipo()==ultima->gettipo())
		{
			ultima->setSiguiente(nuevaCarta);
			primera->setAnterior(nuevaCarta);
			nuevaCarta->setAnterior(ultima);
			nuevaCarta->setSiguiente(primera);
			ultima = nuevaCarta;
			sprite = (*ultima);
			cartas.push_back(nuevaCarta);
			return true;
		}
	}
	return false;
}

Sprite * Stacks::getSprite()
{
	return &sprite;
}

vector<Cartav2 *> Stacks::getFromPosition(int pos)
{
	vector<Cartav2 *> packCartas;
	while (pos <= cartas.size())
	{
		packCartas.push_back(cartas.at(pos));
		pos++;
	}
	return  packCartas;

}

bool Stacks::agregarPorVector(vector<Cartav2 *> temp)
{
	for (std::vector<Cartav2 *>::iterator it = temp.begin(); it != temp.end(); it++)
	{
		if ((ultima == 0) ||
			((ultima->getvalor() + 1 == (*it)->getvalor()) &&
			(ultima->gettipo() == (*it)->gettipo())))
		{
			this->agregar((*it));
		//	std::cout << "Se agrego: " << (*it)->getvalor();
		}
	}
	return true;
}