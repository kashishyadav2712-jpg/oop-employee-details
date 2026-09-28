#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int empID;
    string name;
    float basicsalary;
    float bonus;
    float totalsalary;

public:
    Employee() {
        empID = 0;
        name = "Unknown";
        basicsalary = 0;
        bonus = 0;
        totalsalary = 0;
    }

    Employee(int id, string n, float salary, float b) {
        empID = id;
        name = n;
        basicsalary = salary;
        bonus = b;
        calculatetotalsalary();
    }

    void calculatetotalsalary() {
        totalsalary = basicsalary + bonus;
    }

    void display() {
        cout << "Employee ID: " << empID << endl;
        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basicsalary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total salary: " << totalsalary << endl;
    }
};

int main() {

    Employee emp1;
    cout << "Default constructor - Employee 1:" << endl;
    emp1.display();

    cout << "\n----------------" << endl;

    Employee emp2(101, "Chunaid Khan", 50000, 100000);
    cout << "Parameterized Constructor - Employee 2:" << endl;
    emp2.display();

    cout << "\n----------------" << endl;

    int id;
    string name;
    float salary, bonus;

    cout << "Enter Employee ID: ";
    cin >> id;
    cin.ignore();

    cout << "Enter name: ";
    getline(cin, name);

    cout << "Enter basic salary: ";
    cin >> salary;

    cout << "Enter bonus: ";
    cin >> bonus;

    Employee emp3(id, name, salary, bonus);
    cout << "\nEmployee 3 details: " << endl;
    emp3.display();

    return 0;
}
