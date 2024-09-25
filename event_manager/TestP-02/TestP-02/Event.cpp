#include<iostream>
#include "Event.h"
#include <cstring>

using namespace std;

void Event::setEventDetailes(int eID, const char* eType, const char* theamC, const char* eLocation)
{
	eventId = eID;
	strcpy_s(eventType, eType);
	strcpy_s(themeColor, theamC);
	strcpy_s(location, eLocation);
}

void Event::displayEventDetailes(){
	cout << "EventType : " << eventType << endl;
	cout << "ThemeColor : " << themeColor << endl;
	cout << "Location : " << location << endl;
	cout << endl;
}

void Event::setEventLocation(){
	cout << "Input new location of event " << eventId << " : ";
	cin >> location;
}



