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

public:
    Evento(string nome, string tipo, list<Artista*>& listaArtistas, int lotacao, int lotacaoMaxima, Date horario);
    void dataValidation();

};

#endif //EVENTO_H
