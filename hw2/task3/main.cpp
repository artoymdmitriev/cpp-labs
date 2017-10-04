#include <iostream>

using namespace std;
int main() {
    int numbers[3];
    cout << "Enter 3 numbers: ";
    cin >> numbers[0] >> numbers[1] >> numbers[2];

    int min = numbers[0];
    int max = numbers[0];

    for(int i = 1; i < 3; i++) {
        if(min > numbers[i]) min = numbers[i];
        if(max < numbers[i]) max = numbers[i];
    }
    cout << "Max value is: " << max << endl;
    cout << "Min value is: " << min << endl;

    system("pause");
    return 0;
}