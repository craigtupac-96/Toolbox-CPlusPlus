/*
Author: Craig Lawlor
C00184465
Description: A program to create a template function for multiple data types
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

template <typename T> 
void addNumbers(T one, T two) {
	T sum = one + two;

	cout << one << " + " << two << " = " << sum <<  endl;
}

int main()
{
	int num1 = 2;
	int num2 = 3;
	float flo1 = 2.3;
	float flo2 = 4.2;

	addNumbers(num1, num2);
	addNumbers(flo1, flo2);

	system("pause");
	return 0;
}

