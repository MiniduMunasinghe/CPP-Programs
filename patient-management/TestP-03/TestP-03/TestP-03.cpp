#include<iostream>
#include<cstring>
#include"Patient.h"

using namespace std;

int main()
{
	Patient p1, p2;

	p1.setPatientDetailes(1001, "Nimal");
	p2.setPatientDetailes(1002, "Sunil");

	p1.setdoctorCharge(1500);
	p1.sethospitalCharge(500);

	p2.setdoctorCharge(1700);
	p2.sethospitalCharge(500);

	p1.displayPatientDetailes();
	cout << "Total Payment : " << p1.calculateTotalPayment() << endl;
	cout << endl;
	
	p2.displayPatientDetailes();
	cout << "Total Payment : " << p2.calculateTotalPayment() << endl;
	cout << endl;
}