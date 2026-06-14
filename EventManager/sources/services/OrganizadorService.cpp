//
// Created by gabri on 14/06/2026.
//

#include "OrganizadorService.h"

OrganizadorService::OrganizadorService(IGestoraEventosRepository* repo) {
    this->repo = repo;
}

Organizador* OrganizadorService::getOrganizadorByEmailAndPassword(const string& email, const string& password) {
    GestoraEventos* model = this->repo->getModel();
    OrganizadorContainer& container = model->getOrganizadores();
    return container.getOrganizadorByEmailAndPassword(email, password);
}