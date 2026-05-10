//
// Created by Lord Foog on 5/8/2026.
//

#include <iostream>
#include <string>
#include "Evento.h"
using namespace std;

bool Evento::stringValidation(const string& nome) {
    bool result = false;
    cout << "Por favor introduza dados válidos." << endl;
    return result;
}

bool Evento::intValidation(const int& number) {

}

void Evento::setID(const string &ID) {
    this->ID = ID;
}

bool Evento::operator == (const string & ID) const{
    if(this->ID == ID){
        return true;
    }
    return false;
}