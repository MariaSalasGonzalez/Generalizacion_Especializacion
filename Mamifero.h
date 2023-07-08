#pragma once
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

//Superclase
//Generalizacion de gato y perro
class Mamifero{
private:
	int patas;
	string nombre;	
public:
	Mamifero(string = "", int = 0);
	virtual string toString();
};

