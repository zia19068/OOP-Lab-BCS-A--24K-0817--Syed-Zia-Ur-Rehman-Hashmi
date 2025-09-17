#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    string name;
    int rollNumber;
};

int main() {
    Student student1;

    student1.name = "Nawaz";
    student1.rollNumber = 101;

    cout << "Student Name: " << student1.name << endl;
    cout << "Roll Number: " << student1.rollNumber << endl;

    return 0;
}

