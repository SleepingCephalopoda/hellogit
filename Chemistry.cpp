#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
#include "Chemistry.h"
using namespace std;

// CHEM1125Lab Class Implementation.

// Constructor initializes compound information.
CHEM1125Lab00::CHEM1125Lab00(string Compound, int InitialWeight, int MeltingPoint)
	: CompoundName(Compound), ClassInitialWeight(InitialWeight), ClassMeltingPoint(MeltingPoint)
{

}

// Constructor initializes compound information.
CHEM1125Lab00::CHEM1125Lab00()

{
	CompoundName = "Hydrogen";
	ClassInitialWeight = 1;
	ClassMeltingPoint = 100;
}

void CHEM1125Lab00::setCompoundName (string Compound)
{
	CompoundName = Compound;
}

string CHEM1125Lab00::getCompoundName()
{
	return CompoundName;
}

void CHEM1125Lab00::setInitialWeight(int InitialWeight)
{
	ClassInitialWeight = InitialWeight;
}

int CHEM1125Lab00::getInitialWeight()
{
	return ClassInitialWeight;
}


void CHEM1125Lab00::setMeltingPoint(int MeltingPoint)
{
	ClassMeltingPoint = MeltingPoint;
}

int CHEM1125Lab00::getMeltingPoint()
{
	return ClassMeltingPoint;
}

// Print compound information.
void CHEM1125Lab00::getDetails()

{

	cout << endl;
	cout << "Compound Details";
	cout << endl;
	cout << "Compound - " << getCompoundName();
	cout << endl;
	cout << "Initial Weight (g) - " << getInitialWeight();
	cout << endl;
	// cout << "Final Weight / g - " << getFinalWeight() << endl;
	// cout << "Weight Used / g - " << getWeightUsed() << endl;
	cout << "Melting Point (C) - " << getMeltingPoint();
	cout << endl;

}
