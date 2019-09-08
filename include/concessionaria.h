#ifndef CONCESSIONARIA_H
#define CONCESSIONARIA_H

#include <string>
#include <vector>
#include "automovel.h"

class Concessionaria {
private:
	std::string m_nome;
	int m_cnpj;
	int m_estoque;
	std::vector<Automovel> v_carros;

public:
	Concessionaria(); //Construtor padrão
	~Concessionaria(); //Destrutor

	std::string getNome();
	void setNome(std::string nome_);

	int getCnpj();
	void setCnpj(int cnpj_);

	int getEstoque();
	void setEstoque(int estoque_);
	
	friend std::ostream& operator<< (std::ostream &o, Automovel const a); //Sobrecarga do operador de inserção
};

#endif