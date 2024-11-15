#include "Salesman.h"
#include <iostream>
#include <cstring>
using namespace std;

void Salesman::setSalesmanDetails(int sId, const char* sName, int sal, const string& cNo) {
    salesmanId = sId;
    strncpy(salesmanName, sName, sizeof(salesmanName) - 1);
    salesmanName[sizeof(salesmanName) - 1] = '\0';  // Ensure null termination
    salary = sal;
    contactNo = cNo;
}

void Salesman::displaySalesmanDetails() {
    cout << "SalesmanId: " << salesmanId << endl;
    cout << "SalesmanName: " << salesmanName << endl;
    cout << "Salary: " << salary << endl;
    cout << "ContactNo: " << contactNo << endl;
    cout << endl;
}

void Salesman::setSalesmanContactNo() {
    cout << "Input the contact number of salesman " << salesmanId << ": ";
    cin >> contactNo;
}
