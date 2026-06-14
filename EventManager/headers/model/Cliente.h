//
// Created by Lord Foog on 5/6/2026.
//

#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
#include "Utilizador.h"
#include <string>
using namespace std;

class Cliente : public Utilizador {
public:
    Cliente(const string& ID, const string& nome, const string& email, const string& password)
        : Utilizador(ID, nome, email, password) {}
};

#endif //CLIENTE_H
