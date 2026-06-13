//
// Created by Lord Foog on 5/10/2026.
//

#include "Controller.h"
#include "ClienteInDTO.h"
#include "ClienteOutDTO.h"
#include "Utils.h"
#include "NoDataException.h"
#include "InvalidDataException.h"

void Controller::handleClienteLogin() {
    string password = Utils::getString("Password");
    try {
        ClienteOutDTO sessao;
        clienteService->getClienteByPassword(password, sessao);
        int op = -1;
        do {
            op = view.clienteView();
            switch (op) {
                case 1:
                    view.menuListaEventos();
                    break;
                case 2:
                    view.carrinhoView();
                    break;
                default:
                    break;
            }
        } while (op != 0);
    } catch (NoDataException& e) {
        string msg = e.what();
        view.printMessage(&msg);
    }
}


void Controller::handleClienteRegistration() {
    ClienteInDTO dto;
    dto.nome     = Utils::getString("Nome");
    dto.email    = Utils::getString("Email");
    dto.password = Utils::getString("Password");
    try {
        clienteService->add(dto);
        string msg = "Cliente registado com sucesso!";
        view.printMessage(&msg);
    } catch (InvalidDataException& e) {
        string msg = e.what();
        view.printMessage(&msg);
    }
}

void Controller::run() {
    int op = -1;
    do {
        op = this->view.loginView();
        switch (op) {
            case 1:
                handleClienteLogin();
            break;
            case 2:
                handleOrganizadorLogin();
            break;
            case 3:
                handleClienteRegistration();
            break;
            default:
                break;
        }
    } while (op != 0);
}