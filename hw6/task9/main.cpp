#include <iostream>

int calcCentury(int);
int getYear();

using std::cin;
using std::cout;
using std::endl;

int main() {
    int year = getYear();
    cout << "It's the " << calcCentury(year) << " century" << endl;
    system("pause");
    return 0;
}

int calcCentury(int year) {
    return year / 100 + 1;
}

int getYear() {
    int year;
    while(true) {
        cout << "Enter the year: " << endl;
        cin >> year;
        if(year < 0) {
            cout << "Year must be a positive number! Try again." << endl;
        } else {
            break;
        }
    }
    return year;
}