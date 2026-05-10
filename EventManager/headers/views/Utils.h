//
// Created by Lord Foog on 5/9/2026.
//

#ifndef UTILS_H
#define UTILS_H
#include <string>
using namespace std;

class Utils{
public:
    static int getNumber(const string&  label);
    static string getString(const string&  label);
    static string getID(const string&  label);

};

#endif //UTILS_H
