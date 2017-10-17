#include <iostream>

double abs(double);

using std::cin;
using std::cout;
using std::endl;

int main() {
    int num = 1;
    double sum = 0, accuracy;

    while(true) {
        cout << "Enter accuracy: ";
        cin >> accuracy;
        if(accuracy > 0 && accuracy < 1) break;
        cout << "You entered wrong number. It must be between 0 and 1" << endl;
    }

    while (true) {
        double result = 1.0 / (num * (num + 1));
        if(abs(result) < accuracy) break;
        sum += 1.0 / (num * (num + 1));
        num++;
    }

    cout << "Sum is: " << sum << endl;

    system("pause");
    return 0;
}

double abs(double num) {
    return num < 0 ? -num : num;
}