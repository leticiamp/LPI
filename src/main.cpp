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
		std::cout<<	"Dados do automóvel "<<i<<" de "<<n<<endl;
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
	cout<<"Concessionaria registrada"<<endl;
}

int main() {
	int a;
	cout<<	"(1) Criar nova concessionaria"<<endl;
	cout<<	"(2) Aumentar o preço de todos os carros"<<endl;
	cout<<	"(3) Listar todos os carros"<<endl;
	cout<<	"(4) Média de carros por concessionaria"<<endl;
	cin>>	a;
	if(a<1||a>4) {
		cout<<"Erro: Insira uma opção válida";
		return 0;
	}
	if(a==1) 
	return 0;
}
