#ifndef SYSTEM_H
#define SYSTEM_H

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <streambuf>

#include "automovel.h"
#include "concessionaria.h"

class System {
private:
	std::vector<Concessionaria> v_lojas; //Vetor de concessionarias
public:
	System(); //Construtor padrão
	~System(); //Destrutor

	std::vector<Concessionaria> getV_lojas();
	void setV_carros(Concessionaria lojas_);


	void newconc(); //criar consessionaria
	void newcar(Concessionaria &C); //criar carro
	void media(); //Calcula a média dos carros por concessionária
	char menuInicial();
	char menuConcessionaria();
	char menuAutomovel();	

	void listarConcessionaria(); //Lista o proprietário, a frota total de cada tipo de veículo e o valor total dos veículos
	void escreveConcessionaria(std::string nome); //Escreve informações de uma concessionaria em um arquivo .txt
	Concessionaria lerConcessionaria(const std::string& arq); //Lê informações de uma concessionaria em um arquivo .txt
};

#endif