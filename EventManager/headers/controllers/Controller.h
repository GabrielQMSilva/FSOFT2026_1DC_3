//
// Created by Lord Foog on 5/10/2026.
//

#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "View.h"
#include "ClienteView.h"
#include "ClienteService.h"
#include "SessaoService.h"

class Controller {

private:
    View view;
    ClienteView clienteView;
    ClienteService* clienteService;

    void handleClienteLogin();
    void handleOrganizadorLogin();
    void handleClienteRegistration();
public:
    Controller(ClienteService* clienteService);
    void run();
};

#endif //CONTROLLER_H
