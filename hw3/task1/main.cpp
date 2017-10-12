#include <iostream>

int max(int, int);
int min(int, int);

using std::cin;
using std::cout;
using std::endl;

int main() {
    while(true) {
        int a, b, c;
        cout << "Enter 3 numbers: ";
        cin >> a >> b >> c;

        cout << "Max value is: " << max(max(a, b), c) << endl;
        cout << "Min value is: " << min(min(a, b), c) << endl;
    }
}

int max(int num1, int num2) {
    return num1 > num2 ? num1 : num2;
}

int min(int num1, int num2) {
    return num1 < num2 ? num1 : num2;
}