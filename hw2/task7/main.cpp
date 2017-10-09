#include <iostream>

void print_triangle_type(double, double, double);

using std::cin;
using std::cout;
using std::endl;
int main() {
    double a, b, c;
    cout << "Enter the length of 3 sides: ";
    cin >> a >> b >> c;

    if(a + b > c && a + c > b && b + c > a) {
        cout << "Triangle exists!" << endl;
        print_triangle_type(a, b, c);
    } else {
        cout << "Triangle doesn't exist!" << endl;
    }

    system("pause");
    return 0;
}

void print_triangle_type(double a, double b, double c) {
    if(a == b && a == c && b == c) {
        cout << "Equilateral triangle" << endl; // Equilateral - равносторонний
    } else if(a == b || a == c || b == c) {
        cout << "Isosceles triangle" << endl; // Isosceles - равнобедренный
    } else {
        cout << "Versatile triangle" << endl; // Versatile - разносторонний
    }
}