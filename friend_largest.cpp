#include<iostream>
using namespace std;

class Number
{
    private :

    int num;

    public :
        Number (int n)
        {
            num = n;
        }
     friend int findlargest(Number n1 , Number n2);          
};
int findlargest(Number n1 , Number n2)
{
    if (n1.num > n2.num)
    {
        return n1.num;
    }
    else
    {
        return n2.num;
    }
}

int main ()
{
    int nu1,nu2;

    cout << "Enter First Number : ";
    cin >> nu1;
    cout << "Enter Second Number : ";
    cin >> nu2;

    Number n1(nu1);
    Number n2(nu2);

    int largest = findlargest(n1, n2);
    cout << "The largest number is: " << largest << endl;
}