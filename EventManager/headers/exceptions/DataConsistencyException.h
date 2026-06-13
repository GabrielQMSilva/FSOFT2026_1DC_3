//
// Created by Lord Foog on 6/13/2026.
//

#ifndef DATACONSISTENCYEXCEPTION_H
#define DATACONSISTENCYEXCEPTION_H

#include <exception>
#include <string>
using namespace std;

class DataConsistencyException :public exception{
private:
    string data;
public:
    DataConsistencyException(string data);
    //override what function
    const char* what();
};

#endif //DATACONSISTENCYEXCEPTION_H
