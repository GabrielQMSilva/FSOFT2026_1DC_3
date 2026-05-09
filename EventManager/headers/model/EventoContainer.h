//
// Created by Lord Foog on 5/9/2026.
//

#ifndef EVENTOCONTAINER_H
#define EVENTOCONTAINER_H

#include <string>
#include <list>
#include <iostream>
#include "Evento.h"
using namespace std;

class EventoContainer {
private:
    list<Evento*> eventos;
public:
    list<Evento*> getAll(string nome);
    void add(Evento* evento);
    Evento* remove(int ID);

};

#endif //EVENTOCONTAINER_H
