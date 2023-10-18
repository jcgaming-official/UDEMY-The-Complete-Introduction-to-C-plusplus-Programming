#include <iostream>
using namespace std;

int main() {
    int arraySize;
    cout << "Enter the size of the array: ";
    cin >> arraySize;

    int* a = new int[arraySize];

    for (int i = 0; i < arraySize; i++) {
        cout << "Enter array [" << i << "]: ";
        cin >> a[i];
    }

    int sum = 0;
    for (int i = 0; i < arraySize; i++) {
        sum += a[i];
    }

    cout << "The sum of total elements is: " << sum << endl;

    delete[] a;

    return 0;
}