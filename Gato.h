#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include "Mamifero.h"
using namespace std;

//Especializacion de mamifero
class Gato : public Mamifero{
public:
	Gato(string);
	virtual string toString();
};

