#include <iostream>
using namespace std;

int main(){
    float fEuroFC;
    cout << "Fuel Consumption (L/100km): ";
    cin >> fEuroFC;
    cout << "Fuel Consumption (mpg): " << 62.14 * 3.875 / fEuroFC << endl;
    return 0;
}
