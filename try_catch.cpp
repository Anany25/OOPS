#include<iostream>
#include<string>
using namespace std;

class Student{

public:
    int regno;
    float gpa;
    char gender;
    string branch;
    Student(int regno,float gpa,char gender,string branch)
    {
        if(regno>999)
        {
            throw(regno);
        }
        if(gpa>10)
        {
            throw(gpa);
        }
        if(gender!='m'&&gender!='f')
        {
            throw(gender);
        }
        if(branch!="BBS")
        {
            throw(branch);
        }
        else
        {
            this->regno=regno;
            this->gpa=gpa;
            this->gender=gender;
            this->branch=branch;
        }
    }

};

int main()
{
    try
    {
        Student rahul(123,9.7,'m',"BBA");
    }
    catch(int regno)
    {
        cout<<"Invalid Registration Number!\n";
    }
    catch(float gpa)
    {
        cout<<"Invalid GPA!\n";
    }
    catch(char gender)
    {
        cout<<"Invalid Gender!\n";
    }
    catch(string branch)
    {
        cout<<"Invalid Branch!\n";
    }
}

