#include <iostream>
using namespace std;
void FirstAndLastIndex(const char* str, char ch, int* firstIndex, int* lastIndex) {
    const char* ptr = str;
    *firstIndex = -1;
    *lastIndex = -1;
    int index = 0;
    while (*ptr != '\0') {
        if (*ptr == ch) {
            if (*firstIndex == -1)
                *firstIndex = index;
            *lastIndex = index;
        }
        ptr++;
        index++;
    }
}

int main() {
    char input[100];
    char targetChar;
    int first, last;
    cout << "Enter a string: ";
    cin>>input;

    cout << "Enter the character to find: ";
    cin >> targetChar;

    FirstAndLastIndex(input, targetChar, &first, &last);

    if (first != -1) {
        cout << "First occurrence of '" << targetChar << "' is at index: " << first << endl;
        cout << "Last occurrence of '" << targetChar << "' is at index: " << last << endl;
    } else {
        cout << "Character '" << targetChar << "' not found in the string." << endl;
    }

    return 0;
}

