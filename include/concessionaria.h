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

	std::vector<Automovel> v_carros; //Vetor de carros
	std::vector<std::string> v_chassis; //Vetor de chassis

public:
	Concessionaria(); //Construtor padrão
	Concessionaria(std::string nome, int cnpj, int estoque, std::string proprietario_); //Construtor parametrizado
	~Concessionaria(); //Destrutor

	//Getters e Setters

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
	void buscarChassi(std::string chassi_); //Função que encontra veículo pelo chassi
	float valorTotal(); //Função que calcula o valor de todos os veículos de uma concessionária
};

#endif