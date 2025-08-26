#include <iostream>
using namespace std;

class Employee {
private:
    string Emp_name;
    float Emp_salary;

public:
    void setData(string name, float salary) {
        Emp_name = name;
        Emp_salary = salary;
    }

    void display() {
        cout << "Employee Name: " << Emp_name << "\n";
        cout << "Employee Salary: " << Emp_salary << "\n";
    }
};

int main() {
    Employee e;
    string name;
    float salary;
    cout << "Enter Employee Name: ";
    cin >> name;
    cout << "Enter Employee Salary: ";
    cin >> salary;
    e.setData(name, salary);
    e.display();
    return 0;
}