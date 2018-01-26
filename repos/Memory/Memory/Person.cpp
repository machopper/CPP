#include "stdafx.h"

#include "Person.h"
#include <iostream>

using namespace std;

Person::Person(string first, string last, int arbitrary) : firstname(first), lastname(last), arbitrarynumber(arbitrary)
{
}

string Person::GetName() const
{
	return firstname + " " + lastname;
}

bool Person::operator<(const Person& p) const
{
	return arbitrarynumber < p.arbitrarynumber;
}

bool Person::operator<(int i) const
{
	return arbitrarynumber < i;
}

bool operator<(int i, const Person& p)
{
	return i < p.arbitrarynumber;
}

void Person::AddResource()
{
	pResource.reset();
	pResource = std::make_shared<Resource>("Resource for " + GetName());
}