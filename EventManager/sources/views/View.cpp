//
// Created by Lord Foog on 5/9/2026.
//
#include <iostream>
#include <iomanip>
#include <list>
#include "View.h"
#include "Utils.h"

View::View() {
}

int View::loginView() {
    int op = -1;

    do {
        cout << "\n\n** LOGIN **\n";
        cout << "1 - Login Cliente\n";
        cout << "2 - Login Organizador\n";
        cout << "3 - Registar Cliente\n";
        cout << "\n0 - Sair\n";

        op = Utils::getNumber("Opcao");

    } while(op < 0 || op > 3);

    return op;
};

int View::clienteView() {
    int op = -1;

    do {
        cout << "\n\n** MENU CLIENTE **\n";
        cout << "1 - Ver Eventos\n";
        cout << "2 - Carrinho\n";
        cout << "\n0 - Logout\n";

        op = Utils::getNumber("Opcao");

    } while(op < 0 || op > 2);

    return op;
};

int View::menuListaEventos(list<Evento*>& eventos) {
    int op = -1;
    int size = (int)eventos.size();

    do {
        cout << "\n\n** LISTA DE EVENTOS **\n";
        int idx = 1;
        for (Evento* e : eventos) {
            cout << idx++ << " - " << e->getNome() << " [" << e->getTipo() << "]\n";
        }
        cout << "\n0 - Voltar\n";

        op = Utils::getNumber("Opcao");

    } while (op < 0 || op > size);

    return op;
};

int View::organizadorView() {
    int op = -1;
    do{
        cout << "\n\n** MENU ORGANIZADOR **\n";
        cout << "1 - Criar Evento\n";
        cout << "2 - Editar Evento\n";
        cout << "3 - Remover Evento\n";
        cout << "4 - Listar Eventos\n";
        cout << "5 - Ver Clientes\n";
        cout << "\n0 - Logout\n";

        op = Utils::getNumber("Opcao");

    }while(op < 0 || op > 5);
    return op;
};

int View::carrinhoView(list<pair<Evento*, int>>& carrinho) {
    int op = -1;
    do {
        cout << "\n\n** CARRINHO **\n";
        if (carrinho.empty()) {
            cout << "  (carrinho vazio)\n";
        } else {
            float total = 0.0f;
            for (auto& item : carrinho) {
                cout << "  " << item.first->getNome()
                     << " x" << item.second
                     << "  -  " << fixed << setprecision(2)
                     << item.first->getPreco() * item.second << " EUR\n";
                total += item.first->getPreco() * item.second;
            }
            cout << "  -----------------------\n";
            cout << "  Total: " << fixed << setprecision(2) << total << " EUR\n";
        }
        cout << "\n1 - Efetuar Compra\n";
        cout << "2 - Remover Bilhetes\n";
        cout << "0 - Retroceder\n";

        op = Utils::getNumber("Opcao");
    } while (op < 0 || op > 2);
    return op;
};

int View::menuDetalheEvento(Evento* evento) {
    int year, month, day, hour, minute;
    evento->getHorario().getDate(year, month, day, hour, minute);

    cout << "\n\n** DETALHES DO EVENTO **\n";
    cout << "Nome  : " << evento->getNome() << "\n";
    cout << "Tipo  : " << evento->getTipo() << "\n";
    cout << "Data  : " << setfill('0')
         << setw(2) << day << "/"
         << setw(2) << month << "/"
         << year
         << " às "
         << setw(2) << hour << ":"
         << setw(2) << minute << "\n";
    cout << "Preco : " << fixed << setprecision(2) << evento->getPreco() << " EUR\n";
    cout << "Lugares disponíveis: " << evento->getLotacao() << "\n";

    cout << "Artistas:\n";
    list<Artista*>& artistas = evento->getListaArtistas().getAll();
    if (artistas.empty()) {
        cout << "  (sem artistas definidos)\n";
    } else {
        for (Artista* a : artistas) {
            cout << "  - " << a->getNome() << "\n";
        }
    }

    int op = -1;
    do {
        cout << "\n1 - Adicionar ao Carrinho\n";
        cout << "0 - Voltar\n";
        op = Utils::getNumber("Opcao");
    } while (op < 0 || op > 1);
    return op;
}

void View::printMessage(string *msg) {
    cout << *msg << endl;
}

