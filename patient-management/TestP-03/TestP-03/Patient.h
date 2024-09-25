#pragma once
class Patient
{
private:
	int appointmentID;
	char patientName[20];
	int doctorCharge;
	int hospitalCharge;

public:
	void setPatientDetailes(int aID, const char* pName);
	void displayPatientDetailes();
	void setdoctorCharge(int dCharge);
	void sethospitalCharge(int hCharge);
	int calculateTotalPayment();
};



