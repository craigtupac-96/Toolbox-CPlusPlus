/*
Author: Craig Lawlor
C00184465
Description: A program to create a vector and use its operations
*/

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

vector<int> myVect(0);

void printVector(vector<int> v) {
	cout << "~My Vector~" << endl;
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " | ";
	}
	cout << endl << endl;
}

int numOfElements(vector<int> v) {
	int count = 0;
	for (int i = 0; i < v.size(); i++) {
		count++;
	}
	return count;
}

int main()
{
	int option = 0;
	int input;
	int pos;
	int num;

	while (option != -1) {
		cout << "Menu (-1 to exit)" << endl << "1. Push back" << endl
			<< "2. Pop back" << endl << "3. Insert an element" <<
			endl << "4. Erase an element" << endl << "5. Clear all"
			<< endl << "6. Number of Elements" << endl <<
			"7. Print Vector" << endl << endl;

		cin >> option;

		switch (option) {
			case 1:
				cout << "Enter a number" << endl;
				cin >> input;
				myVect.push_back(input);
				break;
			case 2:
				myVect.pop_back();
				cout << "End element popped" << endl;
				break;
			case 3:
				cout << "Enter a number" << endl;
				cin >> input;
				cout << "Enter a position" << endl;
				cin >> pos;
				if (pos > numOfElements(myVect)) {
					cout << "The number entered was out of bounds" << endl;
					break;
				}
				myVect.insert(myVect.begin() + (pos-1), input);
				break;
			case 4:
				cout << "Enter a position" << endl;
				cin >> pos;
				if (pos > numOfElements(myVect)) {
					cout << "The number entered was out of bounds" << endl;
					break;
				}
				myVect.erase(myVect.begin() + (pos-1));
				break;
			case 5:
				myVect.clear();
				break;
			case 6:
				cout << "Vector size: " << numOfElements(myVect) << endl;
				break;
			case 7:
				printVector(myVect);
				break;
			default:
				break;
		}
	}

	system("pause");
	return 0;
}

