#include <iostream>
using namespace std;
int findLargest(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
        return max;
}
int findSecondLargest(int arr[], int size) {
    int largest = arr[0];
    int secondLargest = -1;
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest)
            largest = arr[i];
    }
    for (int i = 0; i < size; i++) {
        if (arr[i] != largest) {
            if (secondLargest == -1 || arr[i] > secondLargest)
                secondLargest = arr[i];
        }
    }
    return secondLargest;
}
int findUnique(int arr[], int size) {
    bool found;
    for (int i = 0; i < size; i++) {
        found = false;
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            return arr[i];
        }
    }
    return arr[0];
}
int main() {
    int size;
    cout << "Enter size of arrays: ";
    cin >> size;
    int arr1[100], arr2[100], temp;
    cout << "Enter " << size << " elements for the first array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr1[i];
    }
    cout << "Enter " << size << " elements for the second array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr2[i];
    }
    for (int i = 0; i < size; i++) {
        temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
    cout << "\nArrays after swapping:\n";
    cout << "First array: ";
    for (int i = 0; i < size; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << "Second array: ";
    for (int i = 0; i < size; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    int largest = findLargest(arr1, size);
    int secondLargest = findSecondLargest(arr2, size);
    int unique = findUnique(arr1, size);
    cout << "Largest element in first array (after swapping): " << largest << endl;
    cout << "Second largest element in second array (after swapping): " << secondLargest << endl;
    cout << "Unique element in first array (after swapping): " << unique << endl;
    return 0;
}

