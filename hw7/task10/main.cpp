#include <iostream>

void swap(double*, double*);

using std::cin;
using std::cout;
using std::endl;

int main() {
    double num1, num2, num3, num4;
    cin >> num1 >> num2 >> num3 >> num4;
    swap(&num1, &num2);
    swap(&num3, &num4);
    swap(&num2, &num3);
    cout << num1 << " " << num2 << " "
         << num3 << " " << num4 << endl;
    system("pause");
    return 0;
}

void swap(double *x, double *y) {
    double temp = *y;
    *y = *x;
    *x = temp;
}