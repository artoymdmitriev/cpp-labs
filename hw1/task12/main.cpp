#include <iostream>

int main() {
    int a;
    std::cout << "Enter the number: ";
    std::cin >> a;

    int hundreds = a / 100;
    int tens = (a % 100) / 10;
    int units = (a % 10);

    std::cout << units << "*10^0 + ";
    std::cout << tens << "*10^1 + ";
    std::cout << hundreds << "*10^2";
    return 0;
}