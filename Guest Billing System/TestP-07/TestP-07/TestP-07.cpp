#include<iostream>
#include "Guest.h"
#include <cstring>

using namespace std;

int main()
{
	Guest g1, g2, g3;

	g1.setGuestDetailes(1212, "Jared", 4500, 4);
	g2.setGuestDetailes(1122, "Ben", 3000, 3);
	g3.setGuestDetailes(1234, "Ruby", 5750, 2);

	g1.displayGuestDetailes();
	cout << "Bill Amount : " << g1.calculateGuestBill() << endl;
	cout << endl;

	g2.displayGuestDetailes();
	cout << "Bill Amount : " << g2.calculateGuestBill() << endl;
	cout << endl;

	g2.displayGuestDetailes();
	cout << "Bill Amount : " << g3.calculateGuestBill() << endl;
	cout << endl;
}