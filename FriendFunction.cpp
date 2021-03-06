/*
Author: Craig Lawlor
C00184465
Description: A program to demonstrate a friend function
*/

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Student {
	private:
		string studentName;
	public:
		void setName(string name);
		friend void printName(Student stud);
};

// member function
void Student::setName(string name){
	studentName = name;
}

// printName is not a member function
void printName(Student stud) {
	cout << "Student Name: " << stud.studentName << endl;
}

int main() {
	Student stud;

	// set name via member function
	stud.setName("Craig");
	// friend function printing name
	printName(stud);

	system("pause");
	return 0;
}


