#include <iostream>

int greatestCommonDivisor(int, int);
int leastCommonMultiple(int, int);
int getNumber();

using std::cin;
using std::cout;
using std::endl;

int main() {
    int a = getNumber(), b = getNumber();
    cout << "Greatest common divisor: " << greatestCommonDivisor(a, b) << endl;
    cout << "Least common multiple: " << leastCommonMultiple(a, b) << endl;
    system("pause");
    return 0;
}

int greatestCommonDivisor(int num1, int num2) {
    int startVal = num1 < num2 ? num1 : num2;
    for(int i = startVal; i > 0; i--) {
        if(num1 % i == 0 && num2 % i == 0) return i;
    }
    return -1;
}

int leastCommonMultiple(int num1, int num2) {
    int startVal = num1 > num2 ? num1 : num2;
    for(int i = startVal;;i++) {
        if(i % num1 == 0 && i % num2 == 0) return i;
    }
}

int getNumber() {
    int num;
    while(true) {
        cout << "Enter the number: " << endl;
        cin >> num;
        if(num <= 0) {
            cout << "The number must be more than 0! Try again." << endl;
        } else {
            break;
        }
    }
    return num;
}