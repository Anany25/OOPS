#include<iostream>
#include"returnGrade.h"
using namespace std;
int main()
{
    Student Anany;
    float inputMarks;
    cout<<"Enter your marks:\n";
    cin>>inputMarks;
    Anany.setMarks(inputMarks);
    cout<<"You grade is: "<<Anany.returnGrade();
    return 0;
}
