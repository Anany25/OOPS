#include<string>
using namespace std;
class Address
{
    private:
    string name;
    string address;
    string pincode;

    public:
    void getDetails();
    Address();
    Address(string name,string address,string pincode);
    Address(Address &copy);
    ~Address();
};
Address::Address()
{
    this->name="abc";
    this->address="delhi";
    this->pincode="100001";
}
Address::Address(string name,string address,string pincode)
{
    cout<<"Parameterized constructor is called!!\n";
    this->name=name;
    this->address=address;
    this->pincode=pincode;
}
Address::Address(Address &copy)
{
    cout<<"Copy constructor is called!!\n";
    this->name=copy.name;
    this->address=copy.address;
    this->pincode=copy.pincode;
}
Address::~Address()
{
    cout<<"destructor called!!\n";
}
void Address::getDetails()
{
    cout<<"Name- "<<this->name<<endl;
    cout<<"Address- "<<this->address<<endl;
    cout<<"Pincode- "<<this->pincode<<endl;
}
