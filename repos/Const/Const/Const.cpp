// Const.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Person.h"

int DoubleIt(const int& x)
{
	return x * 2;
}


int main()
{
	int i = 3;
	const int ci = 3;
	i = 4;
	//ci = 4;

	int j = 10;
	int DoubleJ = DoubleIt(j);
	int DoubleTen = DoubleIt(10);

	Person Macauley("Macauley", "Hopper", 234);
	Macauley.SetNumber(235);
	const Person cMacauley = Macauley;
	//cMacauley.SetNumber(236);
	int MacauleyNumber = cMacauley.GetNumber();

	int* pI = &i;
	const int* pII = &ci;

	Person* pMacauley = &Macauley;
	Person Ayden("Ayden", "Gotzmer", 345);

	const int * pcI = pI; //pointer to const
	//*pcI = 4; this wont work as we are point to a const we can't change the value
	pcI = &j;

	int * const cpI = pI; //const pointer
	*cpI = 4; //Here we can change the value of the pointer but we can't change the address of the pointer
	//cpI = &j;

	const int * const crazy = pI; //const pointer to a const int
	//*crazy = 4;
	//crazy = &j;
	int k = *crazy;

    return 0;
}

