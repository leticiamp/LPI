#include "caminhao.h"

Caminhao::Caminhao() {}

Caminhao::Caminhao(Tipo_carga tipo_carga_){
	m_tipo_carga = tipo_carga_;
}

Caminhao::~Caminhao() {}

Tipo_carga Caminhao::getTipo_carga(){
	return m_tipo_carga;
}

void Caminhao::setTipo_carga(Tipo_carga tipo_carga_){
	m_tipo_carga = tipo_carga_;
}