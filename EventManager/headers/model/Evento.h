//
// Created by Lord Foog on 5/7/2026.
//

#ifndef EVENTO_H
#define EVENTO_H

#include <list>
#include <string>
#include <iostream>
#include "Date.h"
#include "Artista.h"
#include "Cliente.h"
using namespace std;

class Evento {
private:
    string nome;
    string tipo;
    int ID;
    list<Artista*>& listaArtistas;
    list<Cliente*>& listaClientes;
    int lotacao;
    int lotacaoMaxima;
    Date horario;
    bool dataValidation();

public:
    Evento(string nome, string tipo, int ID, list<Artista*>& listaArtistas, int lotacao, int lotacaoMaxima, Date& horario);
    void setDetails(string nome, string tipo, int lotacao, int lotacaoMaxima, Date& horario);
    void setID(int ID);
    const int getID() const;
    const string& getDetails() const;
    const list<Artista*>& getListaArtistas() const;
    const list<Cliente*>& getListaClientes() const;

};

#endif //EVENTO_H
