//
// Created by 1240712 on 19/05/2026.
//
#include "GestoraEventosRepositoryMemory.h"

GestoraEventosRepositoryMemory* GestoraEventosRepositoryMemory::instance = NULL;
GestoraEventos* GestoraEventosRepositoryMemory::getModel() {
    return model;
}

GestoraEventosRepositoryMemory::GestoraEventosRepositoryMemory(GestoraEventos *model) {
    this->model=model;
}

GestoraEventosRepositoryMemory* GestoraEventosRepositoryMemory::getInstance() {
    if (instance == nullptr) {
        instance = new GestoraEventosRepositoryMemory(new GestoraEventos());
    }
    return instance;
}
