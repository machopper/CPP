// Casting.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Person.h"
#include "Tweeter.h"
#include "Resource.h"
#include <iostream>

using namespace std;

int main()
{
	Tweeter t("Macauley", "Hopper", 123, "@Woohness");
	Person* p = &t;
	Tweeter* pt = static_cast<Tweeter*>(p);
	cout << pt->GetName() << endl;

	Resource f("local");
	Tweeter* pi = dynamic_cast<Tweeter*>(&f);
	if (pi)
	{
		cout << pi->GetName() << endl;
	}
	else
	{
		cout << "Resouce can't be cast to Tweeter" << endl;
	}

    return 0;
}

