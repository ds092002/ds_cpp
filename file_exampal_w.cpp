// file managment
// ofstream : stream class to write on file
// ifstream : stream class to read from file
// ffstream : stream class to both read and write from / to file

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream filestream("D:/ds_cpp/ds_cpp/file1.txt");
    //ofstream filestream("file1.txt");
    if (filestream.is_open())
    {
        filestream << "My Name is Dhaval";
        filestream << "\nI Go Skill Qode Daily";
        filestream << "\nAnd I Learn The Full Stack in SkillQode";
        filestream.clear();
    }

    else
    {
        cout << "File Opening Is Fail";
    }
    
    return 0;
}