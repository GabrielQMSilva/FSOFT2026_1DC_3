//
// Created by Lord Foog on 5/17/2026.
//

#ifndef IGESTORAEVENTOSREPOSITORY_H
#define IGESTORAEVENTOSREPOSITORY_H

#include "GestoraEventos.h"

class IGestoraEventosRepository {
public:
    virtual GestoraEventos* getModel() = 0;
    virtual ~IGestoraEventosRepository() = default;
};

#endif //IGESTORAEVENTOSREPOSITORY_H
