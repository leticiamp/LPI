#ifndef AUTOMOVEL_H
#define AUTOMOVEL_H

#include <string>
#include <vector>

class Automovel {
private:
	std::string m_marca;
	float m_preco;
	int m_chassi;
	long int m_dataFabricacao;
	std::string m_modelo;
	
public:
	Automovel(); //Construtor padrão
	~Automovel(); //Destrutor

	std::string getMarca();
	void setMarca(std::string marca_);

	float getPreco();
	void setPreco(float preco_);

	int getChassi();
	void setChassi(int chassi_);

	long int getDataFabricacao();
	void setDataFabricacao(long int dataFabricacao_);

	std::string getModelo();
	void setModelo(std::string modelo_);
	
};

void Automovel::aumentarValor(float porcentagem); //Aumento de x% no preço dos carros

#endif