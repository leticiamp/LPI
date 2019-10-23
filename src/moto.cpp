#include "moto.h"

Moto::Moto() {}

Moto::Moto(Model model) {
	m_model = model;
}

Moto::~Moto() {}

Model Moto::getModel() {
	return m_model;
}

void Moto::setModel(Model model) {
	m_model = model;
}