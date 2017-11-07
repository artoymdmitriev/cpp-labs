#include <iostream>

void changeRegister(char&);
void moveNums(char&);
void replaceOtherCharacters(char&);

using std::cin;
using std::cout;
using std::endl;

int main() {
    char ch;
    cout << "Enter a character: " << endl;
    cin >> ch;
    changeRegister(ch);
    moveNums(ch);
    replaceOtherCharacters(ch);
    cout << ch << endl;
    system("pause");
    return 0;
}

void changeRegister(char &ch) {
    int index = int(ch);
    if(index >= 65 && index <= 90) ch = char(index + 32);
    else if(index >= 97 && index <= 122) ch = char(index - 32);
}

void moveNums(char &ch) {
    int index = int(ch);
    if(index >= 48 && index < 57) ch = char(++index);
    else if(index == 57) ch = '0';
}

void replaceOtherCharacters(char &ch) {
    if(!(ch >= 'A' && ch <= 'Z')
       && !(ch >= 'a' && ch <= 'z')
       && !(ch >= '0' && ch <= '9'))
        ch = '.';
}