#include<iostream>

using namespace std ;

int main()
{
    int i , j ;
    char a = 'A';

    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <= 5; j++)
        {
            cout << a << "\t";
            a++;
        }
        cout <<  "\n";
        
    }
    
}