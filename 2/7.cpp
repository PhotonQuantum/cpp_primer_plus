#include <iostream>
void print_time(int hr, int min);

int main(){
    using namespace std;
    int hr, min;
    cout << "Enter the number of hours: ";
    cin >> hr;
    cout << "Enter the number of minutes: ";
    cin >> min;
    print_time(hr, min);
    return 0;
}

void print_time(int hr, int min){
    using namespace std;
    cout << "Time: " << hr << ":" << min << endl;
}
