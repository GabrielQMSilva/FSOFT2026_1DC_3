//
// Created by Lord Foog on 5/9/2026.
//
#include <string>
#include <list>
#include <iostream>
#include "ArtistaContainer.h"
using namespace std;

void ArtistaContainer::add(Artista* artista) {
    this->artistas.push_back(artista);
}

list<Artista*>& ArtistaContainer::getAll() {
    return artistas;
}

Artista* ArtistaContainer::getArtista(const string& nome) {
    Artista* artista = search(nome);
    if (artista != NULL) {
        return artista;
    }else{
        cout << "Cliente não existe. " << endl;
        /* -- NO DATA EXCEPTION PLACE HOLDER -- */
        return NULL;
    }
}

Artista *ArtistaContainer::remove(const string& nome) {
    Artista* artista = NULL;
    list<Artista*>::iterator it = this->artistas.begin();
    for (; it != this->artistas.end(); ++it) {
        if (**it == nome) {
            break;
        }
    }
    if (it == this->artistas.end()) {
        artista = *it;
        this->artistas.erase(it);
        delete artista;
        return artista;
    }else{
        cout << "Cliente não existe. " << endl;
        /* -- NO DATA EXCEPTION PLACE HOLDER -- */
        return NULL;
    }
}

Artista* ArtistaContainer::update(const string& nome, int membros, const string& agencia, float budget) {
    Artista* artista = search(nome);
    if (artista != NULL) {
        artista->setArtista(nome, membros, agencia, budget);
        return artista;
    }else{
        cout << "Cliente não existe. " << endl;
        /* -- NO DATA EXCEPTION PLACE HOLDER -- */
        return NULL;
    }
}

