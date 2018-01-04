// ClassesAndObjectsComplete.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Person.h"
#include "Tweeter.h"
#include "status.h"
#include <iostream>

using std::cout;
using std::endl;


int main()
{
	Person p1("Macauley", "Hopper", 27);
	{
		Tweeter t1("Ayden", "Gotzmer", 17, "@MaiWifeeee");
	}
	cout << "After innermost block" << endl;
	cout << "p1: " << p1.GetName() << " " << p1.GetNumber() << endl;
	p1.SetNumber(124);
	cout << "p1: " << p1.GetName() << " " << p1.GetNumber() << endl;
	Status s = Pending;
	s = Approved;

    return 0;
}

