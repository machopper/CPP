// FreeStore.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Resource.h"
#include <string>
using namespace std;


int main()
{
	{
		Resource localResource("local");
		string localString = localResource.GetName();
	}
	Resource* pResource = new Resource("created with new");
	string newString = pResource->GetName();
	//Here if we run this portion we construct pResource but we don't deconstruct it, this is a memory leak
	int j = 3;
	if (j == 3)
	{
		return 0;
	}
	//Resource* p2 = pResource; This is making a copy of pResource
	//string string2 = p2->GetName(); This proves that it can still call GetName
	delete pResource;
	//string string3 = pResource->GetName();
	//pResource = nullptr;
	//delete pResource;
	//delete p2;

    return 0;
}

