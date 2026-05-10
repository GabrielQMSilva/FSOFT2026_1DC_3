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