#include <iostream>
using namespace std;

int main(){
    long long llPopulationWorld;
    long long llPopulationUS;

    cout << "World's population: ";
    cin >> llPopulationWorld;
    cout << "The population of US: ";
    cin >> llPopulationUS;

    cout << "The population of the US is " << double(llPopulationUS) / llPopulationWorld * 100 << "\% of the world population";

    return 0;
}
