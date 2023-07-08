#include "Perro.h"
#include "Gato.h"

int main() {
	Mamifero* puntero;
	puntero = new Perro("Lucky");
	//por el polimorfismo esto es posible
	//este toString es el de mamifero
	cout << puntero->toString();
	delete puntero;
	puntero = new Gato("Bigotes");
	cout << puntero->toString();
	delete puntero;
	return 0;
}