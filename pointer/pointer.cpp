#include <iostream>
#include <string>

using namespace std;

int main()
{
    int h = 34;
    int *ptr;
    ptr = &h;
    cout << "The Value of h is: " << h << endl;
    cout << "The Value of h is: " << *ptr << endl;
    cout << "The Address of h is: " << &h << endl;
    cout << "The Address of h is: " << ptr << endl;

    return 0;
}