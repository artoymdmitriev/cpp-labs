#include <iostream>

double min(double, double);
double max(double, double);

using std::cin;
using std::cout;
using std::endl;
int main() {
    double a, b, c, num1, num2, num3;
    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;
    cout << "Sorting..." << endl;

    num1 = min(min(a, b), c);
    num3 = max(max(a, b), c);

    if(num1 != a && num3 != a) {
        num2 = a;
    } else if(num1 != b && num3 != b) {
        num2 = b;
    } else if(num1 != c && num3 != c) {
        num2 = c;
    }

    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    system("pause");
    return 0;
}

double min(double num1, double num2) {
    if(num1 < num2) {
        return num1;
    } else {
        return num2;
    }
}

double max(double num1, double num2) {
    if(num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}