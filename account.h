class Account
    {
        int balance;
        public:
            static int memberCount, totalBalance;
            Account();
            void depositMoney(int balance);
            static int totalMoney();
            static int totalMembers();
            ~Account();
    };
    int Account::memberCount = 0;
    int Account::totalBalance= 0;
    int Account::totalMoney()
    {
        return totalBalance;
    }
    int Account::totalMembers()
    {
        return memberCount;
    }
    Account::Account()
    {
        balance=0;
        memberCount++;
    }
    Account::~Account()
    {
        memberCount--;
        totalBalance-=balance;
    }
    void Account::depositMoney(int balance)
    {
        this -> balance = balance;
        totalBalance+=balance;
    }
