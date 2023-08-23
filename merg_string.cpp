#include <iostream>

using namespace std;

int main()
{
    char a[10],b[10],c[20];
    int i = 0 , j = 0;

    cout << "String 1 :";
    cin >> a ;
    while (a[i]!='\0')
    {
        c[j]=a[i];
        j++;
        i++;
    }
    
    cout << "String 2 :";
    cin >> b ;
    i = 0;
    while (b[i]!='\0')
    {
        c[j]=b[i];
        j++;
        i++;
    }

    c[j]!='\0';
    cout << "Merge string : " <<c<< "\n";
    
}