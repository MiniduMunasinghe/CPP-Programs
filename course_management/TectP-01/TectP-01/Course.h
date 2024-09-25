#pragma once
class Course
{
private:
	int courseID;
	char courseName[20];
	int creditPoints;

public:
	void setCourseDetailes(int cID, const char* cName, int cCreditPoint );
	void displayCourseDetailes();
	void setCreditPoints();
};

