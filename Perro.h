#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include "Mamifero.h"
using namespace std;

//Especializacion de mamifero
class Perro : public Mamifero{
public:
	Perro(string);
	virtual string toString();
};

