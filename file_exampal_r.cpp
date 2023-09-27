#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string d;
    ifstream filestream("file1.txt");

    if (filestream.is_open())
    {
        while (getline(filestream , d))
        {
            cout << d << endl;
        }
        filestream.close();
    }
    else
    {
        cout << "File Opening Is Fail.." ;
    }
    
    return 0;
}