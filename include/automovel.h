#ifndef AUTOMOVEL_H
#define AUTOMOVEL_H

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Automovel {
private:
	std::string m_marca;
	float m_preco;
	std::string m_chassi;
	long int m_dataFabricacao;
	std::string m_modelo;
	
public:
	Automovel(); //Construtor padrão
	Automovel(std::string marca_, float preco_, std::string chassi_,
			  long int dataFabricacao_, std::string modelo_); //Construtor parametrizado
	~Automovel(); //Destrutor

	//Getters e Setters

	std::string getMarca();
	void setMarca(std::string marca_);

	float getPreco();
	void setPreco(float preco_);

	std::string getChassi();
	void setChassi(std::string chassi_);

	long int getDataFabricacao();
	void setDataFabricacao(long int dataFabricacao_);

	std::string getModelo();
	void setModelo(std::string modelo_);

	friend std::ostream& operator<< (std::ostream &o, Automovel const a); //Sobrecarga do operador de inserção
};

#endif