#include <iostream>

int operate_on_number(int);

using namespace std;
int main() {
    int num1, num2, num3;
    cout << "Enter 3 numbers: ";
    cin >> num1 >> num2 >> num3;
    cout << operate_on_number(num1) << endl;
    cout << operate_on_number(num2) << endl;
    cout << operate_on_number(num3) << endl;
    system("pause");
    return 0;
}

int operate_on_number(int number) {
    if(number < 0) {
        return number * number;
    } else if (number > 0) {
        return number * 2;
    } else {
        return number;
    }
}