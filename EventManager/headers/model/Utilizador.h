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
    string ID;
    string nome;
    string email;
    string password;
    bool stringValidation(const string& nome);
    bool passwordValidation(const string& password);
    bool emailValidation(const string& email);

public:
    Utilizador(const string& ID, const string& nome, const string& email, const string& password)
        : ID(ID), nome(nome), email(email), password(password) {}
    virtual ~Utilizador();
    void setNome();
    void setEmail();
    void setPassword();
    void setID();
    const string& getNome();
    const string& getEmail();
    const string& getPasswaord();
    const string& getID();
    void terminarSessao();

    virtual bool operator == (const string& ID) const;
};

#endif //UTILIZADOR_H
