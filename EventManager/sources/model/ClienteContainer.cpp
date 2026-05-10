//
// Created by Lord Foog on 5/9/2026.
//

#include <string>
#include <list>
#include <iostream>
#include "ClienteContainer.h"
using namespace std;

bool ClienteContainer::idVerification(const string& id)
{
    for (Cliente* cliente : clientes)
    {
        if (cliente->getID() == id)
        {
            return true;
        }
    }
    return false;
}

Cliente* ClienteContainer::search(const string& ID){
    list<Cliente*>::iterator it = this->clientes.begin();
    for (; it != this->clientes.end(); ++it){
        if(**it == ID){
            return *it;
        }
    }
    return NULL;
}

void ClienteContainer::add(Cliente* cliente) {
    this->clientes.push_back(cliente);
}

list<Cliente*>& ClienteContainer::getAll() {
    return clientes;
}

Cliente* ClienteContainer::getClienteOrg(const string& ID) {
    Cliente* cliente = search(ID);
    if (cliente != NULL) {
        return cliente;
    }else{
        cout << "Cliente não existe. " << endl;
        /* -- NO DATA EXCEPTION PLACE HOLDER -- */
        return NULL;
    }
}

Cliente* ClienteContainer::getClienteNome(const string& nome) {
    Cliente* cliente = search(nome);
    if (cliente != NULL) {
        return cliente;
    }else{
        cout << "Cliente não existe. " << endl;
        /* -- NO DATA EXCEPTION PLACE HOLDER -- */
        return NULL;
    }
}

Cliente* ClienteContainer::getClientePassword(const string& password) {
    Cliente* cliente = search(password);
    if (cliente != NULL) {
        return cliente;
    }else{
        cout << "Cliente não existe. " << endl;
        /* -- NO DATA EXCEPTION PLACE HOLDER -- */
        return NULL;
    }
}

Cliente *ClienteContainer::remove(const string &ID) {
    Cliente* cliente = NULL;
    list<Cliente*>::iterator it = this->clientes.begin();
    for (; it != this->clientes.end(); ++it) {
        if (**it == ID) {
            break;
        }
    }
    if (it == this->clientes.end()) {
        cliente = *it;
        this->clientes.erase(it);
        delete cliente;
        return cliente;
    }else{
        cout << "Cliente não existe. " << endl;
        /* -- NO DATA EXCEPTION PLACE HOLDER -- */
        return NULL;
    }
}

Cliente* ClienteContainer::update(const string& nome, const string& email, const string& password) {
    Cliente* cliente = search(nome);
    if (cliente != NULL) {
        cliente->setNome(nome);
        cliente->setEmail(email);
        cliente->setPassword(password);
        return cliente;
    }else{
        cout << "Cliente não existe. " << endl;
        /* -- NO DATA EXCEPTION PLACE HOLDER -- */
        return NULL;
    }
}

