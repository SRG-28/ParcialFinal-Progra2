#include"Persona.h"
#include"Servicio.h"
#include"Animal.h"
#include"Elemento.h"
#include "CompositeCorral.h"

int main() {
	cout << "-------------Examen III-------------" << endl;
	cout << "-------------COMPISITE--------------" << endl;
	cout << "Creacion de los 6 animales existentes.." << endl;
	Elemento* ani1 = new Animal("2342", "Tobi", "Corral Carga", 10);
	Elemento* ani2 = new Animal("7342", "Coqueta", "Corral Carga", 20);
	Elemento* ani3 = new Animal("9342", "Tobi", "Corral Carga", 31);
	Elemento* ani4 = new Animal("0342", "Tobi", "Corral Carga", 43);
	Elemento* ani5 = new Animal("3342", "Tobi", "Corral Carga", 54);
	Elemento* ani6 = new Animal("4342", "Tobi", "Corral Carga", 65);
	cout << ani1->toString();
	cout << ani2->toString();
	cout << ani3->toString();
	cout << ani4->toString();
	cout << ani5->toString();
	cout << ani6->toString();

	cout << "Creacion de las 6 personas encargadas.." << endl;
	Persona* per1 = new Persona("12345", "Juan");
	Persona* per2 = new Persona("45677", "Ana");
	Persona* per3 = new Persona("78099", "Maria");
	Persona* per4 = new Persona("23453", "Josue");
	Persona* per5 = new Persona("09642", "Diego");
	Persona* per6 = new Persona("12345", "James");
	cout << per1->toString();
	cout << per2->toString();
	cout << per3->toString();
	cout << per4->toString();
	cout << per5->toString();
	cout << per6->toString();
	cout << "Creacion de los 6 corrales existentes.." << endl;
	Elemento* corral1 = new CompositeCorral(per1, "Corral-Carga");
	Elemento* corral2 = new CompositeCorral(per2, "Corral-Carga");
	Elemento* corral3 = new CompositeCorral(per3, "Corral-Remolcar");
	Elemento* corral4 = new CompositeCorral(per4, "Corral-Montar");
	Elemento* corral5 = new CompositeCorral(per5, "Corral-Carga");
	Elemento* corral6 = new CompositeCorral(per6, "Corral-Carga");
	cout << corral1->toString();
	cout << corral2->toString();
	cout << corral3->toString();
	cout << corral4->toString();
	cout << corral5->toString();
	cout << corral6->toString();
	cout << "Ingresando animales a sus respectivos corrales.." << endl;
	corral1->agregarElemento(ani1);
	corral2->agregarElemento(ani2);
	corral3->agregarElemento(ani3);
	corral4->agregarElemento(ani4);
	corral5->agregarElemento(ani5);
	corral6->agregarElemento(ani6);
	cout << corral1->toString();
	cout << corral2->toString();
	cout << corral3->toString();
	cout << corral4->toString();
	cout << corral5->toString();
	cout << corral6->toString();

	cout << "Ingresando corrales dentro de corrales" << endl;
	corral1->agregarElemento(corral3);
	cout << corral1->toString();
	corral5->agregarElemento(corral4);
	cout << corral1->toString();
	cout << "-----------Calculos examen------------" << endl;
	cout << "Entrada de cada corral(por separado)" << endl;
	cout << "El valor del corral 1 es:";
	cout << corral1->getEntrada() <<endl;
	cout << "El valor del corral 2 es:";
	cout << corral2->getEntrada() << endl;
	cout << "El valor del corral 3 es:";
	cout << corral3->getEntrada() << endl;
	cout << "El valor del corral 4 es:";
	cout << corral4->getEntrada() << endl;
	cout << "El valor del corral 5 es:";
	cout << corral5->getEntrada() << endl;
	cout << "El valor del corral 6 es:";
	cout << corral6->getEntrada() << endl;

	cout << "Entrda potencial de la finca" << endl;
	double Finca;
	Finca = corral1->getEntrada() + corral2->getEntrada()+ corral3->getEntrada() + corral4->getEntrada() + corral5->getEntrada() + corral6->getEntrada();
	cout << "El valor potencial de la finca es:  ";
	cout << Finca <<endl;

	cout << "Entrada potencial sin el corral de carga" << endl;
	double val3;
	val3 = corral3->getEntrada() + corral4->getEntrada();
	cout << " El valor potencial de finca sin carga es: " << val3 << endl;

	cout << "Entrada del corral carga excepto corral montar" << endl;
	double Finca2;
	Finca2 = corral1->getEntrada() + corral2->getEntrada() + corral3->getEntrada() + corral5->getEntrada() + corral6->getEntrada();
	cout << "El valor potencial de la finca es:  ";
	cout << Finca2 << endl;



	
	system("pause");
	return 0;
}