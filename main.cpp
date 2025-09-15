// COMSC-210 | Lab 6 | Jasmine Suarez
// IDE used: VS Code

#include <iostream>
using namespace std;

const int SIZE = 5;

// enterArrayData() populates dynamic double array with user input
// arguments: pointer to dynamic array, num of elements
// returns: nothing
void enterArrayData(double *arr, int SIZE);

// outputArrayData() outputs the contents of dynamic double array
// arguments: pointer to dynamic array, num of elements
// returns: nothing
void outputArrayData(double *arr, int SIZE);

// sumArray() calculates and returns sum of the elements in dynamic array
// arguments: pointer to dynamic array, num of elements
// returns: sum of the array elements
double sumArray(double *arr, int SIZE);

int main() {
    double *arr = nullptr;
    arr = new double[SIZE];

    enterArrayData(arr, SIZE);
    outputArrayData(arr, SIZE);
    double sum = sumArray(arr, SIZE);
    
    cout << "Sum of values: " << sum << endl;

    delete [] arr;

    return 0;
}

void enterArrayData(double *arr, int SIZE) {
    cout << "Data entry for the array:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "\t> Element #" << i << ": ";
        cin >> *(arr + i);
    }
    cout << "Data entry complete." << endl;
}

void outputArrayData(double *arr, int SIZE) {
    cout << "Outputting array elements: ";
    for (int i = 0; i < SIZE; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

double sumArray(double *arr, int SIZE) {
    double sum = 0.0;
    for (int i = 0; i < SIZE; i++) {
        sum += *(arr + i);
    }
    return sum;
}