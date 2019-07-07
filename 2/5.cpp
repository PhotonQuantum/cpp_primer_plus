#include <iostream>
double c2f(double ctemp);

int main(){
    using namespace std;
    cout << "Please enter a Celsius value: ";
    double ctemp;
    cin >> ctemp;
    cout << ctemp << " degrees Celsius is " << c2f(ctemp) << " degrees Fahrehheit.";
    return 0;
}

double c2f(double ctemp){
    return ctemp * 1.8 + 32;
}
