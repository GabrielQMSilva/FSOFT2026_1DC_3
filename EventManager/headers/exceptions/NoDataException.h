//
// Created by gabri on 13/06/2026.
//

#ifndef NODATAEXCEPTION_H
#define NODATAEXCEPTION_H

#include <exception>
#include <string>

using namespace std;

class NoDataException : public exception {
  private:
    string data;
  public:
    NoDataException(const string& data);
    //override what function
    const char* what();
};


#endif //NODATAEXCEPTION_H
