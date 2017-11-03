#include <iostream>

bool f1(int);
bool f2(int);
bool f3(int);
bool f4(int);
bool f5(int);
bool f6(int);

using std::cin;
using std::cout;
using std::endl;

int main() {
    int a;
    cout << "Enter the number: " << endl;
    cin >> a;
    if(f1(a)) cout << "The number belongs to 1st multiplicity" << endl;
    if(f2(a)) cout << "The number belongs to 2nd multiplicity" << endl;
    if(f3(a)) cout << "The number belongs to 3rd multiplicity" << endl;
    if(f4(a)) cout << "The number belongs to 4th multiplicity" << endl;
    if(f5(a)) cout << "The number belongs to 5th multiplicity" << endl;
    if(f6(a)) cout << "The number belongs to 6th multiplicity" << endl;
    system("pause");
    return 0;
}

bool f1(int a) {
    return a >= -20 && a <= 20;
}

bool f2(int a) {
    return a < -20 || a > 10;
}

bool f3(int a) {
    return a % 5 == 0;
}

bool f4(int a) {
    return a % 5 == 0 || a % 12 == 0;
}

bool f5(int a) {
    return a % 5 == 0 && a % 12 == 0;
}

bool f6(int a) {
    return a % 5 == 0 && a % 12 != 0;
}