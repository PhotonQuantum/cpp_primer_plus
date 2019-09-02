#include <iostream>
using namespace std;

int main(){
    int iKM;
    int iLiter;
    cout << "Mileage (km): ";
    cin >> iKM;
    cout << "Fuel Consumption (L): ";
    cin >> iLiter;
    cout << "Fuel Consumption (km/L): " << double(iLiter) / iKM * 100 << endl;

    return 0;
}
