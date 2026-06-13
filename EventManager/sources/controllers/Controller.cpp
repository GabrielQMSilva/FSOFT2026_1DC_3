//
// Created by Lord Foog on 5/10/2026.
//

#include <iostream>
#include <list>
#include <utility>
#include "Controller.h"
#include "ClienteInDTO.h"
#include "ClienteOutDTO.h"
#include "Utils.h"
#include "NoDataException.h"
#include "InvalidDataException.h"
#include "DuplicatedDataException.h"

using namespace std;

Controller::Controller(ClienteService *clienteService){
    this->clienteService = clienteService;
}

void Controller::handleClienteLogin() {
    string nome     = Utils::getString("Nome");
    string password = Utils::getString("Password");
    try {
        ClienteOutDTO sessao;
        clienteService->getClienteByNomeAndPassword(nome, password, sessao);

        list<pair<Evento*, int>> carrinho;

        int op = -1;
        do {
            op = view.clienteView();
            switch (op) {
                case 1: {
                    list<Evento*> eventos;
                    clienteService->getEventos(eventos);
                    int escolha = view.menuListaEventos(eventos);
                    if (escolha != 0) {
                        auto it = eventos.begin();
                        advance(it, escolha - 1);
                        if (view.menuDetalheEvento(*it) == 1) {
                            int qty = Utils::getNumber("Quantidade de bilhetes");
                            if (qty > 0) {
                                Evento* ev = *it;
                                bool found = false;
                                for (auto& item : carrinho) {
                                    if (item.first == ev) {
                                        item.second += qty;
                                        found = true;
                                        break;
                                    }
                                }
                                if (!found) carrinho.push_back({ev, qty});
                            }
                        }
                    }
                    break;
                }
                case 2: {
                    int cartOp = view.carrinhoView(carrinho);
                    if (cartOp == 2 && !carrinho.empty()) {
                        list<Evento*> cartEventos;
                        for (auto& item : carrinho) cartEventos.push_back(item.first);
                        int removeEscolha = view.menuListaEventos(cartEventos);
                        if (removeEscolha != 0) {
                            auto it = carrinho.begin();
                            advance(it, removeEscolha - 1);
                            carrinho.erase(it);
                        }
                    }
                    break;
                }
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
    cout << "\n-- Registo de Cliente --\n";
    cout << "  Nome: 4 a 20 caracteres\n";
    cout << "  Email: formato valido (ex: nome@dominio.com)\n";
    cout << "  Password: minimo 6 letras e 3 digitos\n\n";
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
    } catch (DuplicatedDataException& e) {
        string msg = e.what();
        view.printMessage(&msg);
    }
}

void Controller::handleOrganizadorLogin() {
    string msg = "Login de organizador ainda não implementado.";
    view.printMessage(&msg);
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