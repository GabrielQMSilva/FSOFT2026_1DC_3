//
// Created by Lord Foog on 6/13/2026.
//

#include "DuplicatedDataException.h"


DuplicatedDataException::DuplicatedDataException(string data){
    this->data = "Error: ["+ data + "] duplicated!!";
}

const char* DuplicatedDataException::what(){
    return this->data.c_str();
}