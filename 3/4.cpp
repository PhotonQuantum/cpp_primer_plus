#include <iostream>
using namespace std;

int main(){
    long lInput;
    cout << "Seconds: ";
    cin >> lInput;

    long days;
    int hrs;
    int mins;
    int secs;
    
    long lTmp;

    days = lInput / 86400;
    hrs = (lInput - days * 86400) / 3600;
    mins = (lInput - days * 86400 - hrs * 3600) / 60;
    secs = lInput % 60;

    cout << days << " days, " << hrs << " hrs, " << mins << " mins, " << secs << " secs." << endl;
    return 0;
}
