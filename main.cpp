#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;


class Animal {
	private:
	string name;
	int age;
	bool isHungry;
public :
	Animal() {
	};
	Animal(string n, int a, bool h) {
		name = n;
		age = a;
		isHungry = h;
	};
	string getName() {
		return name;
	};
	int getAge() {
		return age;
	};
	bool getIsHungry() {
		return isHungry;
	};

	void display() {
		cout << name << "(" << "Age: " << age << isHungry << ")" << endl;
	};
	void feed() {
		isHungry = false;

	};
};

class Mammal : public Animal {
	public:
	string furColor;
	Mammal() {
		Animal::Animal();
	}
	Mammal(string n, int a, bool h, string f) : Animal(n, a, h) {
		furColor = f;
	}

};

class Bird :public Animal {
public:
	float wingSpan;
	Bird() {
		Animal::Animal();
	}
	Bird(string n, int a, bool h, float w) :Animal(n, a, h){
		wingSpan = w;
	}
};



class Repite : public Animal {
public:
	bool isVenomous;
	Repite() {
		Animal::Animal();
	}
	Repite(string n, int a, bool h, bool v): Animal(n, a, h) {
		isVenomous = v;
	}
};



class Enclosure {
private:
	Animal* animals;
	int capacity;
	int currentCount;
public:
	Enclosure() {
	}
	Enclosure(int cap) {
		capacity = cap;
	}
	void addAnimal(Animal* a) {
		if (currentCount < capacity) {
			animals[currentCount] = *a;
			currentCount++;
		}
		else {
			cout << "Enclosure is full !" << endl;
		}
	};
	void displayAnimals() {
		for (int i = 0; i < currentCount; i++) {
			animals[i].display();
		};

	};


	class Visitor {
	private:
		string visitorName;
		int ticketsBought;
	public:
		void displayInfo() {
			cout << "Visitor Info: " << endl;
			cout << "Name:" << visitorName << endl;
			cout << "Tickets Bought: " << ticketsBought << endl;
		}
		Visitor() {
		}
		Visitor(string n, int t) {
			visitorName = n;	
			ticketsBought = t;
		}
	};



int main() {
	Enclosure enclosure(3);
	Animal* lion = new Mammal("Lion", 5, true, "Golden");
	enclosure.addAnimal(lion);
	Animal* parrot = new Bird("Parrot", 2, false, 0.5);
	enclosure.addAnimal(parrot);
	Animal* snake = new Repite("Snake", 4, true, true);
	Visitor visitor("John ", 2);
	enclosure.addAnimal(snake);

	enclosure.displayAnimals();

	visitor.displayInfo();


	return 0;
}
