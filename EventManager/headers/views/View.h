//
// Created by Lord Foog on 5/9/2026.
//

#ifndef VIEW_H
#define VIEW_H

#include <string>
#include <list>
#include <utility>
#include "Evento.h"

using namespace std;

class View {
public:
    View();
    int clienteView();
    int organizadorView();
    int loginView();
    int carrinhoView(list<pair<Evento*, int>>& carrinho);
    int menuListaEventos(list<Evento*>& eventos);
    int menuDetalheEvento(Evento* evento);
    void menuDetalheEventoOrganizador(Evento* evento);
    int menuBlacklist(list<string>& blacklist);
    void printMessage(string* msg);
};

#endif //VIEW_H