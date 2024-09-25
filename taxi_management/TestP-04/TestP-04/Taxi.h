#pragma once
#include <iostream>
#include <cstring>

class Taxi {
private:
    int taxiID;
    char driver[20];
    int ratePerKM;
    int distanceTravelled;

public:
    void setTaxiDetails(int tId, const char* dri, int rate, int dist);
    void displayTaxiDetails();
    int calculateBill();
};
