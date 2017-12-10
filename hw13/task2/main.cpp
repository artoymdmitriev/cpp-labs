// Найти сумму корней a

#include <iostream>
#include <cmath>

double sqrtRecursion(int, int);

using std::cin;
using std::cout;
using std::endl;

int main() {
    int number;
    int power;
    cout << "Enter the number: ";
    cin >> number;
    cout << "Enter the power: ";
    cin >> power;

    cout << "Result is: " << sqrtRecursion(number, power) << endl;

    system("pause");
    return 0;
}

double sqrtRecursion(int a, int n) {
    if(n > 1) {
        return sqrt(a + sqrtRecursion(a, --n));
    } else {
        return sqrt(a);
    }
}