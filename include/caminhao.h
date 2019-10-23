#ifndef CAMINHAO_H
#define CAMINHAO_H

#include "automovel.h"

enum Tipo_carga {
	COMUM,
	PERIGOSA
};

class Caminhao : public Automovel {
private:
	Tipo_carga m_tipo_carga;
public:
	Caminhao::Caminhao();
	Caminhao::Caminhao(Tipo_carga tipo_carga_)
	Caminhao::~Caminhao();

	Tipo_carga Caminhao::getTipo_carga();
	void Caminhao::setTipo_carga(Tipo_carga tipo_carga_);
};

#endif