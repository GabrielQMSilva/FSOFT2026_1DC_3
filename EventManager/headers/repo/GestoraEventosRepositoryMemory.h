//
// Created by Lord Foog on 5/19/2026.
//

#ifndef GESTORAEVENTOSREPOSITORYMEMORY_H
#define GESTORAEVENTOSREPOSITORYMEMORY_H
#include "IGestoraEventosRepository.h"

class GestoraEventosRepositoryMemory : public IGestoraEventosRepository {
private:
    static GestoraEventosRepositoryMemory* instance;
    GestoraEventos* model;
    GestoraEventosRepositoryMemory(GestoraEventos* model);

public:
    GestoraEventosRepositoryMemory(const GestoraEventosRepositoryMemory& obj) = delete;
    GestoraEventosRepositoryMemory& operator=(const GestoraEventosRepositoryMemory&) = delete;
    GestoraEventos* getModel() override;
    static GestoraEventosRepositoryMemory* getInstance();

};

#endif //GESTORAEVENTOSREPOSITORYMEMORY_H
