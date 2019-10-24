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
	Carro();
	Carro(Tipo_motor tipo_motor_)
	~Carro();

	Tipo_motor getTipo_motor();
	void setTipo_motor(Tipo_motor tipo_motor_);
};

#endif