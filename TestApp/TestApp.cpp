// TestApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "..\JPSLibrary\LibraryHeader.h"
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

	int item, res;
	std::cout << "\nTest searching for an item inside a vector.\nItem: ";
	std::cin >> item;
	res = JPSLibNamespace::JPSSearchFunctions::findIntItemInVector(y, item, count);

	if (res != -1){
		std::cout << "Item in position: " << res << std::endl;
	}
	else{
		std::cout << "Item not found.\n";
	}
	std::system("pause");
	return 0;
}

