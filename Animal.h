#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

#include <iostream>
class Animal {
private:
	string name;
	int age;
	bool isHungry;
public:
	Animal();
	Animal(string n, int a, bool h);
	void display();
	void feed();
	~Animal();
};


#endif
