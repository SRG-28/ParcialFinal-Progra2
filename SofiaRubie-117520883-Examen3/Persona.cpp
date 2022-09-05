#include "Persona.h"

Persona::Persona() {
	id = "";
	nombre = "";
}

Persona::Persona(string ced, string nom) {
	id = ced;
	nombre = nom;
}

Persona::~Persona() {
}

string Persona::getId() {
	return id;
}

string Persona::getNombre() {
	return nombre;
}

void Persona::setId(string id) {
	this->id = id;
}

void Persona::setNombre(string nombre) {
	this->nombre = nombre;
}

string Persona::toString() {
	stringstream s;
	s << "Nombre del encargado: " << nombre << endl
		<< "Cedula: " << id << endl;
	return s.str();
}