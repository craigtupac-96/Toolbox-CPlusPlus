/*
Author: Craig Lawlor
C00184465
Description: A program to explore threading in c++
*/

#include "stdafx.h"
#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

mutex mutLock;

void threadFunction(int arg) {
	cout << "Thread: "<< arg << endl;
}

void lockedThreadFunction(int arg) {
	mutLock.lock();
	cout << "Thread: " << arg << endl;
	mutLock.unlock();
}

int main()
{
	thread threads[10];
	for (int i = 1; i < 10; i++ ) {
		threads[i] = thread(threadFunction, i);
	}

	for (int i = 1; i < 10; i++) {
		threads[i].join();
	}

	cout << endl <<  "Threads are running at random above" << endl;
	cout << "Using a mutex lock they will run in order" << endl;

	for (int i = 1; i < 10; i++) {
		threads[i] = thread(lockedThreadFunction, i);
	}

	for (int i = 1; i < 10; i++) {
		threads[i].join();
	}

	system("pause");
	return 0;
}

