//
// Created by gabri on 14/06/2026.
//

#ifndef EVENTOVIEW_H
#define EVENTOVIEW_H

#include "EventoInDTO.h"
#include "Evento.h"

class EventoView {
public:
    EventoView();
    EventoInDTO handleCriarEvento();
    EventoInDTO editEvento(Evento* evento);
};

#endif //EVENTOVIEW_H