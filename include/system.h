#ifndef SYSTEM_H
#define SYSTEM_H

#include "automovel.h"
#include "concessionaria.h"

class System {
private:
	std::vector<Concessionaria> v_lojas;
public:
	System();
	~System();

	void newconc(); //criar consessionaria
	void newcar(Concessionaria &C); //criar carro
	void media(); //Calcula a média dos carros por concessionária
	char menuInicial();
	char menuConcessionaria();
	char menuAutomovel();	
};

#endif