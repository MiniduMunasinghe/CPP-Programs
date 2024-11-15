#include <iostream>
#include "Salesman.h"
using namespace std;

int main() {
    Salesman s1, s2, s3;

    s1.setSalesmanDetails(1, "John", 30000, "772358375");
    s2.setSalesmanDetails(2, "Ann", 40000, "773029452");
    s3.setSalesmanDetails(3, "Leema", 35000, "7782945226");

    s1.setSalesmanContactNo();
    s2.setSalesmanContactNo();
    s3.setSalesmanContactNo();
    cout << endl;

    s1.displaySalesmanDetails();
    s2.displaySalesmanDetails();
    s3.displaySalesmanDetails();

    return 0;
}
