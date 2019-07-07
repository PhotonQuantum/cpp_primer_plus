#include <iostream>
double ly2au(double ly);

int main(){
    using namespace std;
    cout << "Enter the number of light years: ";
    double ly;
    cin >> ly;
    cout << ly << " light years = " << ly2au(ly) << " astronomical units." << endl;
}

double ly2au(double ly){
    return ly * 63240;
}
