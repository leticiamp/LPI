//Listar os carros de uma concessionária:
//	- Percorrer o vector do tipo Automovel
//	- Para cada iteração, usa a sobrecarga do op de extração para mostrar as informações do veículo

for (int i=0; i < v_carros.size(); i++) {
	std::cout << v_carros[i];
}

//Aumento de x% no preço dos carros
void Automovel::aumentoValor(float porcentagem) {
	for (int i=0; i < v_carros.size(); i++) {
		m_preco *= ((porcentagem/100) + 1); 
	}
}
