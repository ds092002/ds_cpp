#include<iostream>

using namespace std;

int main()
{
    float p , r , t , si ;

    cin >> p >> r >> t ;

    cout << "P Value :" << p << "\n";
    cout << "R Value :" << r << "\n";
    cout << "T Value :" << t << "\n";


    si = (p * r * t) / 100;

    cout << "Simple Intrest Is : " << si << "\n";

}