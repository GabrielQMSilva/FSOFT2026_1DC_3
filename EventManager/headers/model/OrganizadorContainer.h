//
// Created by Lord Foog on 5/9/2026.
//

#ifndef ORGANIZADORCONTAINER_H
#define ORGANIZADORCONTAINER_H

#include <list>
#include "Organizador.h"
using namespace std;

class OrganizadorContainer {
private:
    list<Organizador*> organizadores;
    Organizador* search(int ID);

public:
    list<Organizador*> getAll();
    void add(Organizador* organizador);
    Organizador* getOrganizador(int ID);
    Organizador* remove(int ID);
    Organizador* update(int ID, string nome, string email, string password);

};

#endif //ORGANIZADORCONTAINER_H
