#include <iostream>

int max(int, int);
int min(int, int);

using std::cin;
using std::cout;
using std::endl;

int main() {
    int a, b, c;
    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;

    cout << "Max value is: " << max(max(a, b), c) << endl;
    cout << "Min value is: " << min(min(a, b), c) << endl;

    system("pause");
    return 0;
}

int max(int num1, int num2) {
    if(num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int min(int num1, int num2) {
    if(num1 < num2) {
        return num1;
    } else {
        return num2;
    }
}