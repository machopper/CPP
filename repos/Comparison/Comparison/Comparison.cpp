// Comparison.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Utility.h"
//#include <string>
//int foo(string s);
//int something();
using namespace std;


int main()
{
	int i = 2;
	if (i == 3)
		cout << "i is 3" << endl;
	cout << "i " << i << endl;
	if (i = 3)
		cout << "i is 3" << endl;
	cout << "i " << i << endl;
	i = 4;
	if (3 == i)
		cout << "i is 3" << endl;
	cout << "i " << i << endl;

/*
	int p;
	if (p = foo("whatever"))
	{
		something();
	}
*/

	cout << "Enter a number " << endl;
	cin >> i;

	cout << i << " is ";
	if (!IsPrime(i))
		cout << "not ";
	cout << "Prime." << endl;

	int j;
	cout << "Enter a second number " << endl;
	cin >> j;

	cout << i << " is ";
	//if (!(i % j == 0)) this code is the same as the code below but more refined
	if (j && (i % j) )
		cout << "not ";
	cout << "a multiple of " << j << endl;

    return 0;
}

