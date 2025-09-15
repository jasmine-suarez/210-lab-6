// COMSC-210 | Lab 6 | Jasmine Suarez
// IDE used: VS Code

#include <iostream>
using namespace std;

const int SIZE = 5;

void enterArrayData(double *arr, int SIZE);

int main() {
    double *arr = nullptr;
    arr = new double[SIZE];

    enterArrayData(arr, SIZE);

    delete [] arr;

    return 0;
}

void enterArrayData(double *arr, int SIZE) {
    cout << "Enter " << SIZE << " values:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> *(arr + i);
    }
}