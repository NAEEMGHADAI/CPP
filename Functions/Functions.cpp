#include <iostream>
#include <string>

using namespace std;
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int main()
{
    int d, e;
    cout << "Enter first number: " << endl;
    cin >> d;

    cout << "Enter second number: " << endl;
    cin >> e;

    cout << "The Function returns: " << add(d, e) << endl;
    return 0;
}