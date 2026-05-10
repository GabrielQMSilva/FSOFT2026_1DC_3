//
// Created by Lord Foog on 5/9/2026.
//

#include <string>
#include <list>
#include <iostream>
#include "EventoContainer.h"
using namespace std;

bool EventoContainer::idVerification(const string& id)
{
    for (Evento* evento : eventos)
    {
        if (evento->getID() == id)
        {
            return true;
        }
    }
    return false;
}

Evento* EventoContainer::search(const string& ID){
    list<Evento*>::iterator it = this->eventos.begin();
    for (; it != this->eventos.end(); ++it){
        if(**it == ID){
            return *it;
        }
    }
    return NULL;
}

list<Evento*>& EventoContainer::getAll() {
    return this->eventos;
}

void EventoContainer::add(Evento* evento) {
    this->eventos.push_back(evento);
}
