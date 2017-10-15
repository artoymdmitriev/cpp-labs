#include <iostream>

double abs(double);

using std::cin;
using std::cout;
using std::endl;

int main() {
    int num = 2, prev_num = 1;
    double result, sum = 0, accuracy;

    cout << "Enter accuracy: ";
    cin >> accuracy;
    result = accuracy + 1;

    while (abs(result) > accuracy) {
        result = 1.0 / (prev_num * num);
        sum += 1.0 / (prev_num * num);
        num++;
        prev_num++;
    }

    cout << "Sum is: " << sum << endl;
    cout << "Num1: " << prev_num << endl;
    cout << "Num2: " << num << endl;

    system("pause");
    return 0;
}

double abs(double num) {
    return num < 0 ? -num : num;
}