//
// Created by Lord Foog on 5/9/2026.
//

#include <string>
#include <list>
#include <iostream>
#include "OrganizadorContainer.h"
using namespace std;

bool OrganizadorContainer::idVerification(const string& id)
{
    for (Organizador* organizador : organizadores)
    {
        if (organizador->getID() == id)
        {
            return true;
        }
    }
    return false;
}

Organizador* OrganizadorContainer::search(const string& ID){
    list<Organizador*>::iterator it = this->organizadores.begin();
    for (; it != this->organizadores.end(); ++it){
        if(**it == ID){
            return *it;
        }
    }
    return NULL;
}

void OrganizadorContainer::add(Organizador* organizador) {
    this->organizadores.push_back(organizador);
}

list<Organizador*>& OrganizadorContainer::getAll() {
    return organizadores;
}

Organizador* OrganizadorContainer::getOrganizador(const string& ID) {
    Organizador* organizador = search(ID);
    if (organizador != NULL) {
        return organizador;
    }else{
        cout << "Cliente não existe. " << endl;
        /* -- NO DATA EXCEPTION PLACE HOLDER -- */
        return NULL;
    }
}

Organizador* OrganizadorContainer::getOrganizadorPassword(const string& password) {
    Organizador* organizador = search(password);
    if (organizador != NULL) {
        return organizador;
    }else{
        cout << "Cliente não existe. " << endl;
        /* -- NO DATA EXCEPTION PLACE HOLDER -- */
        return NULL;
    }
}



Organizador *OrganizadorContainer::remove(const string &ID) {
    Organizador* organizador = NULL;
    list<Organizador*>::iterator it = this->organizadores.begin();
    for (; it != this->organizadores.end(); ++it) {
        if (**it == ID) {
            break;
        }
    }
    if (it == this->organizadores.end()) {
        organizador = *it;
        this->organizadores.erase(it);
        delete organizador;
        return organizador;
    }else{
        cout << "Cliente não existe. " << endl;
        /* -- NO DATA EXCEPTION PLACE HOLDER -- */
        return NULL;
    }
}

Organizador* OrganizadorContainer::update(const string& nome, const string& email, const string& password) {
    Organizador* organizador = search(nome);
    if (organizador != NULL) {
        organizador->setNome(nome);
        organizador->setEmail(email);
        organizador->setPassword(password);
        return organizador;
    }else{
        cout << "Cliente não existe. " << endl;
        /* -- NO DATA EXCEPTION PLACE HOLDER -- */
        return NULL;
    }
}
