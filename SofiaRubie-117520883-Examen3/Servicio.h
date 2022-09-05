#pragma once
#include<iostream>
#include<sstream>
#include<string>
using namespace std;

class Servicio
{

public:
	Servicio();
	virtual ~Servicio();
	double getPrecioAnimal(int);
	string getRazaAnimal(int);
};

