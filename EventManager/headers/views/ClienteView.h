//
// Created by gabri on 14/06/2026.
//

#ifndef CLIENTEVIEW_H
#define CLIENTEVIEW_H

#include <string>
#include "View.h"
#include "ClienteInDTO.h"

using namespace std;

class ClienteView {
private:
    View view;

    static bool validateNome(const string& nome);
    static bool validateEmail(const string& email);
    static bool validatePassword(const string& password);

public:
    ClienteView();
    ClienteInDTO handleClienteRegistration();
};

#endif //CLIENTEVIEW_H