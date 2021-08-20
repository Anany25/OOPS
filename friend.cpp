#include<iostream>
using namespace std;
class friend1;
class friend2;

class friend1
{
    friend class friend2;
    int balance;
public:
    friend1();
    friend int displayBalance(friend1,friend2);
    void updateBalance(friend2&,int);
};
class friend2
{
    friend class friend1;
    int balance;
public:
    friend2(int);
    friend int displayBalance(friend1,friend2);
};
friend1::friend1()
{
    this->balance=5000;
}
friend2::friend2(int balance)
{
    this->balance=balance;
}
void friend1::updateBalance(friend2& obj2,int temp)
{
    obj2.balance=temp;
    cout<<"Balance Modified"<<endl;
}
int displayBalance(friend1 obj1,friend2 obj2)
{
    cout<<"Object 1 Balance:"<<obj1.balance<<endl<<"Object 2 Balance:"<<obj2.balance<<endl;
}

int main()
{
    friend1 obj1;
    friend2 obj2(1000);
    displayBalance(obj1,obj2);
    obj1.updateBalance(obj2,2000);
    displayBalance(obj1,obj2);
}
