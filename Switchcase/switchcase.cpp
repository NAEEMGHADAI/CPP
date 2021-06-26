#include <iostream>
#include <string>

using namespace std;

int main()
{
    int age;
    cout << "Enter Your Age: " << endl;

    cin >> age;

    switch (age)
    {
    case 12:
        cout << "You Are 12 Year old" << endl;
        break;
    case 18:
        cout << "You Are 18 Year old" << endl;
        break;

    default:
        cout << "You Are Nor 12 or 18 Year old" << endl;
    }

    return 0;
}