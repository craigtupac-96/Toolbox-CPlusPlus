/*
Author: Craig Lawlor
C00184465
Description: A program to explore dangling pointers
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

class House {

};

int main()
{
	House *object = new House();
	House *object2 = object;

	cout << "Object address: " << object << endl;
	cout << "Object2 address: " << object2 << endl;

	delete object;
	cout << endl << "After object is deleted object2 points at nothing: " << object2 << endl;

	system("pause");
	return 0;
}

