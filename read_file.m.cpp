#include <fstream>
#include <iostream>
#include <string>

int main()
{
// read each line into a vector
std::ifstream infile("file.txt");
if (!infile.good()) {return 1;}

char delim = ' ';
int numAccount = 0;
int numBroker = 0;
int numTrnx = 0;
std::string line;

std::getline(infile, line, delim);
numAccount = std::stoi(line);
std::cout << numAccount << "\n";
std::getline(infile, line, delim);
numBroker = std::stoi(line);
std::cout << numBroker << "\n";
std::getline(infile, line);
numTrnx = std::stoi(line);
std::cout << numTrnx << "\n";

// read in accounts
int accountId;
std::string name;
double balance; 
delim = '|';

for (size_t i = 0; i != numAccount; ++i){
    std::getline(infile, line, delim);
    accountId = std::stoi(line);
    std::cout << accountId << "\n";
    std::getline(infile, line, delim);
    name = line;
    std::cout << name << "\n";
    std::getline(infile, line);
    balance = std::stod(line);
    std::cout << balance << "\n";
}

// read in brokers
int brokerId;
double commission; 
delim = '|';

for (size_t i = 0; i != numBroker; ++i){
    std::getline(infile, line, delim);
    brokerId = std::stoi(line);
    std::cout << brokerId << "\n";
    std::getline(infile, line, delim);
    name = line;
    std::cout << name << "\n";
    std::getline(infile, line);
    commission = std::stod(line);
    std::cout << commission << "\n";
}

// read in transactions
std::string buySell;
std::string security;
int shares;
double cost;

delim = ' ';

for (size_t i = 0; i != numTrnx; ++i){
    std::getline(infile, line, delim);
    accountId = std::stoi(line);
    std::cout << accountId << "\n";
    std::getline(infile, line, delim);
    brokerId = std::stoi(line);
    std::cout << brokerId << "\n";
    std::getline(infile, line, delim);
    buySell = line;
    std::cout << buySell << "\n";
    std::getline(infile, line, delim);
    security = line;
    std::cout << security << "\n";
    std::getline(infile, line, delim);
    shares = std::stoi(line);
    std::cout << shares << "\n";
    std::getline(infile, line);
    cost = std: :stod(line);
    std::cout << cost << "\n";

}

infile.close();


}