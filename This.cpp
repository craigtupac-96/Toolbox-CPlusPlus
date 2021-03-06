/*
Author: Craig Lawlor
C00184465
Description: A program using this pointer
*/

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class MyClass {
	private:
		int num;
	public:
		void setNum(int n);
		void printNum();
};

void MyClass::setNum(int n) {
	this->num = n;
}

void MyClass::printNum() {
	cout << "num: " << num << endl;                   // assumes current object
	cout << "this->num: " << this->num << endl;       // this pointer - pointer to its own address
	cout << "(*this).num: " << (*this).num<< endl;    // dereferencing, clone
}

int main()
{
	MyClass mc;

	mc.setNum(12);
	mc.printNum();

	system("pause");
	return 0;
}

