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

Evento* EventoContainer::getEventoORG(const string& ID) {
    Evento* evento = search(ID);
    if (evento != NULL) {
        return evento;
    }else{
        cout << "Evento não existe. " << endl;
        /* -- NO DATA EXCEPTION PLACE HOLDER -- */
        return NULL;
    }
}

Evento* EventoContainer::getEventoCL(const string& nome) {
    Evento* evento = search(nome);
    if (evento != NULL) {
        return evento;
    }else{
        cout << "Evento não existe. " << endl;
        /* -- NO DATA EXCEPTION PLACE HOLDER -- */
        return NULL;
    }
}

Evento* EventoContainer::remove(const string& ID) {
    Evento* evento = NULL;
    list<Evento*>::iterator it = this->eventos.begin();
    for (; it != this->eventos.end(); ++it){
        if(**it == ID){
            break;
        }
    }
    if(it != this->eventos.end()){
        evento = *it;
        this->eventos.erase(it);
        delete evento;
        return evento;
    }else{
        cout << "Evento não existe. " << endl;
        /* -- NO DATA EXCEPTION PLACE HOLDER -- */
        return NULL;
    }
}

Evento* EventoContainer::update(const string& nome, const string& tipo, const string& ID, list<Artista*>& listaArtistas, int lotacao, int lotacaoMaxima, Date& horario) {
    Evento* evento = search(ID);
    if (evento != NULL) {
        evento->setID(ID);
        evento->setDetails(nome, tipo, lotacao, lotacaoMaxima, horario);
        evento->setListaArtistas(listaArtistas);
        return evento;
    }else{
        cout << "Evento não existe. " << endl;
        /* -- NO DATA EXCEPTION PLACE HOLDER -- */
        return NULL;
    }
}