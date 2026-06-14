//
// Created by Lord Foog on 5/10/2026.
//

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

Controller::Controller(ClienteService *clienteService, EventoService *eventoService, OrganizadorService *organizadorService) {
    this->clienteService = clienteService;
    this->eventoService = eventoService;
    this->organizadorService = organizadorService;
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
                    if (cartOp == 1 && !carrinho.empty()) {
                        bool valid = true;
                        for (auto& item : carrinho) {
                            if (item.second > item.first->getLotacao()) {
                                string msg = "Lugares insuficientes para o evento: " + item.first->getNome();
                                view.printMessage(&msg);
                                valid = false;
                                break;
                            }
                        }
                        if (valid) {
                            for (auto& item : carrinho)
                                item.first->decreaseLotacao(item.second);
                            carrinho.clear();
                            string msg = "Compra efetuada com sucesso";
                            view.printMessage(&msg);
                        }
                    } else if (cartOp == 2 && !carrinho.empty()) {
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
    try {
        ClienteInDTO dto = clienteView.handleClienteRegistration();
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
    string email    = Utils::getString("Email");
    string password = Utils::getString("Password");
    try {
        Organizador* organizador = organizadorService->getOrganizadorByEmailAndPassword(email, password);

        int op = -1;
        do {
            op = view.organizadorView();
            switch (op) {
                case 4: {
                    list<Evento*> eventos;
                    clienteService->getEventos(eventos);
                    int escolha = view.menuListaEventos(eventos);
                    if (escolha != 0) {
                        auto it = eventos.begin();
                        advance(it, escolha - 1);
                        view.menuDetalheEventoOrganizador(*it);
                    }
                    break;
                }
                case 5: {
                    list<ClienteOutDTO> clientes;
                    clienteService->getAll(clientes);
                    clienteView.printClientes(clientes);
                    break;
                }
                case 1: {
                    try {
                        EventoInDTO dto = eventoView.handleCriarEvento();
                        eventoService->add(dto);
                        string msg = "Evento criado com sucesso!";
                        view.printMessage(&msg);
                    } catch (InvalidDataException& e) {
                        string msg = e.what();
                        view.printMessage(&msg);
                    }
                    break;
                }
                case 2: {
                    try {
                        list<Evento*> eventos;
                        clienteService->getEventos(eventos);
                        int escolha = view.menuListaEventos(eventos);
                        if (escolha != 0) {
                            auto it = eventos.begin();
                            advance(it, escolha - 1);
                            EventoInDTO dto = eventoView.editEvento(*it);
                            eventoService->update((*it)->getID(), dto);
                            string msg = "Evento atualizado com sucesso!";
                            view.printMessage(&msg);
                        }
                    } catch (InvalidDataException& e) {
                        string msg = e.what();
                        view.printMessage(&msg);
                    }
                    break;
                }
                default:
                    if (op != 0) {
                        string msg = "Funcionalidade não implementada.";
                        view.printMessage(&msg);
                    }
                    break;
            }
        } while (op != 0);
    } catch (NoDataException& e) {
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