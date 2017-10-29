#include <iostream>
#include <sstream>

int addRightDigit(int, int);
int addLeftDigit(int, int);

using std::cin;
using std::cout;
using std::endl;
using std::stringstream;

int main() {
    int k, d1, d2;
    cout << "Enter k, d1, d2" << endl;
    cin >> k >> d1 >> d2;
    k = addRightDigit(d1, k);
    cout << k << endl;
    k = addLeftDigit(d2, k);
    cout << k << endl;
    system("pause");
    return 0;
}

int addRightDigit(int d, int k) {
    stringstream s;
    s << k << d;
    return stoi(s.str());
}

int addLeftDigit(int d, int k) {
    stringstream s;
    s << d << k;
    return stoi(s.str());
}