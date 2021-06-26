#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name = "Naeem";
    cout << "The Name is: " << name << endl;
    cout << "The Name is: " << name.length() << endl;
    cout << "The Name is: " << name.substr(0, 3) << endl;
    cout << "The Name is: " << name.substr(3, 4) << endl;
    return 0;
}