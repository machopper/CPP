// PointersAndReferences.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include "Person.h"

using namespace std;

int main()
{
	int a = 3;
	cout << "a is " << a << endl;
	int* pA = &a;
	*pA = 4;
	cout << "a is " << a << endl;
	int b = 100;
	pA = &b;
	(*pA)++;
	cout << "a " << a << ", *pA " << *pA << endl;

	Person Macauley("Macauley", "Hopper", 234);
	Person* pMacauley = &Macauley;
	(*pMacauley).SetNumber(235);
	cout << "Macauley: " << Macauley.GetName() << " " << Macauley.GetNumber() << endl;
	cout << "pMacauley: " << pMacauley->GetName() << " " << pMacauley->GetNumber() << endl;

	int& rA = a;
	rA = 5;
	cout << "a is " << a << endl;

	Person& rMacauley = Macauley;
	rMacauley.SetNumber(345);
	cout << "rMacauley: " << rMacauley.GetName() << " " << rMacauley.GetNumber() << endl;

	int* badPointer = nullptr;
	if (badPointer)
	{
		*badPointer = 3;
		cout << *badPointer << endl;
	}

	//int& badReference;
	//badReference = 3;
	//cout << badReference;

    return 0;
}

