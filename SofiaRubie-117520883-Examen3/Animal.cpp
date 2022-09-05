#include "Animal.h"

Animal::Animal(string id, string nombre, string corral, int cat) {
	idAni = id;
	nombAni = nombre;
	nombCorral = corral;
	categoria = cat;
}

Animal::Animal(Animal& a2) {  
	this->idAni = a2.idAni;
	this->nombAni = a2.nombAni;
	this->nombCorral = a2.nombCorral;
	this->categoria = a2.categoria;
}

Animal::~Animal() {
}

Animal& Animal::operator = (Animal& a2) {
	if (this != &a2) {
		this->idAni = a2.idAni;
		this->nombAni = a2.nombAni;
		this->nombCorral = a2.nombCorral;
		this->categoria = a2.categoria;
	}
	return *this;  
}

string Animal::getIdAni() { return idAni; }
string Animal::getnombAni() { return nombAni; }
string Animal::getNombCorral() { return nombCorral; }
int Animal::getCategoria() { return categoria; }

void Animal::setIdAni(string id) {
	this->idAni = id;
}
void Animal::setNombAni(string nombre) {
	this->nombAni = nombre;
}
void Animal::setNombCorral(string corral) {
	this->nombCorral = corral;
}
void Animal::setCategoria(int cat) {
	this->categoria = cat;
}

void Animal::precioAni(Servicio &ca ) {
	cout << "La raza de" <<nombAni  <<"es: " << ca.getRazaAnimal(categoria)  << "mil dolares "<< endl; 
	cout << "Su precio es de:" <<ca.getPrecioAnimal(categoria) << endl;   
}

string Animal::toString() {
	stringstream s;
	s << "Numero de identificacion: " << idAni << endl
		<< "Nombre: " << nombAni << endl
		<< "Corral al que pertenece: " << nombCorral << endl
		<< "Categoria: " << categoria << endl;
	return s.str();

}

double Animal::calcular(Servicio* ca) {
	return ca->getPrecioAnimal(categoria);
}

double Animal::getEntrada() {
	double valor;
	Servicio* ca = 0;
	valor = ca->getPrecioAnimal(categoria);
	
	return valor;

}

