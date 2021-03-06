/*
Author: Craig Lawlor
C00184465
Description: A program to explore class templates 
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

template <typename T>
class Adder {
	private:
		T sum;
	public:
		Adder() {
			sum = 0;
		}
		void add(T num);

		T total();
};

template <typename T>
void Adder<T>::add(T num) {
	sum += num;
}

template <typename T>
T Adder<T>::total() {
	return sum;
}

int main()
{
	Adder<int> intAdder;
	Adder<float> floAdder;

	cout << "Start total(int): " << intAdder.total() << endl;
	cout << "Start total(float): " << floAdder.total() << endl;

	intAdder.add(53);
	floAdder.add(14.3f);

	cout << endl << "New total(int): " << intAdder.total() << endl;
	cout << "New total(float): " << floAdder.total() << endl;

	intAdder.add(20);
	floAdder.add(20.1f);

	cout << endl << "New total(int): " << intAdder.total() << endl;
	cout << "New total(float): " << floAdder.total() << endl;

	system("pause");
	return 0;
}

