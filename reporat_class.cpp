#include<iostream>

using namespace std;

class REPORT
{
    int admo;
    char name[20];
    float marks[5],totalmarks,avg;

    int GETAVG()
    {
        avg = totalmarks / 5;
        return avg;
    }

    public :

    void READINGFO()
    {
        cout << "ENTER DEMO. : ";
        cin >> admo ;
        cout << "ENTER NAME. : ";
        cin >> name;
        cout <<"ENTER 5 SUBJECT MARKS. : ";
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];

            totalmarks = totalmarks + marks[i];
        }
        GETAVG();
    }

    void DISPLAYINFO()
    {
        cout <<"\nDEMO NO. : "<<admo;
        cout <<"\nNAME IS. : "<<name;
        cout <<"\nAVREGE MARKS IS. : "<<avg;
    }

};

int main()
{
    REPORT r;

    r.READINGFO();
    r.DISPLAYINFO();
}