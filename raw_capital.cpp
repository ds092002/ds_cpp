#include<iostream>

using namespace std;

int main()
{
    int i ,j ;
    int a = 'A';

    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            if (i%2==0)
            {
                cout << (char )(a + 32) << "\t";
            }
            else
            {
                cout <<(char)a  << "\t";
            }
            a++;
        }
        cout << "\n";
    }
    
}