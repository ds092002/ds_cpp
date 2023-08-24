#include<iostream>

using namespace std ;

int math , guj , sci , total;
float per;
void getper()
{
    per = total / 3;
    cout << "Perchantage is : "<< per << "\n";
}
void gettotal()
{
    total = math + guj + sci ;
    cout << "Total Marks :"<< total << "\n";

    getper();
}
void getmarks()
{
    cout << "Enter Maths Marks :";
    cin >> math ;
    cout << "Enter Gujrati Marks :";
    cin >> guj ;
    cout << "Enter Science Marks :";
    cin >> sci ;

    gettotal();
}
int main()
{
    cout << "Students Marks And Per : \n";

    getmarks();
}