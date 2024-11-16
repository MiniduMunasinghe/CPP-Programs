#pragma once
class Doctor
{
private:
	int doctorID;
	char doctorName[20];
	char specialization[20];
	char hospital[20];

public:
	void setDoctorDetailes(int dID, const char* dName, const char* spec);
	void displayDoctorDetailes();
	void setHospital();
};

