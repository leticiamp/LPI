#ifndef CONCESSIONARIA_H
#define CONCESSIONARIA_H

#include "automovel.h"
#include "data.h"
//#include "propriedade.h"

class Concessionaria {
private:
	std::string m_nome;
	int m_cnpj;
	int m_estoque;
	std::string m_proprietario;
	//Propriedade<T> m_propriedade;

	std::vector<Automovel> v_carros;
	std::vector<std::string> v_chassis;

public:
	Concessionaria();
	Concessionaria(std::string nome, int cnpj, int estoque, std::string proprietario_); //Construtor 
	~Concessionaria(); //Destrutor

	std::string getNome();
	void setNome(std::string nome_);

	int getCnpj();
	void setCnpj(int cnpj_);

	int getEstoque();
	void setEstoque(int estoque_);

	std::string getProprietario();
	void setProprietario(std::string proprietario_);

	std::vector<Automovel> getV_carros();
	void setV_carros(Automovel carro_);

	std::vector<std::string> getV_chassis();
	void setV_chassis(std::string chassi_);

	friend std::ostream& operator<< (std::ostream &o, Automovel const a); //Sobrecarga do operador de inserção

	void aumentarValor(float porcentagem); //Aumento de x% no preço dos carros

	void buscarChassi(std::string chassi_);
};

#endif