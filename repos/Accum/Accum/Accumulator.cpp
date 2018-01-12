// Accum.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include "Person.h"
#include "Accum.h"

using namespace std;


int main()
{
	Accum<int> integers(0);
	integers += 3;
	integers += 7;
	cout << integers.GetTotal() << endl;

	Accum<string> strings("");
	strings += "Hello";
	strings += " world";
	cout << strings.GetTotal() << endl;

	//These wont work as they're trying to pass the wrong type into the accum, so for the first accum of type int it wouldn't be able to be passed a string and vice versa
	//integers += "testing";
	//strings += 4;

	//Person start("", "", 0);
	Accum<Person> people(0);
	Person p1("Macauley", "Hopper", 123);
	Person p2("Ayden", "Gotzmer", 456);
	people += p1;
	people += p2;
	cout << people.GetTotal() << endl;

    return 0;
}

