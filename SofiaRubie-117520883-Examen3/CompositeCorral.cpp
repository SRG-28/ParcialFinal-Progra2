#include "CompositeCorral.h"

CompositeCorral::CompositeCorral(Persona* per, string nombreCo) {
	encargadoC = per;
	nombreC = nombreCo;
	tam = 6;
	can = 0;
	corral = new Elemento*[tam];
	for (int i = 0; i < tam; i++)
		corral[i] = NULL;
}

CompositeCorral::CompositeCorral(CompositeCorral& cc2) {
	this->encargadoC = cc2.encargadoC;
	this->nombreC = cc2.nombreC;
	this->corral = cc2.corral;
	this->can = cc2.can;
	this->tam = cc2.tam;
		corral = new Elemento*[tam]; //creacion de un vector de enteros que representa la edad de los hijos
		for (int i = 0; i < tam; i++) {
			corral[i] = cc2.corral[i];
		}
}

CompositeCorral::~CompositeCorral() {
	for (int i = 0; i < can; i++)
		delete corral[i];
	delete[] corral;
}

void CompositeCorral::agregarElemento(Elemento* ele) {
	corral[can++] = ele;
}

double CompositeCorral::getEntrada() {
	double  r = valor;
	for (int i = 0; i < can; i++)
		r += corral[i]->getEntrada();
	return r;
}

string CompositeCorral::toString() {
	stringstream s;
	s << "Encargado del corral: " << encargadoC <<endl;
	s << "Nombre del corral: " << nombreC <<endl;
	for (int i = 0; i < can; i++)
		s << corral[i]->toString() << endl;
	return s.str();
}

CompositeCorral& CompositeCorral::operator = (CompositeCorral& cc2) {
	if (this != &cc2) {
		this->encargadoC = cc2.encargadoC;
		this->nombreC = cc2.nombreC;
		this->corral = cc2.corral;
		this->can = cc2.can;
		this->tam = cc2.tam;
	}
	return *this;
}