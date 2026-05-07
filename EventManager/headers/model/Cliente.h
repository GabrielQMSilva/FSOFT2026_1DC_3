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
    Cliente(string nome, string email, string password)
        : Utilizador(nome, email, password) {}

    void mostrarInfo() override {
        cout << "[Cliente]" << endl;
        Utilizador::mostrarInfo();
    }

};

#endif //CLIENTE_H
