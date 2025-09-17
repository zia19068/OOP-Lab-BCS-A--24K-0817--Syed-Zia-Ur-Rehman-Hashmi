#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of the square matrix: ";
    cin >> n;

    int** matrix = new int*[n];
    int i;
    for ( i = 0; i < n; i++) {
        matrix[i] = new int[n];
    }

    cout << "Enter the elements:\n";
   int j;
    for ( i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int mSum = 0;
    int secSum = 0;
    
    for (i = 0; i < n; i++) {
        mSum += matrix[i][i];
        secSum += matrix[i][n - i - 1];
    }

    cout << "\nMatrix:\n";
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMain diagonal sum: " << mSum << endl;
    cout << "Secondary diagonal sum: " << secSum << endl;


    for ( i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}

