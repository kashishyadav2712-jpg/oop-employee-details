#include <iostream>
#include <cstring>
using namespace std;

class Employee{
private:
    int empID;
    string name;
    float basicsalary;
    float bonus;
    float totalsalary;

public:

    Employee() {
        empID = 0;
        name = "unknown";
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

    void calculatetotalsalary(){
        totalsalary = basicsalary + bonus;
    }

    void display(){
        cout << "Employee ID: " << empID << endl;
        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basicsalary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total salary: " << totalsalary << endl;
    }
};

int main(){

    Employee emp1;
    cout << "Default constructor - Employee 1:" << endl;
    emp1.display();

    cout << "\n----------------" << endl;

    Employee emp2(101, "Chunait Khan", 50000, 100000);
    cout << "Parameterized Constructor - Employee 2:" << endl;
    emp2.display();

    cout << "\n----------------" << endl;
    return 0;
}
