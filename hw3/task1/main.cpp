#include <iostream>

double max(double, double);
double min(double, double);
char get_answer();

using std::cin;
using std::cout;
using std::endl;

int main() {
    char answer = 'Y';
    while(true) {
        if(answer == 'Y') {
            double a, b, c;
            cout << "Enter 3 numbers: ";
            cin >> a >> b >> c;

            cout << "Max value is: " << max(max(a, b), c) << endl;
            cout << "Min value is: " << min(min(a, b), c) << endl;
        } else if(answer == 'N') {
            cout << "Goodbye!";
            break;
        } else {
            cout << "Sorry, I don't understand you... ";
            answer = get_answer();
            continue;
        }
        answer = get_answer();
    }
}

double max(double num1, double num2) {
    return num1 > num2 ? num1 : num2;
}

double min(double num1, double num2) {
    return num1 < num2 ? num1 : num2;
}

char get_answer() {
    char answer;
    cout << "Do you want to continue? (Y/N)" << endl;
    cin >> answer;
    return answer;
}