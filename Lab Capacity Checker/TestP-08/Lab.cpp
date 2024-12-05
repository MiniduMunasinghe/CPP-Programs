#include "Lab.h"
#include <iostream>

using namespace std;

void Lab::setLabDetailes(int lID, int cap)
{
	labID = lID;
	capacity = cap;
}

int Lab::getCapacity()
{
	return capacity;
}
