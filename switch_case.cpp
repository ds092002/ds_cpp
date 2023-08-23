#include<iostream>

using namespace std;

int main()
{
    int a = 20 , b = 30 ,ch ;

    cout << "1.Addition \n";
    cout << "2.Substraction \n";
    cout << "3.Multiplication \n";
    cout << "4.Division \n";

    cout << "Enter Your Choice : \n";
    cin >> ch ;

    switch (ch)
    {
    case 1 : 
        cout <<"Addition of a and b is " << a + b << "\n";
        break;
    
    case 2 : 
        cout <<"Substraction of a and b is " << a - b << "\n";
        break;
    
    case 3 : 
        cout <<"Multiplication of a and b is " << a * b << "\n";
        break;
    
    case 4 : 
        cout <<"Division of a and b is " << a / b << "\n";
        break;
    
    default:
        cout << "You Enter Wrong Choice !!!!!!! ";
        break;
    }

}