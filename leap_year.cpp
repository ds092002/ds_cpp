#include<iostream>

using namespace std;

int main()
{
    int a;

    cout << "Enter Year : ";
    cin >> a ;

    if (a%4==0)
    {
        cout << "Leap Year ";
    }
    
    else
    {
        cout << "Not Leap Year ";
    }
    
}