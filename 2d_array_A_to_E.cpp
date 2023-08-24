#include<iostream>

using namespace std;

int main()
{
    int a[5][5] , i , j , s = 65;

    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
             a[i][j] = s ;
        }
        s++;
    }
    
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
             cout << (char) a[i][j] << "\t" ;
        }
        cout << "\n";
    }
}