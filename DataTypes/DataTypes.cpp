#include <iostream>
#include <string>

using namespace std;

int main()
{
    short s2a = 9;
    cout << s2a << endl;

    //camelCase Notation
    int marksInMaths = 83;
    cout << "Marks of STUDENT in Maths is " << marksInMaths << endl;

    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    cout << "Size of long int : " << sizeof(long int) << endl;
    cout << "Size of long long int : " << sizeof(long long int) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
    return 0;
}