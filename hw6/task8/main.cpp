#include <iostream>

int gcd(int, int);
int lcm(int, int);

using std::cin;
using std::cout;
using std::endl;

int main() {
    int a, b;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    cout << "Greatest common divisor: " << gcd(a, b) << endl;
    cout << "Least common multiple: " << lcm(a, b) << endl;
    system("pause");
    return 0;
}

//Greatest common divisor
int gcd(int num1, int num2) {
    int startVal = num1 < num2 ? num1 : num2;
    for(int i = startVal; i > 0; i--) {
        if(num1 % i == 0 && num2 % i == 0) return i;
    }
    return -1;
}

//Least common multiple
int lcm(int num1, int num2) {
    int startVal = num1 > num2 ? num1 : num2;
    for(int i = startVal;;i++) {
        if(i % num1 == 0 && i % num2 == 0) return i;
    }
}