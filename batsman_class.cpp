#include<iostream>

using namespace std;

class batsman
{
    int bcode;
    char bname[20];
    int inning , notout , runs;
    float batavg;

    float calaavg()
    {
        batavg = runs / (inning - notout);

        return batavg;
    }

    public :

    void readdata()
    {
        cout <<"Enter Batsman NO. :";
        cin >> bcode;
        cout <<"Enter Batsman Name. :";
        cin >> bname;
        cout <<"Enter Batsman Innings. :";
        cin >> inning;
        cout <<"How Many Time Batsman Notout. :";
        cin >> notout;
        cout <<"How Many Total Run In All Innings :";
        cin >> runs;


        batavg = calaavg();
    }

    void displaydata()
    {
        cout << "\nBatsman No. : " << bcode <<"\n";
        cout << "Batsman Name. :" << bname <<"\n";
        cout << "Total Innings. : " << inning <<"\n";
        cout << "Notout. : " << notout <<"\n";
        cout << "Total Runs. : " <<runs <<"\n";
        cout << "Batsman Total Batting Avg. : " << batavg <<"\n";

        cout << "No.\tName.\tInin.\tNotout.\tRuns.\tAvg.";
        cout << "\n"<< bcode << "\t" << bname << "\t" << inning << "\t" << notout << "\t" << runs << "\t" << batavg ;
    }

};

int main()
{
    batsman bat;
   
    bat.readdata();
    bat.displaydata(); 
}