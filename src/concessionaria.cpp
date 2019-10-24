#include "concessionaria.h"

Concessionaria::Concessionaria() {} //Construtor padrão

Concessionaria::Concessionaria(std::string nome_, int cnpj_, int estoque_) { //Construtor parametrizado
	m_nome = nome_;
	m_cnpj = cnpj_;
	m_estoque = estoque_;
}

Concessionaria::~Concessionaria() {} //Destrutor

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

std::vector<Automovel> Concessionaria::getV_carros() {
	return v_carros;
}

void Concessionaria::setV_carros(Automovel carro_) {
	v_carros.push_back(carro_);
}

std::vector<std::string> Concessionaria::getV_chassis() {
	return v_chassis;
}

void Concessionaria::setV_chassis(std::string chassi_) {
	v_chassis.push_back(chassi_);
}

//Sobrecarga que lista os carros da concessionaria
std::ostream& operator<< (std::ostream &o, Automovel a) {
	o << a.getMarca() << std::endl;
	o << a.getModelo() << std::endl;
	o << a.getChassi() << std::endl;
	o << a.getDataFabricacao() << std::endl;
	o << a.getPreco() << std::endl;
	
	return o;
}

void Concessionaria::aumentarValor(float porcentagem) {
	for (unsigned int i=0; i < v_carros.size(); i++) {
		v_carros[i].setPreco(v_carros[i].getPreco() * (porcentagem/100) + 1);
	}
}

void Concessionaria::buscarChassi(std::string chassi_) {
	//percorrer o vetor v_chassi procurando por chassi_
}