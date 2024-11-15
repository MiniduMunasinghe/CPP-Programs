#pragma once
#include <string>
using namespace std;

class Salesman {
private:
    int salesmanId;
    char salesmanName[20];
    int salary;
    string contactNo;  // Changed to string for better handling of long numbers

public:
    void setSalesmanDetails(int sId, const char* sName, int sal, const string& cNo);
    void displaySalesmanDetails();
    void setSalesmanContactNo();
};
