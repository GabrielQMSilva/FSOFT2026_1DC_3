//
// Created by Lord Foog on 5/7/2026.
//

#ifndef EVENTO_H
#define EVENTO_H

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
    string listaArtistas;
    string listaClientes;
    string lotacao;
    string lotacaoMaxima;
    Date horario;

public:
    Evento(string nome, string tipo, Artista listaArtistas, string lotacao, string lotacaoMaxima, Date horario);
    void dataValidation();

};

#endif //EVENTO_H
