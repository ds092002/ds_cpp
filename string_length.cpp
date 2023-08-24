#include<iostream>

using namespace std ;

int main()
{
    char s[20];
    int i = 0;

    cout << "Enter Name :";
    cin >> s ;

    while (s[i] != '\0')
    {
        cout << "char is : " << s[i] << "\n";
        i++; 
    }

    cout << " Total Length is : " << i << "\n";
}