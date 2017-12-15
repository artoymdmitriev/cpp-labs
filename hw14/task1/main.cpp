#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

bool interpretStrToInt(string, int*);
bool interpretStrToDouble(string, double*);
bool checkIntConvertible(string);
bool checkDoubleConvertible(string);

int main() {
    vector<string> words;
    vector<int> ints;
    vector<double> doubles;
    ifstream fin("numbers.txt");

    while(true) {
        string s;
        fin >> s;
        cout << s << " ";
        if (!fin) break;
        words.push_back(s);
    }

    cout << endl;

    for(int index = 0; index < words.size(); index++) {
        int i;
        int *ip = &i;
        if(interpretStrToInt(words.at(index), ip)) {
            ints.push_back(i);
        }

        double d;
        double *dp = &d;
        if(interpretStrToDouble(words.at(index), dp)) {
            doubles.push_back(d);
        }
    }

    cout << "------ Ints: " << endl;

    for(int i = 0; i < ints.size(); i++) {
        cout << ints.at(i) << endl;
    }

    cout << "------ Doubles: " << endl;

    for(int i = 0; i < doubles.size(); i++) {
        cout << doubles.at(i) << endl;
    }

    return 0;
}

bool interpretStrToInt(string str, int *i) {
    bool result = true;
    if(checkIntConvertible(str)) {
        stringstream stream;
        stream << str;
        int num;
        stream >> num;
        *i = num;
    } else {
        result = false;
    }

    return result;
}

bool interpretStrToDouble(string str, double *d) {
    bool result = true;
    if(checkDoubleConvertible(str)) {
        stringstream stream;
        stream << str;
        double num;
        stream >> num;
        *d = num;
    } else {
        result = false;
    }
    return result;
}

bool checkIntConvertible(string str) {
    //check if the first element if +/- or a number
    if(str[0] != '+' && str[0] != '-' && !(str[0] >= '0' && str[0] <= '9')) {
        return false;
    }

    //check if number contains letters
    for(int index = 1; index < str.length(); index++) {
        char ch = str[index];
        if(ch < '0' || ch > '9') {
            return false;
        }
    }

    return true;
}

bool checkDoubleConvertible(string str) {
    //check if the first element if +/- or a number
    if(str[0] != '+' && str[0] != '-' && str[0] != '.' && !(str[0] >= '0' && str[0] <= '9')) {
        return false;
    }

    int amountOfDots = 0;

    //check if number contains letters
    for(int index = 1; index < str.length(); index++) {
        char ch = str[index];
        if(str[index] == '.') {
            amountOfDots++;
        } else if(ch < '0' || ch > '9') {
            return false;
        }
    }

    //check if dots amount is proper
    if(amountOfDots != 1) return false;

    //check if dot is the last char
    if(str[str.length() - 1] == '.') return false;

    return true;
}