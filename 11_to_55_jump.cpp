#include<iostream>

using namespace std ;

int main()
{
    int i , j , a = 11;

    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <= 5; j++)
        {
            cout << a << "\t";
            a++;
        }
        cout <<  "\n";
        a+=5;
    }
    
}