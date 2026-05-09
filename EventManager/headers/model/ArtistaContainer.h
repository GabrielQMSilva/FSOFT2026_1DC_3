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
    Artista* search(int ID);

public:
    list<Artista*> getAll();
    void add(Artista* artista);
    Artista* getArtista(int ID);
    Artista* remove(int ID);

};

#endif //ARTISTACONTAINER_H
