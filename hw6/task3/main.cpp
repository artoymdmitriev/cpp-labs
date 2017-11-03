#include <iostream>

void f1(int&);
void f2(int&);
void f3(int&);

using std::cin;
using std::cout;
using std::endl;

int main() {
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;
    f3(num);
    cout << num << endl;
    system("pause");
    return 0;
}

void f1(int &num) {
    num = num < 0 ? -num : num;
}

void f2(int &num) {
    num = num % 5;
}

void f3(int &num) {
    if(num < 10) num = 10;
    else if(num < 100 && num > 10) num = 100;
}

