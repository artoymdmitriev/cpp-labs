#include <iostream>

bool f1(char);
bool f2(char);
bool f3(char);
bool f4(char);

using std::cin;
using std::cout;
using std::endl;

int main() {
    cout << f4(',') << endl;
    system("pause");
    return 0;
}

bool f1(char a) {
    int index = int(a);
    return (index >= 65 && index <= 90) || (index >= 97 && index <= 122);
}

bool f2(char a) {
    int index = int(a);
    return (index >= 65 && index <= 90);
}

bool f3(char a) {
    int index = int(a);
    return (index >= 48 && index <= 57);
}

bool f4(char a) {
    int index = int(a);
    return (index >= 44 && index <= 46)
           || (index >= 58 && index <= 59)
           || index == 33
           || index == 63;
}
