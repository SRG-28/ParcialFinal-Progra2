#pragma once
#include<iostream>
#include<sstream>
using namespace std;

class Persona
{
private:
	string id;
	string nombre;
public:
	Persona();
	Persona(string, string);
	virtual ~Persona();
	string getId();
	string getNombre();
	void setId(string);
	void setNombre(string);
	string toString();
};

