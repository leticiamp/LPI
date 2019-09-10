#include "automovel.h"

Automovel::Automovel() {}
Automovel::~Automovel() {}

std::string Automovel::getMarca() {
	return m_marca;
}

void Automovel::setMarca(std::string marca_) {
	m_marca = marca_;
}

float Automovel::getPreco() {
	return m_preco;
}

void Automovel::setPreco(float preco_) {
	m_preco = preco_;
}

int Automovel::getChassi() {
	return m_chassi;
}

void Automovel::setChassi(int chassi_) {
	m_chassi = chassi_;
}

long int Automovel::getDataFabricacao() {
	return m_dataFabricacao;
}

void Automovel::setDataFabricacao(long int dataFabricacao_) {
	m_dataFabricacao = dataFabricacao_;
}

std::string Automovel::getModelo(){
	return m_modelo;
}

void Automovel::setModelo(std::string modelo_) {
	m_modelo = modelo_;
}