#ifndef MOTO_H
#define MOTO_H

#include "automovel.h"

enum Model {
	CLASSICO,
	ESPORTIVO
};

class Moto : public Automovel {
private:
	Model m_model;
public:
	Moto::Moto();
	Moto::Moto(Model model)
	Moto::~Moto();

	Model Moto::getModel();
	void Moto::setModel(Model model);
};

#endif