#include "Perro.h"

Perro::Perro(string nombre): Mamifero(nombre, 4) {}

string Perro::toString() {
	stringstream ss;
	ss << "Estos son los datos de mi perro!" << endl;
	ss << Mamifero::toString();
	return ss.str();
}
