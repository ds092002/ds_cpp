#include<iostream>

using namespace std;

class TEST
{
    int test_cod;
    char des[20];
    int num_can;
    int center;

    float CALCNTR()
    {
        center = (num_can / 100 + 1); 
    }
   
    public :

    void SCHEDULE()
    {
        cout <<"Enter Test Code. : ";
        cin >> test_cod;
        cout <<"Enter Description. : ";
        cin >> des;
        cout <<"Enter Candidate Number. : ";
        cin >> num_can;

        CALCNTR();
    }

    void DISPTEST()
    {
        cout <<"Test Code. : "<<test_cod<<"\n";
        cout <<"Description. : "<<des<<"\n";
        cout <<"Candidate. : "<<num_can<<"\n";
        cout <<"Number Of Centers. : "<<center<<"\n";
    }
};

int main()
{
    TEST test;

    test.SCHEDULE();
    test.DISPTEST();
}