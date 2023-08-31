#include<iostream>

using namespace std;

class BATSMAN
{
    int bcode;
    char bname[20];
    int inning,notout,runs;
    float batavg;

    float calcavg()
    {
        batavg = runs / (inning - notout);

        return batavg;
    }

    public :

    BATSMAN()
    {
        cout << "Enter Batsman No. : ";
        cin >> bcode;
        cout << "Enter Batsman Name. : ";
        cin >> bname;
        cout << "Enter Batsman Innings. : ";
        cin >> inning;
        cout << "How Many Time Batsman Notout. : ";
        cin >> notout;
        cout << "Enter Batsman Total Innings Runs. : ";
        cin >> runs;

        batavg = calcavg();
    }

    void displaydata()
    {
         cout << "Batsman Total Batting Avg. : " << batavg <<"\n";

        cout << "No.\tName.\tInin.\tNotout.\tRuns.\tAvg.";
        cout << "\n"<< bcode << "\t" << bname << "\t" << inning << "\t" << notout << "\t" << runs << "\t" << batavg ;
    }

};

int main()
{
    BATSMAN b;
    b.displaydata();

    return 0;
}