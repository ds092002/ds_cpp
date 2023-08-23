#include<iostream>

using namespace std;

struct result 
{
    int math[5] , sci[5] ,guj[5] ,total[5],per[5] ;
    char grade[5],name[5];
};

int main()
{
    struct result a;

    for ( int i = 0; i < 5; i++)
    {
        cout << "Enter Name Of Students  : ";
        cin >> a.name[i];

        cout << "Enter Maths Marks : ";
        cin >> a.math[i]; 
        cout << "Enter Science Marks : ";
        cin >> a.sci[i]; 
        cout << "Enter Gujrati Marks : ";
        cin >> a.guj[i]; 

        a.total[i] = a.math[i] + a.sci[i] + a.guj[i] ;
        cout << "Total Marks :" << a.total << "\n";

        a.per[i] = a.total[i] / 3;
        cout << "Perchantage : " << a.per[i] << "\n";

        if (a.per[i] >= 90)
        {
            a.grade[i]='A';
        }
        else if (a.per[i] >= 70)
        {
            a.grade[i]='B';
        }
        else if (a.per[i] >= 50)
        {
            a.grade[i]='C';
        }
        else if (a.per[i] >= 35)
        {
            a.grade[i]='D';
        }
        else
        {
            a.grade[i]='F';
        }
        
        cout << "Grade is : " <<(char) a.grade[i] << "\n";
    }
    
}