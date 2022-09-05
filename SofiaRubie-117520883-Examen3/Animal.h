#pragma once
#include"Elemento.h"
#include"Servicio.h"
using namespace std;

class Animal : public Elemento {
private:
	string idAni;
	string nombAni;
	string nombCorral;
	int categoria;
public:
	Animal(string = "", string = "", string = "", int = 0);
	Animal(Animal&);  //constructor copia
	virtual ~Animal();
	string toString();
	Animal& operator = (Animal&); //operador de asignacion
	string getIdAni();
	string getnombAni();
	string getNombCorral();
	int getCategoria(); //??
	void setIdAni(string);
	void setNombAni(string);
	void setNombCorral(string);
	void setCategoria(int); //??
	virtual void precioAni(Servicio&); //precio del animal segun su servicio(categoria);
	virtual double getEntrada();
	virtual double calcular(Servicio* ca);
	void agregarElemento(Elemento*) {}
};

