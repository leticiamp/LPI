#ifndef SYSTEM_H
#define SYSTEM_H

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

#include "automovel.h"
#include "concessionaria.h"

class System {
private:
	std::vector<Concessionaria> v_lojas;
public:
	System();
	~System();

	std::vector<Concessionaria> getV_lojas();
	void setV_carros(Concessionaria lojas_);


	void newconc(); //criar consessionaria
	void newcar(Concessionaria &C); //criar carro
	void media(); //Calcula a média dos carros por concessionária
	char menuInicial();
	char menuConcessionaria();
	char menuAutomovel();	

	void escreveConcessionaria(Concessionaria &C); //Escreve informações de uma concessionaria em um arquivo .txt
};

#endif