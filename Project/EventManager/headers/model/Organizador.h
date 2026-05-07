//
// Created by Lord Foog on 5/7/2026.
//

#ifndef ORGANIZADOR_H
#define ORGANIZADOR_H

#include <iostream>
#include "Utilizador.h"
#include <string>
using namespace std;

class Organizador : public Utilizador {
public:
    Organizador(string nome, string email, string password)
        : Utilizador(nome, email, password) {}

    void consultarEventos() {
        cout << "A mostrar lista de eventos..." << endl;
    }

    void mostrarInfo() override {
        cout << "[Cliente]" << endl;
        Utilizador::mostrarInfo();
    }

};

#endif //ORGANIZADOR_H
