// IIF.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	int x = 99;
	while (x > 0)
	{
		cout << "Enter a number, 0 to quit" << endl;
		cin >> x ;
		string sign = x > 0 ? "Positive" : "0 or Negative";
		cout << "Your number is: " << sign << endl;
	}
    return 0;
}

