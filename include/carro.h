#ifndef CARRO_H
#define CARRO_H

#include "automovel.h"

enum Tipo_motor {
	GASOLINA,
	ELETRICO
};

class Carro : public Automovel {
private:
	Tipo_motor m_tipo_motor;
public:
	Carro::Carro();
	Carro::Carro(Tipo_motor tipo_motor_)
	Carro::~Carro();

	Tipo_motor Carro::getTipo_motor();
	void Carro::setTipo_motor(Tipo_motor tipo_motor_);
};

#endif