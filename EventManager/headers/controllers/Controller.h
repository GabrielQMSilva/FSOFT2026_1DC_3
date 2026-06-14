//
// Created by Lord Foog on 5/10/2026.
//

#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "View.h"
#include "ClienteView.h"
#include "ClienteService.h"
#include "OrganizadorService.h"
#include "SessaoService.h"

class Controller {

private:
    View view;
    ClienteView clienteView;
    ClienteService* clienteService;
    OrganizadorService* organizadorService;

    void handleClienteLogin();
    void handleOrganizadorLogin();
    void handleClienteRegistration();
public:
    Controller(ClienteService* clienteService, OrganizadorService* organizadorService);
    void run();
};

#endif //CONTROLLER_H
