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
	char menuInicial();
	char menuConcessionaria();
	char menuAutomovel();

	void listarAutomovel(); //Poderia passar o nome da concessionaria como parâmetro
	
};

#endif