//
// Created by Lord Foog on 5/9/2026.
//

#include <string>
#include <list>
#include <iostream>
#include <iomanip>
#include <sstream>
#include "ClienteContainer.h"
#include "DuplicatedDataException.h"
#include "NoDataException.h"
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

Cliente* ClienteContainer::searchByNome(const string& nome){
    for (Cliente* c : clientes) {
        if (c->getNome() == nome) return c;
    }
    return NULL;
}

Cliente* ClienteContainer::searchByPassword(const string& password){
    for (Cliente* c : clientes) {
        if (c->getPasswaord() == password) return c;
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
    for (Cliente* c : clientes) {
        if (c->getEmail() == email) {
            throw DuplicatedDataException(email);
        }
    }
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
    Cliente* cliente = searchByNome(nome);
    if (cliente != NULL) {
        return cliente;
    } else {
        throw NoDataException(nome);
    }
}

Cliente* ClienteContainer::getClienteByPassword(const string& password) {
    Cliente* cliente = searchByPassword(password);
    if (cliente != NULL) {
        return cliente;
    } else {
        throw NoDataException("password");
    }
}

Cliente* ClienteContainer::getClienteByNomeAndPassword(const string& nome, const string& password) {
    Cliente* cliente = searchByNome(nome);
    if (cliente == NULL) {
        throw NoDataException(nome);
    }
    if (cliente->getPasswaord() != password) {
        throw NoDataException("password");
    }
    return cliente;
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

