//
// Created by gabri on 13/06/2026.
//

#ifndef INVALIDDATAEXCEPTION_H
#define INVALIDDATAEXCEPTION_H

#include <exception>
#include <string>

using namespace std;

class InvalidDataException : public exception {
  private:
    string data;

  public:
    invalidDataException(const string& data);
    //override what function
    const char* what();
}



#endif //INVALIDDATAEXCEPTION_H
