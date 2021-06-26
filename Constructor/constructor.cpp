#include <iostream>
#include <string>

using namespace std;
class Employee
{
public:
    string name;
    int salary;

    Employee(string n, int s)
    {
        this->name = n;
        this->salary = s;
    }
    void printDetails()
    {
        cout << "The Name of our Employee is " << this->name << " and His Salary is " << this->salary << endl;
    }
};

int main()
{
    Employee naeem("Naeem Constructor", 344);
    naeem.printDetails();
    return 0;
}