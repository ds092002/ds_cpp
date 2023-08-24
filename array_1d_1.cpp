#include<iostream>

using namespace std;

int main()
{
    int a[]={1,2,3,4,5};
    int b[]={6,7,8,9,10};
    int i , j ;

    cout <<"Array 1: ";
    for ( i = 0; i < 5; i++)
    {
        cout << a[i] << "\t";
    }
    
    cout <<"\nArray 2: ";
    for ( j = 0; j < 5; j++)
    {
        cout << b[j] << "\t";
    }
    
}