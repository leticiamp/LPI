#include "concessionaria.h"

Concessionaria::Concessionaria() {}
Concessionaria::~Concessionaria() {}

std::string Concessionaria::getNome() {
	return m_nome;
}

void Concessionaria::setNome(std::string nome_) {
	m_nome = nome_;
}

int Concessionaria::getCnpj() {
	return m_cnpj;
}

void Concessionaria::setCnpj(int cnpj_) {
	m_cnpj = cnpj_;
}

int Concessionaria::getEstoque() {
	return m_estoque;
}

void Concessionaria::setEstoque(int estoque_) {
	m_estoque = estoque_;

}

Automovel Concessionaria::getV_carros() {
	return v_carros;
}

//Sobrecarga que lista os carros da concessionaria
std::ostream& operator<< (std::ostream &o, Automovel const a) {
	o << a.getMarca() << std::endl;
	o << a.getModelo() << std::endl;
	o << a.getChassi() << std::endl;
	o << a.getDataFabricacao() << std::endl;
	o << a.getPreco() << std::endl;
	
	return o;
}

void Concessionaria::aumentarValor(std::string nome, float porcentagem) {
	for (int i=0; i < v_carros.size(); i++) {
		m_preco *= ((porcentagem/100) + 1);
	}
}