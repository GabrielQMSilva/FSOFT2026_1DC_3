//
// Created by gabri on 14/06/2026.
//

#ifndef EVENTOSERVICE_H
#define EVENTOSERVICE_H

#include "IGestoraEventosRepository.h"
#include "EventoInDTO.h"

class EventoService {
private:
    IGestoraEventosRepository* repo;
public:
    EventoService(IGestoraEventosRepository* repo);
    void add(EventoInDTO& dto);
    void update(const string& ID, EventoInDTO& dto);
};

#endif //EVENTOSERVICE_H
