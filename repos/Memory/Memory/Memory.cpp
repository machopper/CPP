// Memory.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Person.h"
#include <string>
using namespace std;


int main()
{
	Person Macauley("Macauley", "Hopper", 345);
	Macauley.AddResource();
	Macauley.SetFirstName("Cool Macauley");
	Macauley.AddResource();
	Person Macauley2 = Macauley;
	Macauley = Macauley2;
	string s1 = Macauley.GetResourceName();
    return 0;
}

