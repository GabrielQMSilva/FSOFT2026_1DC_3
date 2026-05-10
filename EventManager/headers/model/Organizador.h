//
// Created by Lord Foog on 5/7/2026.
//

#ifndef ORGANIZADOR_H
#define ORGANIZADOR_H

#include <iostream>
#include "Cliente.h"
#include "Utilizador.h"
#include <string>
using namespace std;

class Organizador : public Utilizador {
public:
    Organizador(const string& ID, const string& nome, const string& email, const string& password)
        : Utilizador(ID, nome, email, password) {}

};

#endif //ORGANIZADOR_H
