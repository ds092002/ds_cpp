#include<iostream>

using namespace std;

int a(int b)
{
    cout << b << "\t";
    if (b<10)
    {
        return a(++b);
    }
    else
    {
        return b;
    }
    
}
int main()
{
    int n = 1;

    a(n);
}