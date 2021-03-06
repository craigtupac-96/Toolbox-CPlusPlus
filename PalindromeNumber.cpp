/*
Author: Craig Lawlor
C00184465
Description: A program to check if a number is a palindrome or not
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	int reverse = 0;
	int remainder = 0;

	cin >> num;
	int temp = num;

	while (temp != 0) {
		reverse = (reverse * 10) + (temp % 10);

		temp /= 10;
	}

	if (num == reverse) {
		cout << num << " is a palindrome" << endl;
	}
	else {
		cout << num << " is not a palindrome" << endl;
	}

	system("pause");
	return 0;
}

