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
    Evento* search(const string& ID);
    static int eventoCounter;

public:
    list<Evento*>& getAll();
    void add(const string& nome, const string& tipo, ArtistaContainer& listaArtistas, int lotacao, float preco, Date& horario);
    bool idVerification(const string& ID);
    static string generateEventoID(EventoContainer& container);
    Evento* getEventoORG(const string& ID);
    Evento* getEventoCL(const string& nome);
    Evento* update(const string& nome, const string& tipo, const string& ID, ArtistaContainer& listaArtistas, int lotacao, Date& horario);
    Evento* remove(const string& ID);

};

#endif //EVENTOCONTAINER_H
