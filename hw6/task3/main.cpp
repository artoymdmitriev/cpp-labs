#include <iostream>

void checkNegative(int&);
void replaceWithRemainder(int&);
void checkInterval(int&);

using std::cin;
using std::cout;
using std::endl;

int main() {
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;
    checkNegative(num);
    replaceWithRemainder(num);
    checkInterval(num);
    cout << num << endl;
    system("pause");
    return 0;
}

void checkNegative(int &num) {
    num = num < 0 ? -num : num;
}

void replaceWithRemainder(int &num) {
    num = num % 5;
}

void checkInterval(int &num) {
    if(num < 10) num = 10;
    else if(num < 100 && num > 10) num = 100;
}

