#include <iostream>

#include "automovel.h"
#include "concessionaria.h"

int newconc(Concessionaria p) { //criar consessionaria
	std::cout<<	"Nome: ";
	p.setNome()
	std::cout<<	"CNPJ: ";		//exemploMax: 99.999.999/0001-99
	p.setCnpj()
	std::cout<<	"Estoque: ";
	p.setEstoque()
	for (i=1;i<=n;i++) { //Adcionar carros à concessionária
		std::cout<<	"Dados do automóvel "<<i<<" de "<< <<endl;
		std::cout<<	"     Marca: ";
		
		std::cout<<	"     Preço: ";
		
		std::cout<<	"     Chassi: ";
		
		std::cout<<	"     Data: ";
		
		for (j=1;j<i;j++) {
			if(/*comparar chassi do auto[i] com o do auto[j]*/) {
				std::cout<<	"Erro: esse carro já está registrado"<<endl;
				i--;
				break;
			}
		}
	}
}

int main() {
	
	return 0;
}
