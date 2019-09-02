#include <iostream>
using namespace std;

int main(){
    const int kFactor = 12;
    int iHeight;
    cout << "Your height(inch): ___\b\b\b";
    cin >> iHeight;
    cout << "Your height is " << iHeight / kFactor << " feet and " << iHeight % kFactor << " inches." << endl;
    return 0;
}
