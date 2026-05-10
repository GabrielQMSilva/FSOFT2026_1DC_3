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
    Cliente* search(const string& ID);

public:
    list<Cliente*>& getAll();
    void add(Cliente* cliente);
    bool idVerification(const string& ID);
    Cliente* getClienteOrg(const string& ID);
    Cliente* getClienteNome(const string& nome);
    Cliente* getClientePassword(const string& password);
    Cliente* remove(const string& ID);
    Cliente* update(const string& nome, const string& email, const string& password);

};

#endif //CLIENTECONTAINER_H
