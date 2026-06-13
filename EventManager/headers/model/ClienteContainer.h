//
// Created by Lord Foog on 5/9/2026.
//

#ifndef CLIENTECONTAINER_H
#define CLIENTECONTAINER_H

#include <string>
#include <list>
#include "Cliente.h"
using namespace std;

class ClienteContainer {
private:
    list<Cliente*> clientes;
    Cliente* search(const string& ID);
    static int clienteCounter;

public:
    list<Cliente*>& getAll();
    void add(const string& nome, const string& email, const string& password);
    bool idVerification(const string& ID);
    static string generateClienteID(ClienteContainer& container);
    Cliente* getClienteByID(const string& ID);
    Cliente* getClienteByNome(const string& nome);
    Cliente* getClienteByPassword(const string& password);
    Cliente* remove(const string& ID);
    Cliente* update(const string& nome, const string& email, const string& password);

};

#endif //CLIENTECONTAINER_H
