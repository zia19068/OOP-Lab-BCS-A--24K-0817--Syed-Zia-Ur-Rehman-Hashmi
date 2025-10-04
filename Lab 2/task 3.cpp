#include <iostream>
using namespace std;

int sumArray(int* arr, int size) {
    int sum = 0;
    int i;
    for (i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}

int main() {
    int size;
    cout << "Number of elements in the array: ";
    cin >> size;

    int num[size];
    cout << "Enter " << size << " numbers:\n";
    int i;
    for (i = 0; i < size; i++) {
        cin >> num[i];
    }

    int total = sumArray(num, size);
    cout << "sum: " << total << endl;

    return 0;
}

