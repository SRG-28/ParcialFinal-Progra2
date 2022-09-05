#include "Servicio.h"

Servicio::Servicio() {
}

Servicio::~Servicio() {
}

double Servicio::getPrecioAnimal(int num) {
	if (num == 10) {
		return 1.400;
	}
	if(num == 11) {
		return 1.200;
	}
	if (num == 20) {
		return 1.800;
	}
	if (num == 22) {
		return 1.500;
	}
	if (num == 31) {
		return 5.000;
	}
	if (num == 43) {
		return 100.000;
	}
	if (num == 45) {
		return 750.000;
	}
	if (num == 48) {
		return 320.000;
	}
	if (num == 51) {
		return 50.000;
	}
	if (num == 54) {
		return 60.000;
	}
	if (num == 62) {
		return 80.000;
	}
	if (num == 65) {
		return 70.000;
	}
}

string Servicio::getRazaAnimal(int num) {
	if (num == 10) {
		string raza1("Perro Pastor Aleman");
		return raza1;
	}
	if (num == 11) {
		string raza2("Perro Salchicha");
		return raza2;
	}
	if (num == 20) {
		string raza3("Gato Persa");
		return raza3;
	}
	if (num == 22) {
		string raza3b("Gato Bengala");
		return raza3b;
	}
	if (num == 31) {
		string raza4("Mulan Catalan");
		return raza4;
	}
	if (num == 43) {
		string raza5("Caballo Arabe");
		return raza5;
	}
	if (num == 45) {
		string raza6("Caballo Purasangre");
		return raza6;
	}
	if (num == 48) {
		string raza7("Caballo Mustang");
		return raza7;
	}
	if (num == 51) {
		string raza8("Camello Bactriano");
		return raza8;
	}
	if (num == 54) {
		string raza9("Camello Dromedario");
		return raza9;
	}
	if (num == 62) {
		string raza10("Buey Brahman");
		return raza10;
	}
	if (num == 65) {
		string raza11("Buey Beefmaster");
		return raza11;
	}
}

