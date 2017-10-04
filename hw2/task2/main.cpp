#include <iostream>

void operate_on_number(int);

using namespace std;
int main() {
    int num1, num2, num3;
    cout << "Enter 3 numbers: ";
    cin >> num1 >> num2 >> num3;
    operate_on_number(num1);
    operate_on_number(num2);
    operate_on_number(num3);
    system("pause");
    return 0;
}

void operate_on_number(int number) {
    if(number < 0) {
        cout << number * number << endl;
    } else if (number > 0) {
        cout << number * 2 << endl;
    } else {
        cout << number << endl;
    }
}