//
// Created by Lord Foog on 5/9/2026.
//

#ifndef VIEW_H
#define VIEW_H

using namespace std;

class View {
public:
    View();
    int clienteView();
    int organizadorView();
    int loginView();
    int carrinhoView();
    int menuListaEventos();
    void printMessage(string* msg);
};

#endif //VIEW_H