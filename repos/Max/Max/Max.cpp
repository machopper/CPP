// Max.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <algorithm>
#include "Person.h"
#include "BankAccount.h"

using namespace std;

template <class T>
T max(T& t1, T& t2)
{
	return t1 < t2 ? t2 : t1;
}

int main()
{
	cout << "Max of 33 and 44 is " << max(33, 44) << endl;
	string s1 = "Hello";
	string s2 = "World";
	cout << "Max of " << s1 << " and " << s2 << " is " << max(s1, s2) << endl;
	Person p1("Macauley", "Hopper", 123);
	Person p2("Ayden", "Gotzmer", 456);
	cout << "Max of " << p1.GetName() << " and " << p2.GetName() << " is " << max(p1, p2).GetName() << endl;
	//BankAccount b1;
	//BankAccount b2;
	//cout << "Max of " << b1.GetHolderName() << " and " << b2.GetHoldername() << " is " << max(b1, b2).GetHolderName() << endl;

    return 0;
}

