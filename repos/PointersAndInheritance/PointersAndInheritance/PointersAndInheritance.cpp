// PointersAndInheritance.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Person.h"
#include "Tweeter.h"
#include <iostream>
#include <memory>

using namespace std;


int main()
{
	Person* Macauley = new Person("Macauley", "Hopper", 456);
	Tweeter* MacauleyHoppercons = new Tweeter("Macauley", "Hopper", 567, "@Woohness");

	Person* pMacauleyHoppercons = MacauleyHoppercons;

	cout << Macauley->GetName() << endl;
	cout << MacauleyHoppercons->GetName() << endl;
	cout << pMacauleyHoppercons->GetName() << endl;

	delete MacauleyHoppercons;

	//auto spMacauley=make_shared<Person>("SMacauley", "PHopper", 458); //This line works if we're calling a person because auto finds what is needed for make_shared
	shared_ptr<Person> spMacauley=make_shared<Tweeter>("SMacauley", "PHopper", 458, "@SPWoohness");
	cout << spMacauley->GetName() << endl;

	Person localP("Local", "Person", 333);
	//Tweeter localT = localP; Wont work because t Person has no TwitterHandle variable

	Tweeter localT2("Local", "Tweeter", 444, "@local");
	Person& localP2 = localT2;
	cout << localP2.GetName() << endl;

    return 0;
}

