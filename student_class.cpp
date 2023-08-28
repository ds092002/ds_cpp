#include<iostream>

using namespace std;

class student
{
     int admno;
     char sname[20];
     float eng , math , sci , total ;

     float ctoatl()
     {
        return eng + math + sci;
     }

     public :

     void takedata()
     {
        cout<<"Enter Student No.";
        cin>>admno;
        cout<<"Enter Student Name.";
        cin>>sname;
        cout<<"Enter Student English Marks:";
        cin>>eng;
        cout<<"Enter Student Maths Marks : ";
        cin>>math;
        cout<<"Enter Student Scienc Marks : ";
        cin>>sci;

        total=ctoatl();
     }

     void showdata()
     {
        cout <<"\nStudents No. : "<< admno ;
        cout <<"\nStudents Name. : "<< sname ;
        cout <<"\nEng\tMath\tsci\ttotal" ;
        cout <<"\n" << eng << "\t" << math << "\t" << sci << "\t" << total ;
     }
};

int main()
{
    student stu ;

    stu.takedata();
    stu.showdata();

    return 0;
}