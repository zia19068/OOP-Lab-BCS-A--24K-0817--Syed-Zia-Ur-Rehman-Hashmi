#include <iostream>
using namespace std;

void SwapValues(int* a, int* b) {
    if (a == b) 
	return; 

    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {
    int x, y;

    cout << "Enter two Numbers:\n";
    cin >> x >> y;

    SwapValues(&x, &y);

    cout << "\nAfter swapping:\n";
    cout << "x = " << x << ", y = " << y << "\n";

    return 0;
}

