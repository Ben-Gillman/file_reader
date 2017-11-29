#ifndef BROKER_DEFINITION
#define BROKER_DEFINITION

#include <string>
#include <iostream>

class Broker
{
private:
    int d_brokerId;
    const std::string d_brokerName;
    double d_brokerCommission;

public:
    Broker() {}
    Bccount(int id, const std::string name, double commission) {}

    int getBrokerId() { return d_brokerId; }
    const std::string getBrokerName() const { return d_brokerName; }

    double getBrokerBalance() { return d_brokerBalance; }
    int changeBrokerBalance(int newBal) { d_brokerBalance = newBal; }

    void print() { std::cout << "broker id: " << d_brokerId << ", name: " 
                             << d_brokerName << ", balance: " 
                             << d_brokerBalance << "\n"; 
    }
};

#endif