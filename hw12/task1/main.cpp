// Задача о тестировании оборудования

#include <iostream>
#include <ctime>

int n = 150;
int k = 150;
int m = 150;
int l = 150;

bool**** getDataset();
int countFailures(bool****);

using std::cin;
using std::cout;
using std::endl;

int main() {
    srand(time(NULL));

    double acceptableFailuresPercentage;
    cout << "Enter the acceptable percentage of failures: ";
    cin >> acceptableFailuresPercentage;

    int amountOfMeasurements = n * k * m * l;
    cout << "Amount of measurements is: " << amountOfMeasurements << endl;
    bool ****dataset = getDataset();
    int amountOfFailures = countFailures(dataset);
    cout << "Amount of failures is: " << amountOfFailures << endl;
    double failuresPercentage = amountOfFailures / float(amountOfMeasurements);
    cout << "The percentage of failures is: " << failuresPercentage << endl;
    if(failuresPercentage > acceptableFailuresPercentage) {
        cout << "Test failed!" << endl;
    } else {
        cout << "Test passed!" << endl;
    }

    system("pause");
    return 0;
}

bool**** getDataset() {
    bool ****dataset = new bool***[n];
    for(int i = 0; i < n; i++) {
        dataset[i] = new bool**[k];
        for(int j = 0; j < k; j++) {
            dataset[i][j] = new bool*[m];
            for(int b = 0; b < m; b++) {
                dataset[i][j][b] = new bool[l];
                for(int p = 0; p < l; p++) {
                    if(rand() % 2 == 0 && rand() % 2 == 0) {
                        dataset[i][j][b][p] = false;
                    } else {
                        dataset[i][j][b][p] = true;
                    }
                }
            }
        }
    }
    return dataset;
}

int countFailures(bool ****dataset) {
    int failures = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < k; j++) {
            for(int b = 0; b < m; b++) {
                for(int p = 0; p < l; p++) {
                    if(dataset[i][j][b][p] == 0) {
                         failures++;
                    }
                }
            }
        }
    }
    return failures;
}