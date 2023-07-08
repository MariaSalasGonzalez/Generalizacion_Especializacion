#include "Gato.h"

Gato::Gato(string nombre) : Mamifero(nombre, 4){}

string Gato::toString() {
	stringstream ss;
	ss << "Estos son los datos de mi gato!" << endl;
	ss << Mamifero::toString();
	return ss.str();
}
