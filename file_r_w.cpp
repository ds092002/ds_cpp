#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char d[500];
    //Store File Data

    ofstream ds;
    ds.open("file2.txt");

    cout << "Please Enter Your Name : " << endl;
    cin.getline(d , 100);
    ds << d << endl;

    cout << "Please Enter Contace Number : " << endl;
    cin >> d;
    cin.ignore();
    ds << d << endl;

    ds.close();

    // Read File Data

    ifstream is;
    string line ;
    is.open("file2.txt");

    cout << "Reading From a Text File : " << endl;
    while (getline(is , line))
    {
        cout << line << endl;
    }
    
    is.close();
    return 0;
}