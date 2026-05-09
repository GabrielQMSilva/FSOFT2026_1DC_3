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
    string nome;
    string email;
    string password;

public:
    Utilizador(string nome, string email, string password)
        : nome(nome), email(email), password(password) {}

    virtual ~Utilizador() {}

    virtual void dataValidation() {
        cout << "Por favor introduza dados válidos." << endl;
    }

    virtual void mostrarInfo() {
        cout << "Nome: " << nome << endl;
        cout << "Email: " << email << endl;
    }

    virtual void terminarSessao() {
        cout << "A encerrar sessão... " << endl << "Sessão encerrada. " << endl;
    }

    virtual void getNome() {
        cout << nome << endl;
    }

    virtual void alterarDados();

};

#endif //UTILIZADOR_H
