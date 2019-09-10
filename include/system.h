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

	Concessionaria newconc(); //criar consessionaria
	Automovel newcar(Concessionaria p); //criar carro
	void media(); //Calcula a média dos carros por concessionária
	char menuInicial();
	char menuConcessionaria();
	char menuAutomovel();	
};

#endif