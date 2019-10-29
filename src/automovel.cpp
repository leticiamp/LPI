#include "automovel.h"

Automovel::Automovel() {}

Automovel::Automovel(std::string marca_, float preco_, std::string chassi_,
					long int dataFabricacao_, std::string modelo_) {
	m_marca = marca_;
	m_preco = preco_;
	m_chassi = chassi_;
	m_dataFabricacao = dataFabricacao_;
	m_modelo = modelo_;
}

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

std::string Automovel::getChassi() {
	return m_chassi;
}

void Automovel::setChassi(std::string chassi_) {
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

std::ostream& operator<< (std::ostream &o, Automovel a) {
	o << a.getMarca() << std::endl;
	o << a.getModelo() << std::endl;
	o << a.getChassi() << std::endl;
	o << a.getDataFabricacao() << std::endl;
	o << a.getPreco() << std::endl;
	
	return o;
}