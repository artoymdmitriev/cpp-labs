#include <iostream>

double min(double, double);
double max(double, double);

using std::cin;
using std::cout;
using std::endl;
int main() {
    double a, b, c;
    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;
    cout << "Max number is: " << max(min(a, b), c) << endl;
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