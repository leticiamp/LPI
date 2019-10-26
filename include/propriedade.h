#ifndef PROPRIEDADE_H
#define PROPRIEDADE_H

template <class T>
class Propriedade {
private:
	T m_primeiroNome;
	T m_segundoNome;

public:
	Propriedade(T primeiroNome_, T segundoNome_); //Construtor parametrizado
	~Propriedade(); //Destrutor

	T getPrimeiroNome();
	void setPrimeiroNome(T primeiroNome_);

	T getSegundoNome();
	void setSegundoNome(T segundoNome_);
};

template <class T>
Propriedade<T>::Propriedade(T primeiroNome_, T segundoNome_) {
	m_primeiroNome = primeiroNome_;
	m_segundoNome = segundoNome_;
}

template <class T>
Propriedade<T>::~Propriedade() {}

template <class T>
Propriedade<T>::getPrimeiroNome() {
	return m_primeiroNome;
}

template <class T>
void Propriedade<T>::setPrimeiroNome(T primeiroNome_) {
	m_primeiroNome = primeiroNome_;
}

template <class T>
Propriedade<T>::getSegundoNome() {
	return m_segundoNome;
}

template <class T>
void Propriedade<T>::setSegundoNome(T segundoNome_) {
	m_segundoNome = segundoNome_;
}

#endif