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
    Cliente(const string& ID, const string& nome, const string& email, const string& password)
        : Utilizador(ID, nome, email, password) {}

    void setHistorico(string historico);
    const string& getHistorico();

    bool operator == (const string& ID) const;
};

#endif //CLIENTE_H
