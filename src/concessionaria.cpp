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