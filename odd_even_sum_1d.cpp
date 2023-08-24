#include<iostream>

using namespace std;

int main()
{
    int a[20] , i , even = 0 , odd = 0;

    for ( i = 0; i < 10; i++)
    {
        cout <<"Enter Number : ";
        cin >> a[i] ;
    }
    
    for ( i = 0; i < 10; i++)
    {
        if (a[i] %2==0)
        {
            even += a[i];
        }
        else
        {
            odd += a[i];
        }
    }
    cout <<"Sum of odd number : "<< odd << "\n";
    cout <<"Sum of even number : "<< even << "\n";
}