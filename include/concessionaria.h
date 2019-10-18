#ifndef CONCESSIONARIA_H
#define CONCESSIONARIA_H

#include "automovel.h"

class Concessionaria {
private:
	std::string m_nome;
	int m_cnpj;
	int m_estoque;
	std::vector<Automovel> v_carros;

public:
	Concessionaria();
	Concessionaria(std::string nome, int cnpj, int estoque); //Construtor 
	~Concessionaria(); //Destrutor

	std::string getNome();
	void setNome(std::string nome_);

	int getCnpj();
	void setCnpj(int cnpj_);

	int getEstoque();
	void setEstoque(int estoque_);

	std::vector<Automovel> getV_carros();
	void setV_carros(Automovel carro_);

	friend std::ostream& operator<< (std::ostream &o, Automovel const a); //Sobrecarga do operador de inserção

	void aumentarValor(std::string nome, float porcentagem); //Aumento de x% no preço dos carros
};

#endif