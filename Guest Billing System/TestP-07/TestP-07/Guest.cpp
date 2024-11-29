#include "Guest.h"
#include <iostream>
#include <cstring>

using namespace std;

void Guest::setGuestDetailes(int gID, const char* gName, int rPerDay, int nDays)
{
	guestID = gID;
	strcpy_s(guestName, gName);
	ratePerDay = rPerDay;
	numberOfDays = nDays;
}

void Guest::displayGuestDetailes() 
{
	cout << "Guest ID = " << guestID << endl;
	cout << "Guest Name = " << guestName << endl;
}

int Guest::calculateGuestBill()
{
	return ratePerDay * numberOfDays;
}