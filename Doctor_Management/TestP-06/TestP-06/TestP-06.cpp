#include<iostream>
#include<cstring>
#include"Doctor.h"

using namespace std;

int main()
{
	Doctor d1, d2, d3;

	d1.setDoctorDetailes(1, "Dr. Sunil", "Neurologist");
	d2.setDoctorDetailes(2, "Dr. Yasantha", "Oncologist");
	d3.setDoctorDetailes(3, "Dr. Godvin", "Cardiologist");

	d1.setHospital();
	d2.setHospital();
	d3.setHospital();
	cout << endl;

	d1.displayDoctorDetailes();
	d2.displayDoctorDetailes();
	d3.displayDoctorDetailes();
}