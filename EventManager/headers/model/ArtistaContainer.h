//
// Created by Lord Foog on 5/9/2026.
//

#ifndef ARTISTACONTAINER_H
#define ARTISTACONTAINER_H

#include <list>
#include "Artista.h"
using namespace std;

class ArtistaContainer {
private:
    list<Artista*> artista;
    Artista* search(const string& nome);

public:
    list<Artista*> getAll();
    void add(Artista* artista);
    Artista* getArtista(const string& nome);
    Artista* remove(const string& nome);

};

#endif //ARTISTACONTAINER_H
