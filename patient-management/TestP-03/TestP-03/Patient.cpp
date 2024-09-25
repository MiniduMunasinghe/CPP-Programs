#include<iostream>
#include"Patient.h"
#include<cstring>


using namespace std;

void Patient::setPatientDetailes(int aID, const char* pName)
{
	appointmentID = aID;
	strcpy_s(patientName, pName);
}

void Patient::setdoctorCharge(int dCharge)
{
	doctorCharge = dCharge;
}

void Patient::sethospitalCharge(int hCharge)
{
	hospitalCharge = hCharge;
}

int Patient::calculateTotalPayment()
{
	return doctorCharge + hospitalCharge;
}

void Patient::displayPatientDetailes()
{
	cout << "Appointment ID : " << appointmentID << endl;
	cout << "Patient name : " << patientName << endl;
}

