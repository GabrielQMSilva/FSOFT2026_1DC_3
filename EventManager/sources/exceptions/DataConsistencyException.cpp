//
// Created by Lord Foog on 6/13/2026.
//

#include "DataConsistencyException.h"


DataConsistencyException::DataConsistencyException(string data){
    this->data = "Error: ["+ data + "] consistency!!";
}

const char* DataConsistencyException::what(){
    return this->data.c_str();
}

