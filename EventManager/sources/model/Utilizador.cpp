//
// Created by Lord Foog on 5/9/2026.
//
#include <cctype>
#include <iostream>
#include "Utilizador.h"

bool Utilizador::stringValidation(const string& nome) {
    bool result = false;
    if(nome.length() > 3 && nome.length() < 20) {
        result = true;
    }
    return result;
}

bool Utilizador::emailValidation(const std::string& email)
{
    size_t arrobaPos = email.find('@');
    size_t pontoPos = email.find('.');

    if (arrobaPos == string::npos || pontoPos == string::npos) {
        return false;
    }
    if (arrobaPos == 0) {
        return false;
    }
    if (pontoPos < arrobaPos) {
        return false;
    }
    if (pontoPos >= email.length()) {
        return false;
    }
    return true;
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
    }
    return result;
}

void Utilizador::setNome() {
    if (stringValidation(nome)) {
        this->nome = nome;
    }else{
        cout << "Nome inválido!" << endl;
        /* -- INVALID DATA EXCEPTION PLACE HOLDER -- */
    }
}
void Utilizador::setEmail() {
    if (emailValidation(email)) {
        this->email = email;
    }else{
        cout << "Email inválido!" << endl;
        /* -- INVALID DATA EXCEPTION PLACE HOLDER -- */
    }
}
void Utilizador::setPassword() {
    if (passwordValidation(password)) {
        this->password = password;
    }else {
        cout << "Password inválida!" << endl;
        /* -- INVALID DATA EXCEPTION PLACE HOLDER -- */
    }
}

const string& Utilizador::getNome() {
    return nome;
}
const string& Utilizador::getEmail() {
    return email;
}
const string& Utilizador::getPasswaord() {
    return password;
}

void Utilizador::terminarSessao() {
    cout << "A encerrar sessão... " << endl;
    system("cls");
    cout << "Sessão encerrada. " << endl;
}
