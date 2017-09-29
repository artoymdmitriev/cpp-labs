#include <iostream>

int main() {
    int number;
    std::cout << "Enter the number: ";
    std::cin >> number;

    int hundreds = number / 100;
    int tens = (number % 100) / 10;
    int units = (number % 10);

    std::cout << units << "*10^0 + ";
    std::cout << tens << "*10^1 + ";
    std::cout << hundreds << "*10^2" << std::endl;
    std::system("pause");
    return 0;
}