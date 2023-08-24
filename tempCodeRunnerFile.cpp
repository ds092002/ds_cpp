#include<iostream>

using namespace std;

int main()
{
    int a[5][5] , i , j , s = 0;

    for ( i = 4; i >= 0; i--)
    {
        for ( j = 0; j < 5; j++)
        {
             a[s][j] = i + 1;
        }
        s++;
    }
    
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
             cout << a[i][j] << "\t" ;
        }
        cout << "\n";
    }
}