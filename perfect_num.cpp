#include <iostream>

using namespace std;

int a(int num)
{
    int sum = 0;

    for (int i = 1; i <= num / 2; i++)
    {
         if(num % i == 0)
         {
            sum += i;
         }
    }
    if (sum == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int main()
{
    int n;

    cout << "Enter Number :";
    cin >> n ;

    if(a(n))
    {
        cout << "Perfect Number : "<< n << "\n";
    }

    else
    {
        cout << "Not Perfect Number : "<< n << "\n";
    }
    
}