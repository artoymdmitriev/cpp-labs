#include <iostream>

void incTime(int&, int&, int&, int&);

using std::cin;
using std::cout;
using std::endl;

int main() {
    int h, m, s, t;
    while(true) {
        cout << "Enter hours, minutes, seconds and T: " << endl;
        cin >> h >> m >> s >> t;
        if(h < 0 || m < 0 || s < 0 || t < 0) {
            cout << "All numbers must be positive! Try again." << endl;
        } else {
            break;
        }
    }
    incTime(h, m, s, t);
    cout << h << ":" << m << ":" << s << endl;
    system("pause");
    return 0;
}

void incTime(int &h, int &m, int &s, int &t) {
    s += t;
    if(s > 59) {
        m += s / 60;
        s = s % 60;
    }
    if(m > 59) {
        h += m / 60;
        m = m % 60;
    }
}