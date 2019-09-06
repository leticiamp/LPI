#include "concessionaria.h"

Concessionaria::Concessionaria() {};
Concessionaria::~Concessionaria() {};

std::string getNome() {
	return m_nome;
}

void setNome(std::string nome_) {
	m_nome = nome_;
}

int getCnpj() {
	return m_cnpj;
}

void setCnpj(int cnpj_) {
	m_cnpj = cnpj_;
}

int getEstoque() {
	return m_estoque;
}

void setEstoque(int estoque_) {
	m_estoque = estoque_;
}

//Sobrecarga que lista os carros da concessionaria
std::ostream& operator<< (std::ostream &o, Automovel const a) {
	o << a.m_marca << endl;
	o << a.m_modelo << endl;
	o << a.m_chassi << endl;
	o << a.m_dataFabricacao << endl;
	o << a.m_preco << endl;
	
	return o;
}