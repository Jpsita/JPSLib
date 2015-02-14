// JPSLibrary.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "LibraryHeader.h"
#include <iostream>

using namespace std;

namespace JPSLibNamespace{
	void JPSLibLoadFunctions::loadVectorInt(int x[], int count){
		cout << "Insert vector elements: \n";
		for (int i = 0; i < count; i++){
			cout << "Element " << i << ": ";
			cin >> x[i];
		}
	}

	int JPSLibLoadFunctions::loadVectorIntWithTerm(int x[], int term, int max){
		cout << "Insert vector elements; Stop with " << term << endl;
		int count = 0, temp;
		do{
			cout << "Element " << count << ": ";
			cin >> temp;
			if (temp != term){
				x[count] = temp;
				count++;
			}
		} while (temp != term && count < max);
		return count;
	}

	int JPSSearchFunctions::findIntItemInVector(int x[], int element, int max){
		for (int i = 0; i < max; i++){
			if (x[i] == element){
				return i;
			}
		}
		return -1;
	}

	int JPSSearchFunctions::findItemInOrdereVector(int x[], int item, int max, bool order){
		if (order){
			for (int i = 0; i < max; i++){
				if (x[i] == item){
					return i;
				}
				else if (x[i] > item){
					return -1;
				}
			}
		}
		else
		{
			for (int i = max - 1; i >= 0; i--){
				if (x[i] == item){
					return i;
				}
				else if (x[i] > item){
					return -1;
				}
			}
		}
		return -1;
	}
}
