/*
Author: Craig Lawlor
C00184465
Description: A program to explore pure virtual destructors
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

class Person {
	public:
		virtual ~Person() = 0;   // pure virtual destructor
};

// must provide body for pure virtual destrcutor - despite it being pure
Person::~Person(){
	cout << "Pure virtual destructor called" << endl;
}

class Tourist : public Person {
	public:
		~Tourist();
};

Tourist::~Tourist() {
	cout << "Tourist destructor called" << endl;
}

int main()
{
	Person *per1 = new Tourist();

	delete per1;

	system("pause");
	return 0;
}

