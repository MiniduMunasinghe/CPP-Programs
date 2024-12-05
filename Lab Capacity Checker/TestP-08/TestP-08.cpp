#include<iostream>
#include"Lab.h"

using namespace std;

int main()
{
	Lab l1, l2, l3;
	int cap2;

	l1.setLabDetailes(401, 60);
	l2.setLabDetailes(402, 40);
	l3.setLabDetailes(403, 30);

	cout << "Input capacity : ";
	cin >> cap2;

	if (cap2 <= l1.getCapacity()) {
		cout << "LAB 401";
	}
	else if (cap2 <= l2.getCapacity()) {
		cout << "LAB 402";
	}
	else if (cap2 <= l3.getCapacity()) {
		cout << "LAB 403";
	}

}