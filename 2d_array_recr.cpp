#include<iostream>

using namespace std ;

int array [5][5];
int i , j;

void arr()
{
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
           cout << array[i][j] << "\t";
        }
        cout << "\n";
    }
}
int main()
{
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            array[i][j] = i+1;
        }
    }
    arr();
}