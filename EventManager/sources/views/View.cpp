//
// Created by Lord Foog on 5/9/2026.
//
#include <iostream>

#include <list>

#include "View.h"
#include "Utils.h"
View::View() {
}


int View::LoginView() {
    int op = -1;

    do {
        cout << "\n\n** LOGIN MENU **\n";
        cout << "1 - Login Cliente\n";
        cout << "2 - Login Organizador\n";
        cout << "3 - Registar Cliente\n";
        cout << "\n0 - Sair\n";

        op = Utils::getNumber("Opcao");

    } while(op > 0 && op <= 3);

    return op;
}

int View::ClienteView() {
    int op = -1;

    do {
        cout << "\n\n** MENU CLIENTE **\n";
        cout << "1 - Ver Eventos\n";
        cout << "2 - Comprar Bilhete\n";
        cout << "3 - Carrinho\n";
        cout << "4 - Terminar Sessão\n";
        cout << "\n0 - Logout\n";

        op = Utils::getNumber("Opcao");

    } while(op > 0 && op <= 4);

    return op;
}

int View::OrganizadorView() {
    int op = -1;
    do{
        cout << "\n\n** MENU ORGANIZADOR **\n";
        cout << "1 - Criar Evento\n";
        cout << "2 - Editar Evento\n";
        cout << "3 - Remover Evento\n";
        cout << "4 - Listar Eventos\n";
        cout << "5 - Ver Participantes\n";
        cout << "6 - Terminar Sessão\n";
        cout << "\n0 - Logout\n";

        op = Utils::getNumber("Opcao");

    }while(op > 0 && op <= 6);
    return op;
}