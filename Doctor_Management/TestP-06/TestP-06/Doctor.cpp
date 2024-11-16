#include "Doctor.h"
#include<iostream>
#include<cstring>

using namespace std;

void Doctor::setDoctorDetailes(int dID, const char* dName, const char* spec)
{
	doctorID = dID;
	strcpy_s(doctorName, dName);
	strcpy_s(specialization, spec);
}

void Doctor::displayDoctorDetailes()
{
	cout << "DocotrID = " << doctorID << endl;
	cout << "DoctorName = " << doctorName << endl;
	cout << "Specialization = " << specialization << endl;
	cout << "Hospital = " << hospital << endl;
	cout << endl;
}

void Doctor::setHospital()
{
	cout << "Enter new hospital of docotor " << doctorID << " : ";
	cin >> hospital;
}


