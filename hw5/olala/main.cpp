#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

string addRightDigit(string, string);
string addLeftDigit(string, string);

int main() {
    string k, d1, d2, result;
    cout << "Enter k, d1, d2";
    cin >> k >> d1 >> d2;
    k = addRightDigit(d1, k);
    cout << k << endl;
    k = addLeftDigit(d2, k);
    cout << k << endl;
    system("pause");
    return 0;
}

string addRightDigit(string d, string k) {
    return k + d;
}

string addLeftDigit(string d, string k) {
    return d + k;
}