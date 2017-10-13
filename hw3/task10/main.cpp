#include <iostream>

double abs(double);

using std::cin;
using std::cout;
using std::endl;

int main() {
    int k = 1;
    double result, sum = 0, accuracy = 0.001;

    do {
        result = 1.0 / (k * k);
        sum += result;
        k++;
    } while (abs(result) > accuracy);

    cout << "Sum is: " << sum << endl << k;
    system("pause");
    return 0;
}

double abs(double num) {
    return num < 0 ? -num : num;
}