#include "stdafx.h"

#include "Person.h"
#include <iostream>

using namespace std;

Person::Person(string first, string last, int arbitrary) : firstname(first), lastname(last), arbitrarynumber(arbitrary), pResource(nullptr)
{
}

Person::Person(const Person& p) : firstname(p.firstname), lastname(p.lastname), arbitrarynumber(p.arbitrarynumber), pResource(new Resource(p.pResource->GetName()))
{
}

Person::~Person()
{
	delete pResource;
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
	delete pResource;
	pResource = new Resource("Resource for " + GetName());
}

Person& Person::operator=(const Person& p)
{
	firstname = p.firstname; 
	lastname = p.lastname;
	arbitrarynumber = p.arbitrarynumber;
	delete pResource;
	pResource = new Resource(p.pResource->GetName());
	return *this;
}