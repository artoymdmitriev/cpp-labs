#include <iostream>

void print_triangle_type(int, int, int);

using namespace std;
int main() {
    int a, b, c;
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

void print_triangle_type(int a, int b, int c) {
    if(a * a == b * b + c * c || b * b == a * a + c * c ||
            c * c == a * a + b * b) {
        cout << "Rectangular triangle" << endl;
    } else if(a * a > b * b + c * c || b * b > a * a + c * c
              || c * c > b * b + a * a) {
        cout << "Obtuse triangle" << endl; // Obtuse - тупоугольный
    } else {
        cout << "Acute triangle" << endl; // Acute - остроугольный
    }
}