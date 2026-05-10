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
bool Utilizador::passwordValidation(const string& password)
{
    bool result = false;
    int letterCount = 0;
    int numberCount = 0;
    for (char ch : password)
    {
        if (isalpha(ch)) {
            letterCount++;
        }else if (isdigit(ch)) {
            numberCount++;
        }
    }
    if (letterCount >= 6 && numberCount >= 3) {
        result = true;
        return result;
    }
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
    if (passwordValidation(password)) {
        this->password = password;
    }else {
        cout << "Password Inválida!" << endl;
        /* -- INVALID DATA EXCEPTION PLACE HOLDER -- */
    }
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
