//
// Created by Lord Foog on 5/10/2026.
//

#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "View.h"
#include "ClienteService.h"
#include "SessaoService.h"

class Controller {
public:
    enum class Role { UTILIZADOR, CLIENTE, ORGANIZADOR };

    void run();

private:
    View view;
    ClienteService *clienteService;

    void handleClienteLogin();
    void handleOrganizadorLogin();
    void handleClienteRegistration();
};

#endif //CONTROLLER_H
