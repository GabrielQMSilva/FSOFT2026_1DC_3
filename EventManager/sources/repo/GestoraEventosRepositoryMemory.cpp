//
// Created by 1240712 on 19/05/2026.
//
#include "GestoraEventosRepositoryMemory.h"
#include "MockData.h"

GestoraEventosRepositoryMemory* GestoraEventosRepositoryMemory::instance = NULL;
GestoraEventos* GestoraEventosRepositoryMemory::getModel() {
    return model;
}

GestoraEventosRepositoryMemory::GestoraEventosRepositoryMemory(GestoraEventos *model) {
    this->model=model;
}

GestoraEventosRepositoryMemory* GestoraEventosRepositoryMemory::getInstance() {
    if (instance == NULL) {
        MockData mockData;
        GestoraEventos *model = new GestoraEventos("GE");
        mockData.generateData(*model);
        instance = new GestoraEventosRepositoryMemory(model);
    }
    return instance;
}
