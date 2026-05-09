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
    Organizador(int ID, string nome, string email, string password)
        : Utilizador(ID, nome, email, password) {}

    void mostrarInfo() override {
        cout << "[Organizador]" << endl;
        Utilizador::mostrarInfo();
    }

};

#endif //ORGANIZADOR_H
