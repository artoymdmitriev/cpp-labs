#include <iostream>

bool checkLatinLetter(char);
bool checkUppercaseLatinLetter(char);
bool checkNumber(char);
bool checkPunctuationMark(char);

using std::cin;
using std::cout;
using std::endl;

int main() {
    char ch;
    cout << "Enter the symbol: " << endl;
    cin >> ch;
    if(checkLatinLetter(ch)) cout << "The symbol is a latin letter" << endl;
    if(checkUppercaseLatinLetter(ch)) cout << "The symbol is an uppercase latin letter" << endl;
    if(checkNumber(ch)) cout << "The symbol is a digit" << endl;
    if(checkPunctuationMark(ch)) cout << "The symbol is a punctuation mark" << endl;
    system("pause");
    return 0;
}

bool checkLatinLetter(char a) {
    int index = int(a);
    return (index >= 65 && index <= 90) || (index >= 97 && index <= 122);
}

bool checkUppercaseLatinLetter(char a) {
    int index = int(a);
    return (index >= 65 && index <= 90);
}

bool checkNumber(char a) {
    int index = int(a);
    return (index >= 48 && index <= 57);
}

bool checkPunctuationMark(char a) {
    int index = int(a);
    return (index >= 44 && index <= 46)
           || (index >= 58 && index <= 59)
           || index == 33
           || index == 63;
}
