#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollNumber;
    float marks;
};

int main() {
    Student student;
    cout << "Enter student name: ";
    getline(cin >> ws, student.name);
    cout << "Enter roll number: ";
    cin >> student.rollNumber;
    cout << "Enter marks: ";
    cin >> student.marks;

    cout << "\nStudent: " << student.name
         << "\nRoll number: " << student.rollNumber
         << "\nMarks: " << student.marks
         << "\nResult: " << (student.marks >= 50 ? "Pass" : "Fail") << '\n';
    return 0;
}
