#include <iostream>

using namespace std;
class Result
{
    int sci,guj,eng,math,total;
    double per;
    string name;

    public :

    Result()
    {
        cout <<endl<<"<----------Student Marksheet---------->"<<endl;
        cout << "Enter Student Name :-";
        cin >> name;
        cout << "Enter Science Marks : " ;
        cin >> sci;
        cout << "Enter Gujrati Marks : " ;
        cin >> guj;
        cout << "Enter English Marks : " ;
        cin >> eng;
        cout << "Enter Math Marks : " ;
        cin >> math;

        total = sci + guj + eng + math ;
        per = total / 4 ;
        cout << "Total Marks :---> " << total << endl ;
        cout << "Parcantag :---> "<< per << endl ;
    }

    void getResult()
    {
        cout << name <<"\t"<< sci <<"\t"<< guj <<"\t"<< eng <<"\t"<< math <<"\t"<< total <<"\t"<< per <<"\t"<<endl;
    }
};
int main()
{
    Result result[4];

    cout <<endl<<"************************************************************"<<endl;
    cout <<"\t\t----->|Student Result|<-----"<<endl;
    cout <<endl<<"************************************************************"<<endl;
    cout << endl << "Name\t" << "Scienc\t" << "Gujrati\t" << "English\t" << "Maths\t"<< "Total\t" << "Percantag\t" << endl;
    cout <<endl<<"************************************************************"<<endl;
    for (int i = 0; i < 4; i++)
    {
        result[i].getResult();
    }
    
}