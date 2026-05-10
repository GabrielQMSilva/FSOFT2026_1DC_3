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