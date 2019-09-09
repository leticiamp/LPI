#include "system.h"

System::System() {}
System::~System() {}

//Eu faria mais ou menos assim (mas faltaria terminar):
/*Concessionaria System::newconc() { //criar consessionaria
	std::cout << "Nome: ";
	getline(std::cin, m_nome);		//nem entendo como isso funciona ainda ;/ mas talvez fique até melhor

	std::cout << "CNPJ: ";		//exemploMax: 99.999.999/0001-99	isso n é maior q um int?
	getline(std::cin, m_cnpj);

	std::cout << "Concessionaria registrada" << std::endl;
} */

Concessionaria System::newconc() {
	std::cout << "Insira os dados da nova concessionaria" << std::endl;

	std::cout << "\tNome: ";
	getline(std::cin, m_nome);

	std::cout << "\tCNPJ: ";
	getline(std::cin, m_cnpj);

	std::cout << "\tTamanho do estoque: ";
	getline(std::cin, m_estoque);

	std::cout << "Concessionaria registrada" << std::endl;
}

//eu tinha feito esse aqui que colocava todos os carros, mas acho q é errado
//vou fazer um q funcione melhor
/*void newCar(Concessionaria p) {
	for(int i=1;i<=getEstoque();i++) {
		cout<<	"Insira os dados do automovel "<<i<<" de "<<getEstoque()<<endl;
		cout<<	"\tMarca: ";
		getline(std::cin, v.m_marca)
		cout<<	"\tPreco: ";
		getline(std::cin, v.m_preco)
		cout<<	"\tChassi: ";
		getline(std::cin, v.m_chassi)
		cout<<	"\tData de Fabricacao: ";
		getline(std::cin, v.m_dataFabricacao)
		cout<<	"\tModelo: ";
		getline(std::cin, v.m_modelo)
		for(int j=1;j<=i;j++) {
			if(v[i]==v[j]) {
				std::cout<<"Carro já existente"<<endl;
				i--;
			}
		}
	}
}*/
Automovel System::newcar(Concessionaria p) {
	std::cout << "Insira os dados do automovel" << std::endl;

	std::cout << "\tMarca: ";
	getline(std::cin, m_marca)	//fiz o getline certo?

	std::cout << "\tPreco: ";
	getline(std::cin, m_preco)

	std::cout << "\tChassi: ";
	getline(std::cin, m_chassi)

	std::cout << "\tData de Fabricacao: ";
	getline(std::cin, m_dataFabricacao)

	std::cout << "\tModelo: ";
	getline(std::cin, m_modelo)

	for (int i=0; i < p.v.size; i++) {
		if (p.v[i].m_chassi == getChassi()) {
			std::cout << "Este carro já existe" << std::endl;
			p.v.pop_back();
			break;
		}
	}
}

void System::media() {
	int *nauto = new int;
	int *nconc = new int;

	nauto = 0;
	nconc = v_lojas.size();

	for(int i=0; i < nconc; i++) {
		nauto = nauto + v_lojas[i].m_estoque;
	}
	std::cout << "Cada concessionaria tem, em média, "<< nauto <<" carros" << std::endl;

	delete nauto;
	delete nconc;
}

char System::menuInicial() {
	char alternativa = 0;
	do {
		std::cout << "\n ++++++++++++++++++++++++++++++++++++++++++++++\n" << "\n"
				<< " \n Escolha uma das seguintes alternativas abaixo: " << "\n"
				<< " Digite '1' para: Opções da Concessionaria" << "\n"
				<< " Digite '2' para: Opções do Automovel" << "\n"
				<< " Digite '3' para: Sair deste Menu" << "\n"
				<< " Alternativa escolhida: ";

				std::cin >> alternativa; cin.ignore(); //cin.ignore() ignora caracteres não lidos no buffer de entrada

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

	do {
		std::cout << "\n ++++++++++++++++++++++++++++++++++++++++++++++\n" << "\n"
			 << " \n Escolha uma das seguintes alternativas abaixo: " << "\n"
			 << " Digite '1' para: Criar concessionária" << "\n"
			 << " Digite '2' para: Listar concessionárias" << "\n"
			 << " Digite '3' para: Aumentar valor" << "\n"
			 << " Digite '4' para: Sair " << "\n"
			 << " Alternativa escolhida: ";

			 std::cin >> alternativa; cin.ignore();

		switch(alternativa) {
			case '1' : newconc();
				break;
			case '2' : //metodo para listar as concessionarias
				break;
			case '3' : aumentarValor();
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

	do {
		std::cout << "\n ++++++++++++++++++++++++++++++++++++++++++++++\n" << "\n"
			 << " \n Escolha uma das seguintes alternativas abaixo: " << "\n"
			 << " Digite '1' para: Adicionar automóvel" << "\n"
			 << " Digite '2' para: Listar automóvel" << "\n"
			 << " Digite '3' para: Sair " << "\n"
			 << " Alternativa escolhida: "; std::cin >> alternativa; cin.ignore();
		switch(alternativa){
			case '1' : newcar(Concessionaria p);
				break;
			case '2' : 
				break;
			case '3' : // Nenhuma ação. Somente sai do menu.
				break;
			default : std::cout << " \n\n Alternativa inválida!" << std::endl;
		}
	} while (alternativa != '3');

	return alternativa;	
}
