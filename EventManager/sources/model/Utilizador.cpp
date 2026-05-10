//
// Created by Lord Foog on 5/9/2026.
//

#include <iostream>
#include "Utilizador.h"

bool Utilizador::stringValidation(const string& nome) {
    bool result = false;
    if(nome.length() < 3 || nome.length() > 20) {
        result = false;
        return result;
    }
    result = true;
    return result;
}

void Utilizador::setNome() {
    cout << "Introduza o seu nome: ";
    getline(cin, nome);
}
void Utilizador::setEmail() {
    cout << "Introduza o seu email: ";
    getline(cin, email);
}
void Utilizador::setPassword() {
    cout << "Introduza a sua password: ";
    getline(cin, password);
}

void Utilizador::getNome() {
    cout << nome << endl;
}
void Utilizador::getEmail() {
    cout << email << endl;
}
void Utilizador::getPasswaord() {
    cout << password << endl;
}

void Utilizador::terminarSessao() {
    cout << "A encerrar sessão... " << endl;
    system("cls");
    cout << "Sessão encerrada. " << endl;
}
