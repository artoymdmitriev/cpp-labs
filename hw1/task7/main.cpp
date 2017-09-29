//
// Created by artyom on 27.9.17.
//

#include <iostream>
#include <cmath>

double calculate_area(double, double);

int main()
{
    double ir, er;
    std::cout << "Enter the internal radius: ";
    std::cin >> ir;
    std::cout << "Enter the external radius: ";
    std::cin >> er;
    std::cout << "Area is: " << calculate_area(ir, er) << std::endl;
    return 0;
}

double calculate_area(double ir, double er)
{
    return M_PI * (pow(er, 2) - pow(ir, 2));
}