#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    double marks;
    char grade;

public:
    Student(string n, int r, double m) {
        name = n;
        rollNo = r;
        marks = m;
        grade = ' ';
    }

    void calculateGrade() {
        if (marks >= 90) {
            grade = 'A';
        } else if (marks >= 80) {
            grade = 'B';
        } else if (marks >= 70) {
            grade = 'C';
        } else {
            grade = 'F';
        }
    }

    void displayStudentInfo() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << grade << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    Student student1("Zaid", 101, 92.5);
    Student student2("Shaheer", 102, 76.0);

    student1.calculateGrade();
    student2.calculateGrade();

    cout << "Student Details:\n";
    cout << "-----------------------------" << endl;
    student1.displayStudentInfo();
    student2.displayStudentInfo();

    return 0;
}

