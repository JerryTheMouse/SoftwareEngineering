#include<iostream>
#include "Account.h"

Account::Account(std::string name,std::string number,double bal)

{
    depositor_name=name;
    account_number = number;
    if(bal>0)
        balance = bal;
    else
    {
        std::cout<< " Balance can't not be negative";
        balance = 0;
    }
}

void Account::show()
{
    std::cout<< "Mr/s "<<depositor_name << " has account #"<< account_number<< " holding a balance of "<<balance<<std::endl;
}

void Account::deposit(double money)
{
    if (money <= 0)
        std::cout<<"You can't deposit zero or negative value\n";
    else{
        balance+=money;
        std::cout<<"You have added " <<money<<" to your account\n";}
}

void Account::withdraw(double money)
{

    if (money > balance)
        std::cout<<"You don't have enough money\n";
    else if (money <= 0)
        std::cout<<"You can't withdraw zero or negative value\n";
    else{
        balance-=money;

        std::cout<<"You have withdrew " <<money<<" from your account\n";}

}
