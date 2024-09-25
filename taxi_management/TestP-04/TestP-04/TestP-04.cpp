#include <iostream>
#include "Taxi.h"
#include <cstring>

using namespace std;

void Taxi::setTaxiDetails(int tId, const char* dri, int rate, int dist) {
    taxiID = tId;
    strcpy_s(driver, dri);
    ratePerKM = rate > 0 ? rate : 0; // Ensure non-negative rate
    distanceTravelled = dist > 0 ? dist : 0; // Ensure non-negative distance
}

int Taxi::calculateBill() {
    return ratePerKM * distanceTravelled;
}

void Taxi::displayTaxiDetails() {
    cout << "Taxi ID: " << taxiID << endl;
    cout << "Driver Name: " << driver << endl;
}
