#include <iostream>
#include <cmath>
#include <iomanip>

double EXP(float, float);
int factorial(int);
double absolute(double);
void printTable(double, double, double);
void printRow(int, int, double, double, double, double);
void printHead(int, int);

using std::cin;
using std::cout;
using std::endl;

int main() {
    double startVal, endVal, eps;
    cout << "Enter start val, end val and accuracy (e.g. -3.0, 3.0, 0.001)" << endl;
    cin >> startVal >> endVal >> eps;
    printTable(startVal, endVal, eps);
    system("pause");
    return 0;
}

double EXP(float x, float eps) {
    double result = 1 + x;
    int i = 2;
    while(true) {
        double num = pow(x, i) / factorial(i);
        if(absolute(num) < eps) break;
        result += num;
        i++;
    }
    return result;
}

int factorial(int num) {
    int result = 1;
    for(int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}

double absolute(double num) {
    return num < 0 ? -num : num;
}

void printTable(double startVal, double endVal, double eps) {
    int colWidth1 = 10;
    int colWidth2 = 20;

    printHead(colWidth1, colWidth2);
    while(startVal <= endVal) {
        printRow(colWidth1, colWidth2, startVal, EXP(startVal, eps), exp(startVal), EXP(startVal, eps) - exp(startVal));
        startVal += 0.5;
    }
}

void printRow(int width1, int width2, double x, double customExp, double cExp, double variation) {
    cout << std::left << std::setw(width1) << std::setfill(' ') << x;
    cout << std::left << std::setw(width2) << std::setfill(' ') << customExp;
    cout << std::left << std::setw(width2) << std::setfill(' ') << cExp;
    cout << std::left << std::setw(width2) << std::setfill(' ') << variation;
    cout << endl;
}

void printHead(int width1, int width2) {
    cout << std::left << std::setw(width1) << std::setfill(' ') << "X";
    cout << std::left << std::setw(width2) << std::setfill(' ') << "EXP()";
    cout << std::left << std::setw(width2) << std::setfill(' ') << "exp()";
    cout << std::left << std::setw(width2) << std::setfill(' ') << "Variation";
    cout << endl;
}