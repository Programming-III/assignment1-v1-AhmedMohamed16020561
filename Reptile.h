#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

class Repite : public Animal {
	public:
		bool isVenomous;
		Repite();
		Repite(string n, int a, bool h, bool v);
		~Repite();
};








#endif
