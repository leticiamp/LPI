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
	Moto();
	Moto(Model model);
	~Moto();

	Model getModel();
	void setModel(Model model);
};

#endif