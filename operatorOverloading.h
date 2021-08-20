using namespace std;
class Account
{
private:
    int balance;
public:
    void setBalance(int balance);
    void display();
    Account operator ++(int);
    Account operator ++();
    Account operator +(Account);
};
Account Account::operator ++(int)
{
    Account temp;
    temp.balance = this->balance++;
    return temp;
}
Account Account::operator ++()
{
    Account temp;
    temp.balance = this->balance++;
    return temp;
}
Account Account::operator +(Account anany)
{
    Account temp;
    temp.balance = balance + anany.balance;
    return temp;
}
void Account::display()
{
    cout<<balance;
}
void Account::setBalance(int balance)
{
    this->balance=balance;
}
