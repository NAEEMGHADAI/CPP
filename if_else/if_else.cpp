#include <iostream>
#include <string>

using namespace std;

int main()
{
    int age;
    cout << "Enter Your Age: " << endl;

    cin >> age;

    if (age >= 150 || age < 1)
    {
        cout << "Invalid AGE";
    }
    else if (age >= 18)
    {
        cout << "You Can Vote " << endl;
    }
    else
    {
        cout << "You Cannot Vote " << endl;
    }
    return 0;
}