/*
Author: Craig Lawlor
C00184465
Description: A program to create and manipulate maps
*/

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <map>
#include <list>
using namespace std;

int main()
{
	/*vector<int> myVect();
	map<string, int> myMap;

	myMap["Craig"] = 27;

	map<string, int>::iterator it = myMap.begin();
	cout << it.operator*().second << endl;

	myMap.erase("Craig");

	myMap.insert(make_pair("NewCraig", 31));

	it = myMap.begin();
	cout << it.operator*().second << endl;*/



	std::map<std::string, int> freq;

	std::string numbers[] = { "zero","one","two","three","four","five" };
	int number = 12345033;

	for (int i = 0; i <= 7; i++)
	{
		int j = number % 10;

		std::map<std::string, int>::iterator iter = freq.find(numbers[j]);
		int frequency = (iter == freq.end() ? 0 : iter->second);

		freq[numbers[j]] = ++frequency;
		number = number / 10;
	}

	std::map<std::string, int>::iterator iter = freq.begin();
	std::map<std::string, int>::iterator end = freq.end();

	for (; iter != end; ++iter)
	{
		std::cout << " " << iter->second << std::endl;
	}

	system("pause");
	return 0;
}

