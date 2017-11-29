#ifndef BROKER_DEFINITION
#define BROKER_DEFINITION

#include <string>
#include <iostream>

class Broker
{
private:
    int d_brokerId;
    std::string d_brokerName;
    double d_brokerCommission;

public:
    // Broker() {}
    Broker(int id, const std::string name, double commission) {
        d_brokerId = id;
        d_brokerName = name;
        d_brokerCommission = commission;
    }

    int getBrokerId() { return d_brokerId; }
    const std::string getBrokerName() const { return d_brokerName; }
    double getBrokerCommission() { return d_brokerCommission; }

    void print() { std::cout << "broker id: " << d_brokerId << ", name: " 
                             << d_brokerName << ", commission: " 
                             << d_brokerCommission << "\n"; 
    }
};

#endif