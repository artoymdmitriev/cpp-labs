#include <iostream>

int main() {
    int number;
    std::cout << "Enter the number: ";
    std::cin >> number;
    if(number % 2 == 0) {
        std::cout << "The number is even.";
    } else {
        std::cout << "The number is odd.";
    }
    std::cout << std::endl;
    std::system("pause");
    return 0;
}