#include <iostream>
using namespace std;

class Student {
    int Roll_no;
    string Name;
    float Final_Marks;

public:
    void setData() {
        cout << "Enter Roll No: ";
        cin >> Roll_no;
        cout << "Enter Name: ";
        cin >> Name;
        cout << "Enter Final Marks: ";
        cin >> Final_Marks;
    }

    void display() {
        cout << "Roll No: " << Roll_no << ", Name: " << Name << ", Marks: " << Final_Marks << "\n";
    }
};

int main() {
    Student s[10];
    for (int i = 0; i < 10; i++) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        s[i].setData();
    }

    cout << "\nDetails of Students:\n";
    for (int i = 0; i < 10; i++) {
        s[i].display();
    }
    return 0;
}