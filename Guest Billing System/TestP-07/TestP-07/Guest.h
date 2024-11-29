#pragma once
class Guest
{
private:
	int guestID;
	char guestName[20];
	int ratePerDay;
	int numberOfDays;

public:
	void setGuestDetailes(int gID, const char* gName, int rPerDay, int nDays);
	void displayGuestDetailes();
	int calculateGuestBill();
};



