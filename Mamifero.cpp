#include "Mamifero.h"

Mamifero::Mamifero(string nombre, int patas): 
	nombre(nombre), patas(patas){
}

string Mamifero::toString() {
	stringstream ss;
	ss << nombre << " Tiene: " << patas << " patas\n";
	return ss.str();
}

