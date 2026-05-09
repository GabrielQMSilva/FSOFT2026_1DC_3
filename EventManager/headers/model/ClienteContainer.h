//
// Created by Lord Foog on 5/9/2026.
//

#ifndef CLIENTECONTAINER_H
#define CLIENTECONTAINER_H

#include <list>
#include "Cliente.h"
using namespace std;

class ClienteContainer {
private:
    list<Cliente*> clientes;
    Cliente* search(int ID);

public:
    list<Cliente*> getAll();
    void add(Cliente* cliente);
    Cliente* getCliente(int ID);
    Cliente* remove(int ID);
    Cliente* update(int ID, string nome, string email, string password);

};

#endif //CLIENTECONTAINER_H
