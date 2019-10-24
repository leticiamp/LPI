#include "carro.h"

Carro::Carro() {}

Carro::Carro(Tipo_motor tipo_motor_) {
	m_tipo_motor = tipo_motor_;
}

Carro::~Carro() {}

Tipo_motor Carro::getTipo_motor() {
	return m_tipo_motor;
}

void Carro::setTipo_motor(Tipo_motor tipo_motor_) {
	m_tipo_motor = tipo_motor_;
}