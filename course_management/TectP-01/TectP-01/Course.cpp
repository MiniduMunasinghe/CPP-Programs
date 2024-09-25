#include<iostream>
#include <cstring>
#include "Course.h"

using namespace std;

void Course::setCourseDetailes(int cID, const char* cName, int cCreditPoint)
{
	courseID = cID;
	strcpy_s(courseName, cName);
	creditPoints = cCreditPoint;
}

void Course::displayCourseDetailes()
{
	cout << "CourseID : " << courseID << endl;
	cout << "courseName : " << courseName << endl;
	cout << "creditPoints : " << creditPoints << endl;
	cout << endl;
}

void Course::setCreditPoints(){
	cout << "Input new " << courseName << "credit Points : ";
	cin >> creditPoints;
} 

