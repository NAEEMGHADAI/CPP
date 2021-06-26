#include <iostream>
#include <string>

using namespace std;
class Employee
{
public:
    string name;
    int salary;

    void printDetails()
    {
        cout << "The Name of our Employee is " << this->name << " and His Salary is " << this->salary << endl;
    }
};

int main()
{
    Employee naeem;
    naeem.name = "Naeem";
    naeem.salary = 100;
    naeem.printDetails();
    return 0;
}