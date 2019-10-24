#include "system.h"

System::System() {}
System::~System() {}

void System::newconc() {
	std::string nome;
	int cnpj;
	int estoque;
	
	std::cout << "Insira os dados da nova concessionaria" << std::endl;

	std::cout << "\tNome: ";
	getline(std::cin, nome);

	std::cout << "\tCNPJ: ";
	std::cin >> cnpj;

	std::cout << "\tTamanho do estoque: ";
	std::cin >> estoque;

	v_lojas.push_back(Concessionaria(nome, cnpj, estoque));

	std::cout << "Concessionaria registrada" << std::endl;
}

void System::newcar(Concessionaria &C) {
	std::string marca;
	float preco;
	std::string chassi;
	long int dataFabricacao;
	std::string modelo;

	std::cout << "Insira os dados do automovel" << std::endl;

	std::cout << "\tMarca: ";
	getline(std::cin, marca);

	std::cout << "\tPreco: ";
	std::cin >> preco;

	std::cout << "\tChassi: ";
	getline(std::cin, chassi);

	std::cout << "\tData de Fabricacao: ";
	std::cin >> dataFabricacao;

	std::cout << "\tModelo: ";
	getline(std::cin, modelo);

	for(unsigned int i=0; i < C.getV_carros().size(); i++) {
		if(chassi.compare(C.getV_carros()[i].getChassi()) == 0) { //Se as strings forem iguais
			std::cout << "Este Veículo já foi cadastrado" << std::endl;
		}
		else {
			C.setV_carros(Automovel(marca, preco, chassi, dataFabricacao, modelo));
			std::cout << "Veículo cadastrado" << std::endl;
		}
	}
}

void System::media() {
	Concessionaria *C;
	int count = 0;
	float media;

	for(unsigned int i=0; i < v_lojas.size(); i++) {
		count += C -> getEstoque();
	}

	media = count / v_lojas.size();

	std::cout << "A média dos carros por concessionaria é: " << media << std::endl;
}

char System::menuInicial() {
	char alternativa = 0;
	do {
		std::cout << "\n ++++++++++++++++++++++++++++++++++++++++++++++\n" << "\n"
				<< " Escolha uma das seguintes alternativas abaixo: " << "\n"
				<< " Digite '1' para: Opções da Concessionaria" << "\n"
				<< " Digite '2' para: Opções do Automovel" << "\n"
				<< " Digite '3' para: Sair deste Menu" << "\n"
				<< " Alternativa escolhida: ";

				std::cin >> alternativa;
				std::cin.ignore(); //cin.ignore() ignora caracteres não lidos no buffer de entrada

		switch(alternativa) {
			case '1' : menuConcessionaria();
				break;
			case '2' : menuAutomovel();
				break;
			case '3' : // Nenhuma ação. Somente sai do menu.
				break;
			default : std::cout << " \n\n Alternativa inválida!" << std::endl;
		}
	} while(alternativa != '3');

	return alternativa;
}

char System::menuConcessionaria() {
	char alternativa = 0;
	Concessionaria C;
	float porcentagem;

	do {
		std::cout << "\n ++++++++++++++++++++++++++++++++++++++++++++++\n" << "\n"
			 << " Escolha uma das seguintes alternativas abaixo: " << "\n"
			 << " Digite '1' para: Criar concessionária" << "\n"
			 << " Digite '2' para: Listar concessionárias" << "\n"
			 << " Digite '3' para: Aumentar valor" << "\n"
			 << " Digite '4' para: Sair " << "\n"
			 << " Alternativa escolhida: ";

			 std::cin >> alternativa;
			 std::cin.ignore();

		switch(alternativa) {
			case '1' : newconc();
				break;
			case '2' : //metodo para listar as concessionarias
				break;
			case '3' : std::cout << "Informe a porcentagem:";
						std::cin >> porcentagem;
						C.aumentarValor(porcentagem);
				break;
			case '4' : // Nenhuma ação. Somente sai do menu.
				break;
			default : std::cout << " \n\n Alternativa inválida!" << std::endl;
		}
	} while(alternativa != '4');

	return alternativa;
}

char System::menuAutomovel() {
	char alternativa = 0;
	Concessionaria *C;

	do {
		std::cout << "\n ++++++++++++++++++++++++++++++++++++++++++++++\n" << "\n"
			 << " Escolha uma das seguintes alternativas abaixo: " << "\n"
			 << " Digite '1' para: Adicionar automóvel" << "\n"
			 << " Digite '2' para: Listar automóveis" << "\n"
			 << " Digite '3' para: Sair " << "\n"
			 << " Alternativa escolhida: ";

			 std::cin >> alternativa; 
			 std::cin.ignore();

		switch(alternativa){
			case '1' : newcar(*C);
				break;
			case '2' : 
						/*for(int i=0; i < C -> getEstoque(); i++) {
							std::cout << C -> getV_carros()[i];
						}*/
				break;
			case '3' : // Nenhuma ação. Somente sai do menu.
				break;
			default : std::cout << " \n\n Alternativa inválida!" << std::endl;
		}
	} while (alternativa != '3');

	return alternativa;	
}
