//
// Created by Lord Foog on 5/9/2026.
//

#ifndef CLIENTECONTAINER_H
#define CLIENTECONTAINER_H

#include <string>
#include <list>
#include <iostream>
#include "Cliente.h"
using namespace std;

using namespace std;

class ClienteContainer {
private:
    list<Cliente*> clientes;
public:
    list<Cliente*> getAll(string nome);
    void add(Cliente* cliente);

};

#endif //CLIENTECONTAINER_H
