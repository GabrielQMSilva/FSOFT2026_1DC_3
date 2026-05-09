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
private:
    string historico;
public:
    Cliente(int ID, string nome, string email, string password)
        : Utilizador(ID, nome, email, password) {}

    void mostrarInfo() override {
        cout << "[Cliente]" << endl;
        Utilizador::mostrarInfo();
    }
    void comprarBilhete();
    void setHistorico(string historico);
    const string& getHistorico();

};

#endif //CLIENTE_H
