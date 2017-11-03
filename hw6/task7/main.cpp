#include <iostream>

char changeRegister(char);
char moveNums(char);
char replaceOtherCharacters(char);

using std::cin;
using std::cout;
using std::endl;

int main() {
    char ch;
    cout << "Enter a character: " << endl;
    cin >> ch;
    ch = changeRegister(ch);
    ch = moveNums(ch);
    ch = replaceOtherCharacters(ch);
    cout << ch << endl;
    system("pause");
    return 0;
}

char changeRegister(char ch) {
    int index = int(ch);
    if(index >= 65 && index <= 90) return char(index + 32);
    else if(index >= 97 && index <= 122) return char(index - 32);
    else return ch;
}

char moveNums(char ch) {
    int index = int(ch);
    if(index >= 48 && index < 57) return char(++index);
    else if(index == 57) return char('0');
    else return ch;
}

char replaceOtherCharacters(char ch) {
    if(!(ch >= 'A' && ch <= 'Z')
       && !(ch >= 'a' && ch <= 'z')
       && !(ch >= '0' && ch <= '9'))
        return '.';
    else return ch;
}

