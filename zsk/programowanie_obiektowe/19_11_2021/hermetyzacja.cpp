#include <iostream>
#include <conio.h>
using namespace std;

class Account {
    private:
        float balance = 1000;
        float debit = 500;
        float credit = 2000;

    public:
        float getBalance();
        float withdraw(float money);
        float withdrawDebit(float money);
        void deposit(float money);
};

float Account::getBalance() {
    return balance;
}

float Account::withdraw(float money) {
    if(money <= balance && money > 0)
    {
        balance -= money;
        return money;
    }
    else
    {
        return 0;
    }
}

float Account::withdrawDebit(float money) {
    if(money > 0)
    {
        if(money <= (balance + debit))
        {
            balance -= money;
            return money;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
}

void Account::deposit(float money) {
    if(money > 0)
    {
        balance += money;
    }
}

int main()
{
    Account k1;
    cout<<k1.getBalance()<<"\n";

    k1.withdraw(1500);
    cout<<k1.getBalance()<<"\n";

    k1.withdraw(1000);
    cout<<k1.getBalance()<<"\n";

    k1.withdrawDebit(200);
    cout<<k1.getBalance()<<"\n";
    

    //getch();
    return 0;
}