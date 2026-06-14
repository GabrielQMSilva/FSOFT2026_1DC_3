//
// Created by gabri on 14/06/2026.
//

#ifndef EVENTOINDTO_H
#define EVENTOINDTO_H

#include <string>
#include "Date.h"
#include "ArtistaContainer.h"

using namespace std;

class EventoInDTO {
public:
    string nome;
    string tipo;
    int lotacao;
    float preco;
    Date horario;
    ArtistaContainer listaArtistas;

    EventoInDTO() : nome(""), tipo(""), lotacao(0), preco(0.0f), horario() {}
};

#endif //EVENTOINDTO_H