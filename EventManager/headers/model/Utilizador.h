//
// Created by Lord Foog on 5/6/2026.
//

#ifndef UTILIZADOR_H
#define UTILIZADOR_H

#include <iostream>
#include <string>
using namespace std;

class Utilizador {
protected:
    int ID;
    string nome;
    string email;
    string password;
    virtual bool dataValidation() {
        bool result = false;
        cout << "Por favor introduza dados válidos." << endl;
        return result;
    }

public:
    Utilizador(int ID, string nome, string email, string password)
        : ID(ID), nome(nome), email(email), password(password) {}
    virtual ~Utilizador();
    virtual void mostrarInfo();
    virtual void setNome();
    virtual void setEmail();
    virtual void setPassword();
    virtual void getNome();
    virtual void getEmail();
    virtual void getPasswaord();
    virtual void terminarSessao();

};

#endif //UTILIZADOR_H
