#pragma once
#include"Elemento.h"
#include"Persona.h"
#include"Animal.h"

using namespace std;

class CompositeCorral : public Elemento{  //<<Abstractsa>>    //Aqui se da la composicion ??
private:
	Persona * encargadoC; //Per encargada del corral
	string nombreC;
	Elemento * * corral;
	int can;
	int tam;
public:
	CompositeCorral(Persona* = NULL, string = "");
	CompositeCorral(CompositeCorral&);
	virtual ~CompositeCorral();
	void agregarElemento(Elemento*);
	double getEntrada();
	string toString();
	CompositeCorral& operator = (CompositeCorral& cc2);

};

