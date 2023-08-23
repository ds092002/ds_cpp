#include<iostream>

using namespace std ;

int main()
{
    char str[50] , rev[50];
    int i , j , r = 0;

    cout << " Enter String Value : ";
    cin >> str ;

    for ( i = 0; str[i] != '\0'; i++)
    {}

    i--;

    for ( j = i; j >= 0; j--)
    {
        rev[r] = str[j];
        r++;
    }
    
    rev[r] = '\0';

    cout << " Reverse is : " << rev << "\n";
}