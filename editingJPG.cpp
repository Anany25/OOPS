#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{


    fstream file;
    string filename = "example.jpg";

    file.open(filename,ios::out | ios::binary | ios::app);
    file<<"End Semester Assignment";
    file.close();

    file.open(filename,ios::in | ios::binary);
    string character;
    while(!file.eof())
    {
        getline(file,character);
        cout<<character;
    }
    file.close();
}

