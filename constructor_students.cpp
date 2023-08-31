#include<iostream>

using namespace std;

class STUDENT
{
    int admo;
    char sname[20];
    float eng,math,sci,total;

    float ctotal()
    {
        return eng + math + sci;
    }

    public :

    STUDENT()
    {
        cout <<"Enter Number. : ";
        cin >>admo;
        cout <<"Enter Name. : ";
        cin >> sname;
        cout <<"Enter English Marks. : ";
        cin >> eng;
        cout <<"Enter Maths Marks. : ";
        cin >> math;
        cout <<"Enter Science Marks. : ";
        cin >> sci;

        total = ctotal();
    }

    void Showdata()
    {
        cout <<"\nStudents No. : "<< admo ;
        cout <<"\nStudents Name. : "<< sname ;
        cout <<"\nEng\tMath\tsci\ttotal" ;
        cout <<"\n" << eng << "\t" << math << "\t" << sci << "\t" << total ;
    }

};

int main()
{
    STUDENT s;
    s.Showdata();
}