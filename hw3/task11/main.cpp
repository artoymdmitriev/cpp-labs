#include <iostream>

double abs(double);

using std::cin;
using std::cout;
using std::endl;

int main() {
    int num = 2, prev_num = 1;
    double sum = 0, accuracy;

    while(true) {
        cout << "Enter accuracy: ";
        cin >> accuracy;
        if(accuracy > 0 && accuracy < 1) break;
        cout << "You entered wrong number. It must be between 0 and 1" << endl;
    }

    while (true) {
        double result = 1.0 / (prev_num * num);
        if(abs(result) < accuracy) break;
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