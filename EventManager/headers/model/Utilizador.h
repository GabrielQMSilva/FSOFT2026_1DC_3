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
    virtual bool stringValidation(const string& nome);
    virtual bool emailValidation(const string& email);

public:
    Utilizador(int ID, string nome, string email, string password)
        : ID(ID), nome(nome), email(email), password(password) {}
    virtual ~Utilizador();
    virtual void setNome();
    virtual void setEmail();
    virtual void setPassword();
    virtual void getNome();
    virtual void getEmail();
    virtual void getPasswaord();
    virtual void terminarSessao();

};

#endif //UTILIZADOR_H
