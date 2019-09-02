#include <iostream>
#include <cmath>
using namespace std;

int main(){
    const int kInch = 12;
    const float kMeter = 0.0254;
    const float kKilogram = 2.2;
    int iFootInput;
    int iInchInput;
    float fPoundInput;

    cout << "[Height]\nFeet: ";
    cin >> iFootInput;
    cout << "Inch: ";
    cin >> iInchInput;
    cout << "[Weight]\nPounds: ";
    cin >> fPoundInput;

    cout << "Your Height: " << iFootInput * kInch + iInchInput << " inches." << endl;

    double dMeter;
    double dKilogram;
    dMeter = (iFootInput * kInch + iInchInput) * kMeter;
    dKilogram = fPoundInput / kKilogram;

    double dBMI;
    dBMI = dKilogram / pow(dMeter, 2);

    cout << "BMI: " << dBMI << endl;

    return 0;
}
