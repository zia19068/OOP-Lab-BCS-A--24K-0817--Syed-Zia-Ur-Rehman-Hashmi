#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    string name;

    void setRollNo(int r) {
        rollNumber = r;
    }

    int getRollNo() {
        return rollNumber;
    }

private:
    int rollNumber;  
};

int main() {
    Student student1;
    student1.name = "Zaid";
    student1.setRollNo(111);

    cout << "Student Name: " << student1.name << endl;
    cout << "Roll Number: " << student1.getRollNo() << endl;

    return 0;
}

