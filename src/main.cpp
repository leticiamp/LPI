#include <iostream>
#include "system.h"

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
