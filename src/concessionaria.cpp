#include "concessionaria.h"

Concessionaria::Concessionaria() {} //Construtor padrão

Concessionaria::Concessionaria(std::string nome_, int cnpj_, int estoque_, std::string proprietario_) { //Construtor parametrizado
	m_nome = nome_;
	m_cnpj = cnpj_;
	m_estoque = estoque_;
	m_proprietario = proprietario_;
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

std::string Concessionaria::getProprietario() {
	return m_proprietario;
}

void Concessionaria::setProprietario(std::string proprietario_) {
	m_proprietario = proprietario_;
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
	if (v_carros.empty()) { //Se o vetor estiver vazio
		std::cout << "Não existe nenhum veículo cadastrado!" << std::endl;
	}

	else {
		for (unsigned int i=0; i < v_carros.size(); i++) {
			v_carros[i].setPreco(v_carros[i].getPreco() * (porcentagem/100) + 1);
		}

		std::cout << "Valor dos veículos aumentado em " << porcentagem << "%" << std::endl;
	}
}

void Concessionaria::buscarChassi(std::string chassi_) {
	//percorrer o vetor v_chassi procurando por chassi_
	for(unsigned int i=0; i < v_chassis.size(); i++) {
		if (chassi_.compare(v_chassis[i]) == 0) { //Se os chassis forem iguais
			//std::cout sobrecarga do op
			std::cout << "Chassi encontrado!" << std::endl; //teste
		}
	}
}

