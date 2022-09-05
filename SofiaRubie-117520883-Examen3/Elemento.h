#pragma once
#include<iostream>                      //REVISAR
#include<sstream>
using namespace std;

class Elemento{  //finca!?
private:
protected:
	double valor;
public:
	Elemento(double = 0);
	virtual ~Elemento();
	virtual double getEntrada() = 0;  //M.V.P
	virtual string toString() = 0;   //M.V.P
	virtual void agregarElemento(Elemento*) = 0;

};

