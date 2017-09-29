#include <iostream>

double sum(double, double);
double difference(double, double);
double multiplication(double, double);
double division(double, double);

int main() {
    double a, b;
    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number: ";
    std::cin >> b;
    std::cout << "Sum is: " << sum(a, b) << std::endl;
    std::cout << "Difference is: " << difference(a, b) << std::endl;
    std::cout << "Multiplication is: " << multiplication(a, b) << std::endl;
    std::cout << "Division is: " << division(a, b) << std::endl;
    std::system("pause");
    return 0;
}

double sum(double a, double b) {
    return a + b;
}

double difference(double a, double b) {
    return a - b;
}

double multiplication(double a, double b) {
    return a * b;
}

double division(double a, double b) {
    return a / b;
}