//
// Created by Lord Foog on 6/13/2026.
//

#ifndef DUPLICATEDDATAEXCEPTION_H
#define DUPLICATEDDATAEXCEPTION_H

#include <exception>
#include <string>
using namespace std;

class DuplicatedDataException :public exception{
private:
    string data;
public:
    DuplicatedDataException(string data);
    //override what function
    const char* what();
};


#endif //DUPLICATEDDATAEXCEPTION_H
