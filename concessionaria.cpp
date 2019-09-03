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