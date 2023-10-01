#include<iostream>

using namespace std;

int main()
{
    int i , n , a ,b = 0;

    cout << "Enter The Number : " ;
    cin >> n; 

    a = n/2;

    for ( i = 2; i <= a; i++)
    {
        if(n%i==0)
        {
            cout << "not prime number ";
            b=1;
            break;
        }
    }
    if (b==0)
    {
        cout << "prime number ";
    }
}