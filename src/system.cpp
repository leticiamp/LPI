#include "system.h"

System::System() {}
System::~System() {}

//Eu faria mais ou menos assim (mas faltaria terminar): 
/*Concessionaria System::newconc() { //criar consessionaria
	std::cout << "Nome: ";
	getline(std::cin, m_nome);

	std::cout << "CNPJ: ";		//exemploMax: 99.999.999/0001-99
	getline(std::cin, m_cnpj);

	std::cout << "Concessionaria registrada" << std::endl;
} */

//Pq esta função está retornando um inteiro?
int System::newconc(Concessionaria p) { //criar consessionaria
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

//A partir daqui é a adição dos carros né? Seria melhor separar as funções
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

char System::menuInicial(string abasOrientacao) {
	char alternativa = 0;
	do {
		std::cout << "\n ++++++++++++++++++++++++++++++++++++++++++++++\n" << "\n"
				<< "                   "  << abasOrientacao
				<< " \n Escolha uma das seguintes alternativas abaixo: " << "\n"
				<< " Digite '1' para: Opções da Concessionaria" << "\n"
				<< " Digite '2' para: Opções do Automovel" << "\n"
				<< " Digite '3' para: Sair deste Menu" << "\n"
				<< " Alternativa escolhida: ";

				std::cin >> alternativa; cin.ignore(); //cin.ignore() ignora caracteres não lidos no buffer de entrada

		switch(alternativa) {
			case '1' : menuConcessionaria("\n Menu Inicial > Concessionaria");
				break;
			case '2' : menuAutomovel("\n Menu Inicial > Automovel");
				break;
			case '3' : // Nenhuma ação. Somente sai do menu.
				break;
			default : std::cout << " \n\n Alternativa inválida!" << std::endl;
		}
	} while(alternativa != '3');

	return alternativa;
}

char System::menuConcessionaria(string abasOrientacao) {
	char alternativa = 0;

	do {
		std::cout << "\n ++++++++++++++++++++++++++++++++++++++++++++++\n" << "\n"
			<< "                   " << abasOrientacao
			<< " \n Escolha uma das seguintes alternativas abaixo: " << "\n"
			<< " Digite '1' para: Criar concessionária" << "\n"
			<< " Digite '2' para: Listar concessionárias" << "\n"
			<< " Digite '3' para: Sair " << "\n"
			<< " Alternativa escolhida: ";

			std::cin >> alternativa; cin.ignore();

		switch(alternativa) {
			case '1' : newconc();
				break;
			case '2' : //metodo para listar as concessionarias
				break;
			case '3' : // Nenhuma ação. Somente sai do menu.
				break;
			default : std::cout << " \n\n Alternativa inválida!" << std::endl;
		}
	} while(alternativa != '3');

	return alternativa;
}

char System::menuAutomovel(string abasOrientacao) {
	char alternativa = 0;

	do {
		std::cout << "\n ++++++++++++++++++++++++++++++++++++++++++++++\n" << "\n"
			<< "                   " << abasOrientacao
			<< " \n Escolha uma das seguintes alternativas abaixo: " << "\n"
			<< " Digite '1' para: Adicionar automóvel" << "\n"
			<< " Digite '2' para: Listar automóvel" << "\n"
			<< " Digite '3' para: Aumentar valor" << "\n"
			<< " Digite '4' para: Sair " << "\n"
			<< " Alternativa escolhida: ";

			std::cin >> alternativa; cin.ignore();
			
		switch(alternativa){
			case '1' : 
				break;
			case '2' : 
				break;
			case '3' : aumentarValor();
				break;
			case '4' : 
				break;
			case '5' : // Nenhuma ação. Somente sai do menu.
				break;
			default : std::cout << " \n\n Alternativa inválida!" << std::endl;
		}
	} while (alternativa != '5');

	return alternativa;	
}