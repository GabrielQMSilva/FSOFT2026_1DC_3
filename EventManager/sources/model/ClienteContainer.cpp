//
// Created by Lord Foog on 5/9/2026.
//

#include <string>
#include <list>
#include <iostream>
#include <iomanip>
#include <sstream>
#include "ClienteContainer.h"
using namespace std;

int ClienteContainer::clienteCounter = 0;

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

string ClienteContainer::generateClienteID(ClienteContainer& container) {
    string id;
    do {
        clienteCounter++;
        stringstream ss;

        ss << "C"
           << setw(5)
           << setfill('0')
           << clienteCounter;
        id = ss.str();
    } while (container.idVerification(id));
    return id;
}

void ClienteContainer::add(const string& nome, const string& email, const string& password) {
    string ID = generateClienteID(*this);
    Cliente* cliente = new Cliente(ID, nome, email, password);
    this->clientes.push_back(cliente);
}

list<Cliente*>& ClienteContainer::getAll() {
    return clientes;
}

Cliente* ClienteContainer::getClienteByID(const string& ID) {
    Cliente* cliente = search(ID);
    if (cliente != NULL) {
        return cliente;
    }else{
        cout << "Cliente não existe. " << endl;
        /* -- NO DATA EXCEPTION PLACE HOLDER -- */
        return NULL;
    }
}

Cliente* ClienteContainer::getClienteByNome(const string& nome) {
    Cliente* cliente = search(nome);
    if (cliente != NULL) {
        return cliente;
    }else{
        cout << "Cliente não existe. " << endl;
        /* -- NO DATA EXCEPTION PLACE HOLDER -- */
        return NULL;
    }
}

Cliente* ClienteContainer::getClienteByPassword(const string& password) {
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

