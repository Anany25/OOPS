#include<iostream>
#include"operatorOverloading.h"
using namespace std;
int main()
{
    Account devansh,anany,rudeep;
    devansh.setBalance(1000);
    devansh.display();
    cout<<endl;
    anany.setBalance(5000);
    anany.display();
    cout<<endl;
    ++devansh;
    devansh.display();
    cout<<endl;
    anany++;
    anany.display();
    cout<<endl;
    rudeep=devansh+anany;
    rudeep.display();
}
