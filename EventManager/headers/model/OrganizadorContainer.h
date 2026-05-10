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
    Organizador* search(const string& ID);

public:
    list<Organizador*>& getAll();
    void add(Organizador* organizador);
    bool idVerification(const string& ID);
    Organizador* getOrganizador(const string& ID);
    Organizador* getOrganizadorPassword(const string& password);
    Organizador* remove(const string& ID);
    Organizador* update(const string& nome, const string& email, const string& password);

};

#endif //ORGANIZADORCONTAINER_H
