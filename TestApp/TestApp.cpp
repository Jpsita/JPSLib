// TestApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "LibraryHeader.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	int x[50];
	std::cout << "Test inserting of 15 elements\n";
	JPSLibNamespace::JPSLibLoadFunctions::loadVectorInt(x, 15);

	int y[50], count;
	std::cout << "Test inserting vector with ending character\n";
	count = JPSLibNamespace::JPSLibLoadFunctions::loadVectorIntWithTerm(y, -1, 50);
	std::cout << "Elements: " << count << std::endl;

	std::system("pause");
	return 0;
}

