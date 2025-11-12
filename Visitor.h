#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

class Visitor {
private:
	string visitorName;	
	int ticketsBought;
public:
	void displayInfo();
	Visitor();
	Visitor(string n, int t);
	~Visitor();	
};







#endif
