//
// Created by gabri on 14/06/2026.
//

#include <iostream>
#include <cctype>
#include "ClienteView.h"
#include "Utils.h"
#include "InvalidDataException.h"

using namespace std;

ClienteView::ClienteView() {}

bool ClienteView::validateNome(const string& nome) {
    return nome.length() >= 4 && nome.length() <= 20;
}

bool ClienteView::validateEmail(const string& email) {
    size_t arrobaPos = email.find('@');
    size_t pontoPos  = email.rfind('.');
    return arrobaPos != string::npos && pontoPos != string::npos
        && arrobaPos != 0 && pontoPos > arrobaPos
        && pontoPos < email.length() - 1;
}

bool ClienteView::validatePassword(const string& password) {
    int letters = 0, digits = 0;
    for (char c : password) {
        if (isalpha((unsigned char)c)) letters++;
        else if (isdigit((unsigned char)c)) digits++;
    }
    return letters >= 6 && digits >= 3;
}

ClienteInDTO ClienteView::handleClienteRegistration() {
    cout << "\n-- Registo de Cliente --\n";
    cout << "  Nome: 4 a 20 caracteres\n";
    cout << "  Email: formato valido (ex: nome@dominio.com)\n";
    cout << "  Password: minimo 6 letras e 3 digitos\n\n";

    ClienteInDTO dto;
    dto.nome     = Utils::getString("Nome");
    dto.email    = Utils::getString("Email");
    dto.password = Utils::getString("Password");

    if (!validateNome(dto.nome))
        throw InvalidDataException("nome (deve ter entre 4 e 20 caracteres)");
    if (!validateEmail(dto.email))
        throw InvalidDataException("email");
    if (!validatePassword(dto.password))
        throw InvalidDataException("password (minimo: 6 letras e 3 digitos)");

    return dto;
}