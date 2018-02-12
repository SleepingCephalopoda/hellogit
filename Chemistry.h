#ifndef CHEMISTRY_H
#define CHEMISTRY_H

#include <string>

using namespace std;

// Class Definition

// Introduction To Experimental Chemistry
class CHEM1125Lab00

{

// Public interface.
public:

	// Creating an object that needs a default constructor.
	CHEM1125Lab00();

	// Constructor that initializes experiment information.
	CHEM1125Lab00(string, int, int);

	// Compound
	void setCompoundName(string);
	string getCompoundName();

	// Initial Weight
	void setInitialWeight(int);
	int getInitialWeight();

	// Set Melting Point
	void setMeltingPoint(int);
	int getMeltingPoint();

	// Show compound details.
	void getDetails();

// Private interface.
private:

	string CompoundName;
	int ClassInitialWeight;
	int ClassMeltingPoint;


};

#endif
