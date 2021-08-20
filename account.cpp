#include<iostream>
#include "account.h">
using namespace std;
    int main()
    {
        Account krb,ant,balu;
        krb.depositMoney(500);
        ant.depositMoney(1000);
        balu.depositMoney(2000);
        cout<<"Number of Account Holders are: " <<Account::totalMembers()<<endl;
        cout<<"Total Amount in Bank is: "<<Account::totalMoney()<<endl;
        Account *dynamic = new Account();
        dynamic -> depositMoney(3000);
        cout<<"Adding a dynamic Account, Total Number of Account Holders: "<<Account::totalMembers()<<endl;
        cout<<"Total Amount in Bank is: "<<Account::totalMoney()<<endl;
        delete dynamic;
        cout<<"Removing the dynamic Account, Total Number of Account Holders: "<<Account::totalMembers()<<endl;
        cout<<"Total Amount in Bank is: "<<Account::totalMoney()<<endl;
    }
