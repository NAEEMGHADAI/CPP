#include <iostream>
#include <string>

using namespace std;
class Employee
{
public:
    string name;
    int salary;

    Employee(string n, int s, int sp)
    {
        this->name = n;
        this->salary = s;
        this->secretPassword = sp;
    }
    void printDetails()
    {
        cout << "The Name of our Employee is " << this->name << " and His Salary is " << this->salary << endl;
    }

    void getSecretPassword()
    {
        cout << "The Secret Password of employee is: " << this->secretPassword;
    }

private:
    int secretPassword;
};

class Programmer : public Employee
{
public:
    int errors;
};

int main()
{
    Employee naeem("Naeem Constructor", 344, 32201);
    //    naeem.name = "Naeem";
    //    naeem.salary = 100;
    naeem.printDetails();
    naeem.getSecretPassword();
    //cout<<naeem.secretPassword;
    return 0;
}