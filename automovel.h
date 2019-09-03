#ifndef AUTOMOVEL_H
#define AUTOMOVEL_H

#include <string>

class Automovel {
private:
	std::string m_marca;
	float m_preco;
	int m_chassi;
	long int m_dataFabricacao;
	
public:
	Automovel();
	~Automovel();

	std::string getMarca();
	void setMarca(std::string marca_);

	float getPreco();
	void setPreco(float preco_);

	int getChassi();
	void setChassi(int chassi_);

	long int getDataFabricacao();
	void setDataFabricacao(long int dataFabricacao_);
	
};

#endif