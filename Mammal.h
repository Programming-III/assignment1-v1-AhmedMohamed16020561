#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

class Mammal : public Animal {
public:
	string furColor;
	Mammal();
	Mammal(string n, int a, bool h, string f);
	
	~Mammal();
};





#endif
