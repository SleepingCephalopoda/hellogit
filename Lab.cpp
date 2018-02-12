#include <iostream>
#include <string>
#include <vector>
#include "Chemistry.h"
using namespace std;
using std::vector;

void AutoVectorObjects01();

int main()

{
	
	cout << "Computing II";
	cout << endl;
	cout << "Lab 01 - CHEM1125 Class Implementation";
	cout << endl;
	cout << "Sleeping Cephalopoda";
	cout << endl;
	
	AutoVectorObjects01();
	
	return 0;

}

void AutoVectorObjects01()

{
	// Initialize vector.
	vector <CHEM1125Lab00> vecCHEM1125Lab00(4);
	
	unsigned int i = 0;
	for (i = 0; i < vecCHEM1125Lab00.size(); i++)
	{
		
		cout << endl;
		cout << i << "/"<< vecCHEM1125Lab00.size();
		
		vecCHEM1125Lab00.at(i).getDetails();
		// vecCHEM1125Lab00[i].getDetails();
		
	}
	return;
}