#include <iostream>

double abs(double);

using std::cin;
using std::cout;
using std::endl;

int main() {
    int k = 1;
    double sum = 0, accuracy = 0.001;

    while (true) {
        double result = 1.0 / (k * k);
        if(abs(result) < accuracy) break;
        sum += result;
        k++;
    }

    cout << "Sum is: " << sum << endl;
    system("pause");
    return 0;
}

double abs(double num) {
    return num < 0 ? -num : num;
}