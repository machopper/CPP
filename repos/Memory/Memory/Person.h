#pragma once
#include <string>
#include "Resource.h"
#include <memory>
#ifndef _Person_H
#define _Person_H
class Person
{
private:
	std::string firstname;
	std::string lastname;
	int arbitrarynumber;
	Resource* pResource;

public:
	Person(std::string first, 
		std::string last, 
		int arbitrary);
	Person(const Person& p); //This is a copy constructor
	~Person();
	std::string GetName()const;
	int GetNumber() const { return arbitrarynumber;}
	void SetNumber(int number) { arbitrarynumber = number; }
	void SetFirstName(std::string first) { firstname = first; }
	bool operator<(const Person& p) const;
	bool operator<(int i) const;
	friend bool operator<(int i, const Person& p);
	Person& operator-(const Person& p);
	void AddResource();
};
bool operator<(int i, const Person& p);
#endif

