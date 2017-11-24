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
    cost = std::stod(line);
    std::cout << cost << "\n";

}

infile.close();










    // std::vector<std::string> fileVector;

    // while (std::getline(infile, line)){
    //     fileVector.push_back(line);
    // }           

    // for (size_t i = 0; i != fileVector.size(); ++i){
    //     std::cout << fileVector[i] << "\n";
    // }

    // // parse first value of vector
    // std::cout << "getline output: " << fileVector[0] << "\n";
    // const std::string firstLine = fileVector[0];
    // int numAccount = std::stoi(firstLine.substr(0, firstLine.find(' ')));
    // int numBroker = std::stoi(firstLine.substr(2, firstLine.find(' ')));
    // int numTrnx = std::stoi(firstLine.substr(4, firstLine.find(' ')));
    // std::cout << numAccount << numBroker << numTrnx << "\n";

    // // parse accounts
    // const char delim = ' ';

    // // these should be pushing to class variables not vectors
    // std::vector<std::string> idVector;
    // std::vector<std::string> nameVector;
    // std::vector<std::string> balVector;
    // // for (size_t i = 1; i != numAccount + 1; ++i){
    // //     int counter = 1;
    // //     while ( std::getline(fileVector[i], line, delim) ){
    // //         if ( counter == 1 ){
    // //             accountVector.push_back(line);
    // //             counter += 1;
    // //             continue;
    // //         }
    // //         if ( counter == 2 ){
    // //             nameVector.push_back(line);
    // //             counter += 1;
    // //             continue;
    // //         }
    // //         if ( counter == 3 ){
    // //             balVector.push_back(line);
    // //             counter += 1;
    // //             break;
    // //         }
    // //     }
    // //     std::cout << idVector[i] << " | " 
    // //               << nameVector[i] << " | " 
    // //               << balVector[i] << "\n";
    // // }
    // for (size_t i = 1; i != numAccount + 1; ++i){
    //     const std::string line = fileVector[i];
    //     for (size_t k = 0; k != 3; ++k){
    //         const std::string value = line.substr(k, line.find('|'));
    //         if ( k == 0 ){idVector.push_back(value);}
    //         else if ( k == 1 ){nameVector.push_back(value);}
    //         else if ( k == 2 ){balVector.push_back(value);}
    //         else {std::cout << "k out of scope \n";}
    //     }
    //     std::cout << idVector[i-1] << " , " 
    //               << nameVector[i-1] << " , " 
    //               << balVector[i-1] << "\n";
    // }
}