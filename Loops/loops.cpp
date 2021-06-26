#include <iostream>
#include <string>

using namespace std;

int main()
{
    int index = 0;
    while (index < 34)
    {
        cout << "We Are at Index number: " << index << endl;
        cout << index + index << endl;
        index = index + 1;
    }

    do
    {
        cout << "We Are at Index number: " << index << endl;
        index = index + 1;

    } while (index > 3546);

    for (int i = 0; i < 34; i++)
    {
        cout << "Value of i is: " << i << endl;
    }
    return 0;
}