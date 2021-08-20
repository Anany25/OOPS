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
void updateBalance(friend2&,int);
friend void displayBalance(friend1,friend2);
};
class friend2
{
friend class friend1;
int balance;
public:
friend2(int);
friend void displayBalance(friend1,friend2);
};
friend1::friend1()
{
this->balance=5000;
}
friend2::friend2(int balance)
{
this->balance=1000;
}
void friend1::updateBalance(friend2 &obj1,int val)
{
obj1.balance=val;
}
void displayBalance(friend1 obj1,friend2 obj2)
{
cout<<obj1.balance<<" "<<obj2.balance;
}
int main()
{
friend1 o1;
friend2 o2(1000);
displayBalance(o1,o2);
cout<<endl;
o1.updateBalance(o2,500);
displayBalance(o1,o2);
}
