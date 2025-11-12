#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

class Bird:public Animal {
public :
	float wingSpan;
	Bird();	
	Bird(string n, int a, bool h, float w);
	~Bird();
};






#endif
