#include "system.h"

System::System() {}
System::~System() {}

void System::newconc() {
	std::string nome;
	int cnpj;
	int estoque;
	std::string proprietario;
	
	std::cout << "Insira os dados da nova concessionaria:" << std::endl;

	std::cout << "\tNome: ";
	getline(std::cin, nome);

	std::cout << "\tCNPJ: ";
	std::cin >> cnpj;

	std::cout << "\tTamanho do estoque: ";
	std::cin >> estoque;

	std::cin.ignore();
	std::cout << "\tProprietário: ";
	getline(std::cin, proprietario);

	v_lojas.push_back(Concessionaria(nome, cnpj, estoque, proprietario));

	std::cout << "\n\n Concessionaria registrada!" << std::endl;
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
	std::cin >> chassi;

	std::cout << "\tData de Fabricacao: ";
	std::cin >> dataFabricacao;

	std::cout << "\tModelo: ";
	std::cin >> modelo;

	for(unsigned int i=0; i < C.getV_carros().size(); i++) {
		if(chassi.compare(C.getV_carros()[i].getChassi()) == 0) { //Se as strings forem iguais
			std::cout << "\n Este Veículo já foi cadastrado" << std::endl;
		}
		else {
			C.setV_carros(Automovel(marca, preco, chassi, dataFabricacao, modelo));
			std::cout << "\n Veículo cadastrado" << std::endl;
		}
	}
}

void System::media() {
	Concessionaria C;
	int count = 0;
	float media;

	for(unsigned int i=0; i < v_lojas.size(); i++) {
		count += C . getEstoque();
	}

	media = count / v_lojas.size();

	std::cout << "A média dos carros por concessionaria é: " << media << std::endl;
}

char System::menuInicial() {
	char alternativa = 0;
	do {
		std::cout << "\n ++++++++++++++++++++++++++++++++++++++++++++++\n"
				  << "                  MENU INICIAL                 "
				  << "\n ++++++++++++++++++++++++++++++++++++++++++++++\n" << "\n"
				<< " Escolha uma das seguintes alternativas abaixo: " << "\n"
				<< " \n Digite '1' para: Opções da Concessionaria" << "\n"
				<< " Digite '2' para: Opções do Automovel" << "\n"
				<< " Digite '3' para: Sair deste Menu" << "\n"
				<< " \n Alternativa escolhida: ";

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
	std::string arq, nome;

	do {
		std::cout << "\n ++++++++++++++++++++++++++++++++++++++++++++++\n"
					  << "               MENU CONCESSIONÁRIA                 "
				  << "\n ++++++++++++++++++++++++++++++++++++++++++++++\n" << "\n"
			 << " Escolha uma das seguintes alternativas abaixo: " << "\n"
			 << " \n Digite '1' para: Criar concessionária" << "\n"
			 << " Digite '2' para: Listar concessionárias" << "\n"
			 << " Digite '3' para: Aumentar valor" << "\n"
			 << " Digite '4' para: Escrever concessionaria em txt:" << "\n"
			 << " Digite '5' para: Ler concessionaria em txt:" << "\n"
			 << " Digite '6' para: Voltar " << "\n"
			 << " \n Alternativa escolhida: ";

			 std::cin >> alternativa;
			 std::cin.ignore();

		switch(alternativa) {
			case '1' : newconc();
				break;
			case '2' : listarConcessionaria();
				break;
			case '3' : std::cout << "Informe a porcentagem: ";
						std::cin >> porcentagem;
						C.aumentarValor(porcentagem);
				break;
			case '4' : 
						std::cout<< "Digite o nome de uma concessionaria: ";
						std::cin >> nome;
						escreveConcessionaria(nome);
				break;
			case '5' : std::cin >> arq;
						C = lerConcessionaria(arq);
						v_lojas.push_back(C);
				break;
			case '6' : //Volta para o menu inicial
				break;
			default : std::cout << " \n\n Alternativa inválida!" << std::endl;
		}
	} while(alternativa != '6');

	return alternativa;
}

char System::menuAutomovel() {
	char alternativa = 0;
	Concessionaria C;

	do {
		std::cout << "\n ++++++++++++++++++++++++++++++++++++++++++++++\n"
					<< "                 MENU AUTOMÓVEL                 "
				  << "\n ++++++++++++++++++++++++++++++++++++++++++++++\n" << "\n"
			 << " Escolha uma das seguintes alternativas abaixo: " << "\n"
			 << " \n Digite '1' para: Adicionar automóvel" << "\n"
			 << " Digite '2' para: Listar automóveis" << "\n"
			 << " Digite '3' para: Voltar " << "\n"
			 << " \n Alternativa escolhida: ";

			 std::cin >> alternativa; 
			 std::cin.ignore();

		switch(alternativa){
			case '1' : newcar(C);
				break;
			case '2' : if(C.getV_carros().size() == 0) {
							std::cout << "Não existe nenhum veículo cadastrado!" << std::endl;
						}
						else {
							for(int i=0; i < C.getEstoque(); i++) { //percorre todo os veiculos de uma concessionaria
								std::cout << C.getV_carros()[i];
							}
						}

				break;
			case '3' : //Volta para o menu inicial
				break;
			default : std::cout << "\n\n Alternativa inválida!" << std::endl;
		}
	} while (alternativa != '3');

	return alternativa;	
}

void System::listarConcessionaria() {
	for (Concessionaria &C : v_lojas) {
		std::cout << "Proprietário: " << C.getProprietario()
		<< "\nFrota total: " << C.getEstoque()
		<< "\nValor total: " << C.valorTotal()
		<< std::endl;
	}
}

void System::escreveConcessionaria(std::string nome) {
    unsigned int i=0;

	while(i < v_lojas.size() && nome != v_lojas[i].getNome()){
		i++;
	}

	if (i == v_lojas.size()){
		std::cout<< "Concessionaria não encontrada" << std::endl;
	}
	else {
		std::ofstream out("LP2.txt");

		out << "Nome: " << nome << std::endl;
		out << "CNPJ: " << v_lojas[i].getCnpj() << std::endl;
    	out << "Estoque: " << v_lojas[i].getEstoque() << std::endl;
		out << "Proprietário: " << v_lojas[i].getProprietario() << std::endl;

    	out.close();
	}
}

Concessionaria System::lerConcessionaria(const std::string& arq) {
    std::ifstream ifs(arq.c_str());

    std:: string nome, cnpj, estoque, proprietario;

    ifs >> nome;
    ifs >> cnpj;
    ifs >> estoque;
    ifs >> proprietario;

    std::string str((istreambuf_iterator<char>(ifs)), istreambuf_iterator<char>());

    return Concessionaria(nome, std::stoi(cnpj), std::stoi(estoque), proprietario);
}
