#include <iostream>

int get_year();
bool is_leap_year(int);

using std::cin;
using std::cout;
using std::endl;

int main() {
    int year = get_year();
    cout << (is_leap_year(year) ? 366 : 365) << endl;
    system("pause");
    return 0;
}

int get_year() {
    int year;
    while(true) {
        cout << "Enter year: " << endl;
        cin >> year;
        if(year > 0) break;
        cout << "Wrong number, try again!" << endl;
    }
    return year;
}

bool is_leap_year(int year) {
    bool result = false;
    if(year % 4 == 0 && !(year % 100 == 0
                          && year % 400 != 0)) result = true;
    return result;
}