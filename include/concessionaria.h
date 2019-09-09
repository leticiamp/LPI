#ifndef CONCESSIONARIA_H
#define CONCESSIONARIA_H

#include "automovel.h"

class Concessionaria {
private:
	std::string m_nome;
	int m_cnpj;
	int m_estoque;

public:
	Concessionaria(); //Construtor padrão
	~Concessionaria(); //Destrutor

	std::string getNome();
	void setNome(std::string nome_);

	int getCnpj();
	void setCnpj(int cnpj_);

	int getEstoque();
	void setEstoque(int estoque_);
};

#endif