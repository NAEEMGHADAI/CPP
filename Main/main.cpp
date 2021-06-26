#include <iostream>
#include <string>

using namespace std;

int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

//class Employee
//{
//public:
//    string name;
//    int salary;
//
//    void printDetails()
//    {
//        cout << "The Name of our Employee is " << this->name << " and His Salary is " << this->salary << endl;
//    }
//};

//class Employee
//{
//public:
//    string name;
//    int salary;
//
//	Employee(string n, int s){
//		this->name=n;
//		this->salary= s;
//	}
//    void printDetails()
//    {
//        cout << "The Name of our Employee is " << this->name << " and His Salary is " << this->salary << endl;
//    }
//};

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
    // cout << "Hello World" <<endl;
    // cout << "Next Line"<<endl;

    // short s2a = 9;
    // cout << s2a <<endl;

    // //camelCase Notation
    //     int marksInMaths = 83;
    //     cout << "Marks of STUDENT in Maths is " << marksInMaths <<endl;

    //  cout << "Size of char : " << sizeof(char) << endl;
    //  cout << "Size of int : " << sizeof(int) << endl;
    //  cout << "Size of short int : " << sizeof(short int) << endl;
    //  cout << "Size of long int : " << sizeof(long int) << endl;
    // cout << "Size of long long int : " << sizeof(long long int) << endl;
    //  cout << "Size of float : " << sizeof(float) << endl;
    //  cout << "Size of double : " << sizeof(double) << endl;
    //  cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

    //     int const c= 3;
    //     float const score = 45.32;
    //     double score2 = 45.322;
    //     long double score3 = 45.33332;
    // //	 score = 34.2;
    // //	 c=32;
    //     cout<<"The Score is "<<score <<endl;
    // 	cout<<"The Score is "<<score2 <<endl;
    // 	cout<<"The Score is "<<score3 <<endl;

    // int a, b;
    // cout << "Enter first number: " << endl;
    // cin >> a;

    // cout << "Enter second number: " << endl;
    // cin >> b;

    // cout<<"a+b is: "<<a+b << endl;
    // cout<<"a-b is: "<<a-b << endl;
    // cout<<"a*b is: "<<a*b << endl;
    // cout<<"a/b is: "<<(float) a/b << endl;

    //    int age;
    //    cout << "Enter Your Age: " << endl;
    //
    //    cin >> age;
    //
    //    switch (age)
    //    {
    //    case 12:
    //        cout << "You Are 12 Year old" << endl;
    //        break;
    //    case 18:
    //        cout << "You Are 18 Year old" << endl;
    //        break;
    //
    //    default:
    //        cout << "You Are Nor 12 or 18 Year old" << endl;
    //        }

    //    if(age>=150 || age<1){
    //		cout<<"Invalid AGE";
    //	}
    //	else if(age>=18)
    //    {
    //    	cout<<"You Can Vote " <<endl;
    //	}
    //	else{
    //		cout<<"You Cannot Vote "<<endl;
    //	}

    //	int index = 0;
    //	while(index<34){
    //		cout<<"We Are at Index number: "<<index <<endl;
    //		//cout<<index+index<<endl;
    //		index=index+1;
    //	}

    //	do{
    //		cout<<"We Are at Index number: "<<index <<endl;
    //		index=index+1;
    //
    //	}while(index>3546);

    // for (int i = 0; i < 34; i++)
    // {
    //     cout << "Value of i is: " << i << endl;
    // }

    //    int d, e;
    //    cout << "Enter first number: " << endl;
    //    cin >> d;
    //
    //    cout << "Enter second number: " << endl;
    //    cin >> e;
    //
    //    cout << "The Function returns: " << add(d, e) << endl;

    //    int arr[34] = {1, 4, 3};
    //    //indexs       0,1,2
    //
    //    //	cout<<arr[1]<<endl;
    //
    //    int marks[6];
    //    for (int i = 0; i < 6; i++)
    //    {
    //    	cout<<"Enter The Marks of "<<i<<"th Student"<<endl;
    //        cin >> marks[i];
    //    }
    //
    //    for (int i = 0; i < 6; i++)
    //    {
    //    	cout<<"The Marks of "<<i<<"th Student is "<<marks[i]<<endl;
    //
    //    }

    // int arr2d[2][3] = {
    //     {1, 2, 3},
    //     {4, 5, 6}
    // };

    //    for (int i = 0; i < 2; i++)
    //    {
    //        for (int j = 0; j < 3; j++)
    //        {
    //            cout << "The Value at arr2d[" <<i<< "][" <<j<< "] is: " << arr2d[i][j] <<endl;
    //        }
    //    }

    //	int f = 343;
    //	float g= 78.89;
    //
    //	cout<<(float)f/34<<endl;
    //	cout<<(int)g;

    //	string name = "Naeem";
    //	cout<<"The Name is: "<<name<<endl;
    //	cout<<"The Name is: "<<name.length()<<endl;
    //	cout<<"The Name is: "<<name.substr(0,3)<<endl;
    //	cout<<"The Name is: "<<name.substr(3,4)<<endl;

    //	int h=34;
    //	int *ptr;
    //	ptr=&h;
    //	cout<<"The Value of h is: "<<h<<endl;
    //	cout<<"The Value of h is: "<<*ptr<<endl;
    //	cout<<"The Address of h is: "<<&h<<endl;
    //	cout<<"The Address of h is: "<<ptr<<endl;

    //    Employee naeem;
    //    naeem.name = "Naeem";
    //    naeem.salary = 100;
    //    naeem.printDetails();

    Employee naeem("Naeem Constructor", 344, 32201);
    //    naeem.name = "Naeem";
    //    naeem.salary = 100;
    naeem.printDetails();
    naeem.getSecretPassword();
    //cout<<naeem.secretPassword;

    return 0;
}
