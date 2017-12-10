//Возвести рекурсивно 2 в степень n

#include <iostream>

double powRecursion(int);

using std::cin;
using std::cout;
using std::endl;

int main() {
    int power;
    cout << "Enter the power: ";
    cin >> power;
    cout << "2^" << power << " = " << powRecursion(power) << endl;

    system("pause");
    return 0;
}

double powRecursion(int power) {
    if(power > 0) {
        return 2 * powRecursion(--power);
    } else if(power < 0) {
        return 0.5 * powRecursion(++power);
    } else {
        return 1;
    }
}