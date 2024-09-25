#include<iostream>
#include"Course.h"
#include"cstring"

using namespace std;

int main()
{
	Course c1, c2, c3, c4;

	c1.setCourseDetailes(1050, "OOC", 2);
	c2.setCourseDetailes(1060, "SPM", 3);
	c3.setCourseDetailes(1100, "IWT", 4);
	c4.setCourseDetailes(1090, "ISDM", 4);

	c1.setCreditPoints();
	c2.setCreditPoints();
	c3.setCreditPoints();
	c4.setCreditPoints();
	cout << endl;

	c1.displayCourseDetailes();
	c2.displayCourseDetailes();
	c3.displayCourseDetailes();
	c4.displayCourseDetailes();
}