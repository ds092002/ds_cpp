#include<iostream>

using namespace std;

int main()
{
    int age;

    cout << " Enter Age :";
    cin >> age ;

    if (age >= 18)
    {
        cout << " Eligible For Vote ";
    }
    else
    {
        cout << " Not Eligible For Vote ";
    }

}