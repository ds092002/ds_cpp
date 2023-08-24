#include<iostream>

using namespace std;

int a(int n)
{
    int sum = 0;
    while (n!=0)
    {
        sum = sum * 10 + n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    int num ,r ;

    cout << "Enter Number :";
    cin >> num ;

    r = a(num);

    cout << "The Reverse Number : "<< r <<"\n";
}