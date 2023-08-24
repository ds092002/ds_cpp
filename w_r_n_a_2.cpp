#include<iostream>

using namespace std;
int a()
{
    int a = 83 ,b = 64 , c = 2 , d = 10 , e;
    e = a + ( b / c) * d ;

    return e;
}
int main()
{
     int b = a();

    cout << "Ans is : " << b << "\n";
}