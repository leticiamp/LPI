#include "automovel.h"

Automovel::Automovel() {};
Automovel::~Automovel() {};

std::string getMarca() {
	return m_marca;
}

void setMarca(std::string marca_) {
	m_marca = marca_;
}

float getPreco() {
	return m_preco;
}

void setPreco(float preco_) {
	m_preco = preco_;
}

int getChassi() {
	return m_chassi;
}

void setChassi(int chassi_) {
	m_chassi = chassi_;
}

long int getDataFabricacao() {
	return m_dataFabricacao;
}

void setDataFabricacao(long int dataFabricacao_) {
	m_dataFabricacao = dataFabricacao_;
}