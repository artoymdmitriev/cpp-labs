#include <iostream>
#include <cmath>

double calc_side(int, int, int, int);
double calc_perimeter(double, double, double);
double calc_area(double, double, double, double);

using std::cin;
using std::cout;
using std::endl;

int main() {
    int x1, y1, x2, y2, x3, y3;
    cout << "Enter x1, y1" << endl;
    cin >> x1 >> y1;
    cout << "Enter x2, y2" << endl;
    cin >> x2 >> y2;
    cout << "Enter x3, y3" << endl;
    cin >> x3 >> y3;

    double side1 = calc_side(x1, y1, x2, y2);
    double side2 = calc_side(x2, y2, x3, y3);
    double side3 = calc_side(x1, y1, x3, y3);

    double perimeter = calc_perimeter(side1, side2, side3);
    cout << "Perimeter is: " << perimeter << endl;
    double area = calc_area(perimeter / 2, side1, side2, side3);
    cout << "Area is: " << area << endl;

    system("pause");
    return 0;
}

double calc_side(int x1, int y1, int x2, int y2) {
    return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}

double calc_perimeter(double side1, double side2, double side3) {
    return side1 + side2 + side3;
}

double calc_area(double half_perimeter, double side1, double side2, double side3) {
    return sqrt(half_perimeter *
                        (half_perimeter - side1) *
                        (half_perimeter - side2) *
                        (half_perimeter - side3));
}