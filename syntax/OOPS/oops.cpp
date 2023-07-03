#include <iostream>

using namespace std;

// Create class
class Employee
{
public:
    string name;
    int salary;

    void showGreeting()
    {
        cout << "Hello " << name << endl;
        cout << "And your salary is " << this->salary << endl;
    };
};

class EmployeeWithConstructor
{
public:
    string name;
    int salary;

    // init function, when object is created
    EmployeeWithConstructor(string name, int salary)
    {
        // assigning values to the variables name and salary
        this->name = name;
        this->salary = salary;
    }

    void showGreeting()
    {
        cout << "Hello " << name << endl;
        cout << "And your salary is " << this->salary << endl;
    };
};

// Inheritance, Child class can access the parent class variables and functions
class ClassWithEmployeeVariables : public Employee
{
public:
    ClassWithEmployeeVariables(int age)
    {
        this->age = age;
    }

    int age;
};

int main()
{
    // Creating instance(object) of the class Employee
    Employee employee;

    // Creating instance(object) of the class EmployeeConstructor with arguments
    EmployeeWithConstructor employeeWithConstructor("Simu", 99999);

    // Creating instance(object) of inheritenced class with arguments
    ClassWithEmployeeVariables classWithEmployeeVariables(39);

    // We can @Override the constructor value by Setting values to Employee class
    employee.name = "Simu";
    employee.salary = 99999;

    // Getting values of the class Employee
    cout << "Name: " << employee.name << endl;
    cout << "Salary: " << employee.salary << endl;
    cout << "Age : " << classWithEmployeeVariables.age << endl;

    // Function call of the class Employee
    employee.showGreeting();
}

