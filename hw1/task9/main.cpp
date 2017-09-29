#include <iostream>
#include <cmath>

double side_length(double, double, double, double);

int main() {
    double x1, y1, x2, y2, x3, y3, a, b, c, p, hp, area;
    std::cout << "Enter x1, y1: ";
    std::cin >> x1 >> y1;
    std::cout << "Enter x2, y2: ";
    std::cin >> x2 >> y2;
    std::cout << "Enter x3, y3: ";
    std::cin >> x3 >> y3;

    a = side_length(x1, y1, x2, y2);
    b = side_length(x1, y1, x3, y3);
    c = side_length(x2, y2, x3, y3);

    p = a + b + c;
    hp = p / 2;
    area = sqrt(hp * (hp - a) * (hp - b) * (hp - c));

    std::cout << "Triangle area is: " << p << std::endl;
    std::cout << "Triangle perimeter is: " << area << std::endl;
    std::system("pause");
    return 0;
}

double side_length(double x1, double y1, double x2, double y2) {
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}