#include <iostream>

int calcCentury(int);

using std::cin;
using std::cout;
using std::endl;

int main() {
    int year;
    cout << "Enter the year: " << endl;
    cin >> year;
    cout << "It's " << calcCentury(year) << " century" << endl;
    system("pause");
    return 0;
}

int calcCentury(int year) {
    return year / 100 + 1;
}