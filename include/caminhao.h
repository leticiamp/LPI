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
	Caminhao();
	Caminhao(Tipo_carga tipo_carga_);
	~Caminhao();

	Tipo_carga getTipo_carga();
	void setTipo_carga(Tipo_carga tipo_carga_);
};

#endif