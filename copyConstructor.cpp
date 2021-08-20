#include<iostream>
#include"copyConstructor.h"
using namespace std;
int main()
{
    Address dad("mydaddy","delhi","100001");
    Address me=dad;
    dad.getDetails();
    me.getDetails();
    return 0;
}
