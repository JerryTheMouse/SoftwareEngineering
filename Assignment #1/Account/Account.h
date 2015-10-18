#ifndef ACCOUNT_H
#define ACCOUNT_H


class Account
{

private:
    std::string depositor_name,account_number;
    double balance;
public:
    Account(std::string name,std::string number,double bal);
    void show();
    void deposit(double money);
    void withdraw(double money);


};

#endif // ACCOUNT_H
