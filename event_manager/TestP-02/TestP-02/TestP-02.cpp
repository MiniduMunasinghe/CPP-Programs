#include<iostream>
#include"Event.h"
#include<cstring>

using namespace std;

int main()
{
	Event e1, e2, e3;

	e1.setEventDetailes(1, "Party", "Red", "Nugegoda");
	e2.setEventDetailes(2, "Wedding", "Purple", "Maharagama");
	e3.setEventDetailes(1, "Party", "Red", "Nugegoda");

	e1.setEventLocation();
	e2.setEventLocation();
	e3.setEventLocation();
	cout << endl;

	e1.displayEventDetailes();
	e2.displayEventDetailes();
	e3.displayEventDetailes();
}

