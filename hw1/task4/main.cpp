//
// Created by artyom on 27.9.17.
//

#include <iostream>
#include <cmath>

double area(double, double);
double perimeter(double, double);

int main() {
    double a, b;
    std::cout << "Enter the first catheter: ";
    std::cin >> a;
    std::cout << "Enter the second catheter: ";
    std::cin >> b;
    std::cout << "Area is: " << area(a, b) << std::endl;
    std::cout << "Perimeter is: " << perimeter(a, b) << std::endl;
    return 0;
}

double area(double a, double b)
{
    return 0.5 * a * b;
}

double perimeter(double a, double b)
{
    double c = sqrt(a * a + b * b);
    return a + b + c;
}
