//
// Created by Lord Foog on 5/9/2026.
//
#include <cctype>
#include <iostream>
#include "Utilizador.h"
#include "InvalidDataException.h"

Utilizador::~Utilizador() = default;

bool Utilizador::stringValidation(const string& nome) {
    bool result = false;
    if(nome.length() > 3 && nome.length() <= 20) {
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

void Utilizador::setNome(const string& nome) {
    if (!stringValidation(nome))
        throw InvalidDataException("Nome inválido! Deve ter entre 4 e 20 caracteres.");
    this->nome = nome;
}
void Utilizador::setEmail(const string& email) {
    if (!emailValidation(email))
        throw InvalidDataException("Email inválido!");
    this->email = email;
}
void Utilizador::setPassword(const string& password) {
    if (!passwordValidation(password))
        throw InvalidDataException("Password inválida! Deve ter no mínimo 6 letras e 3 dígitos.");
    this->password = password;
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
const string& Utilizador::getID() {
    return ID;
}

bool Utilizador::operator == (const string & ID) const{
    if(this->ID == ID){
        return true;
    }
    return false;
}

