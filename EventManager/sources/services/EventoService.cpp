//
// Created by gabri on 14/06/2026.
//

#include "EventoService.h"
#include "GestoraEventos.h"

EventoService::EventoService(IGestoraEventosRepository* repo) {
    this->repo = repo;
}

void EventoService::add(EventoInDTO& dto) {
    GestoraEventos* model = this->repo->getModel();
    EventoContainer& container = model->getEventos();
    container.add(dto.nome, dto.tipo, dto.listaArtistas, dto.lotacao, dto.preco, dto.horario);
}

void EventoService::update(const string& ID, EventoInDTO& dto) {
    GestoraEventos* model = this->repo->getModel();
    EventoContainer& container = model->getEventos();
    container.update(dto.nome, dto.tipo, ID, dto.listaArtistas, dto.lotacao, dto.horario);
}

void EventoService::remove(const string& ID) {
    GestoraEventos* model = this->repo->getModel();
    EventoContainer& container = model->getEventos();
    container.remove(ID);
}
