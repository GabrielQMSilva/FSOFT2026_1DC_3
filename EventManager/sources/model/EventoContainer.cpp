//
// Created by Lord Foog on 5/9/2026.
//

#include <string>
#include <list>
#include <iostream>
#include <iomanip>
#include <sstream>
#include "EventoContainer.h"
#include "NoDataException.h"
using namespace std;

int EventoContainer::eventoCounter = 0;

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

string EventoContainer::generateEventoID(EventoContainer& container) {
    string id;
    do {
        eventoCounter++;
        stringstream ss;

        ss << "E"
           << setw(5)
           << setfill('0')
           << eventoCounter;
        id = ss.str();
    } while (container.idVerification(id));
    return id;
}

list<Evento*>& EventoContainer::getAll() {
    return this->eventos;
}

void EventoContainer::add(const string& nome, const string& tipo, ArtistaContainer& listaArtistas, int lotacao, float preco, Date& horario) {
    string ID = generateEventoID(*this);
    Evento* evento = new Evento(nome, tipo, listaArtistas, lotacao, preco, horario, ID);
    this->eventos.push_back(evento);
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
        throw NoDataException("Evento não existe.");
    }
}

Evento* EventoContainer::update(const string& nome, const string& tipo, const string& ID, ArtistaContainer& listaArtistas, int lotacao, Date& horario) {
    Evento* evento = search(ID);
    if (evento != NULL) {
        evento->setID(ID);
        evento->setDetails(nome, tipo, lotacao, horario);
        evento->setListaArtistas(listaArtistas);
        return evento;
    }else{
        throw NoDataException("Evento não existe.");
    }
}