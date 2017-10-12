#include <iostream>

double max(double, double);
double min(double, double);

using std::cin;
using std::cout;
using std::endl;

int main() {
    while(true) {
        double a, b, c;
        cout << "Enter 3 numbers: ";
        cin >> a >> b >> c;

        cout << "Max value is: " << max(max(a, b), c) << endl;
        cout << "Min value is: " << min(min(a, b), c) << endl;
    }
}

double max(double num1, double num2) {
    return num1 > num2 ? num1 : num2;
}

double min(double num1, double num2) {
    return num1 < num2 ? num1 : num2;
}