#include <iostream>
#include <string>

using namespace std;

int main()
{
    int arr[34] = {1, 4, 3};
    //indexs       0, 1, 2

    cout << arr[1] << endl;

    int marks[6];
    for (int i = 0; i < 6; i++)
    {
        cout << "Enter The Marks of " << i << "th Student" << endl;
        cin >> marks[i];
    }

    for (int i = 0; i < 6; i++)
    {
        cout << "The Marks of " << i << "th Student is " << marks[i] << endl;
    }

    int arr2d[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "The Value at arr2d[" << i << "][" << j << "] is: " << arr2d[i][j] << endl;
        }
    }

    return 0;
}