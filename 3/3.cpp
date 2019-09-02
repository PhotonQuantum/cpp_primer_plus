#include <iostream>
using namespace std;

int main(){
    int degree;
    int minute;
    int second;
    cout << "degrees:";
    cin >> degree;
    cout << "minute:";
    cin >> minute;
    cout << "second:";
    cin >> second;

    cout << degree << " degrees, " << minute << " minutes, " << second << " seconds = " << degree + minute / 60.0 + second / 3600.0 << " degrees." << endl;

    return 0;
}
