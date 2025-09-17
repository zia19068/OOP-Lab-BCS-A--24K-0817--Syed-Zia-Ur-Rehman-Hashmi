#include <iostream>
using namespace std;
int isPrime(int num) {
    if (num <= 1) return false; 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}
void findPrimesInRange(int start, int end) {
    cout << "\nPrime numbers between " << start << " and " << end << " are:" << endl;
    for (int i = start + 1; i < end; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}
int main() {
    int start, end;
    cout << "Enter the start number: ";
    cin >> start;
    cout << "Enter the end number: ";
    cin >> end;
    if (start >= end) {
        cout << "Invalid input! Start number must be less than end number." << endl;
        return 1;
    }
    findPrimesInRange(start, end);
    return 0;
}

