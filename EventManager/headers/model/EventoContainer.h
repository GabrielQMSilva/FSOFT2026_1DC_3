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
    Evento* search(int ID);

public:
    list<Evento*> getAll();
    void add(Evento* evento);
    Evento* getEventoORG(int ID);
    Evento* getEventoCL(string& nome);
    Evento* update(string& nome, string& tipo, int ID, list<Artista*>& listaArtistas, int lotacao, int lotacaoMaxima, Date& horario);
    Evento* remove(int ID);

};

#endif //EVENTOCONTAINER_H
