#ifndef ACCOUNT_DEFINITION
#define ACCOUNT_DEFINITION

#include <string>
#include <iostream>

class Account
{
private:
    std::string d_accountName;
    double d_accountBalance;
    int d_accountId;

public:
    Account() {}
    Account(const std::string name, double balance, int id) {
        d_accountName = name;
        d_accountBalance = balance;
        d_accountId = id;
    }

    int getAccountId() { return d_accountId; }
    const std::string getAccountName() const { return d_accountName; }

    double getAccountBalance() { return d_accountBalance; }
    int changeAccountBalance(int newBal) { d_accountBalance = newBal; }

    void print() { std::cout << "account id: " << d_accountId << ", name: " 
                             << d_accountName << ", balance: " 
                             << d_accountBalance << "\n"; 
    }
};

#endif