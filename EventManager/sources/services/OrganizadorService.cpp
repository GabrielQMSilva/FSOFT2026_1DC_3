//
// Created by gabri on 14/06/2026.
//

#include "OrganizadorService.h"
#include "DuplicatedDataException.h"
#include "NoDataException.h"

OrganizadorService::OrganizadorService(IGestoraEventosRepository* repo) {
    this->repo = repo;
}

Organizador* OrganizadorService::getOrganizadorByEmailAndPassword(const string& email, const string& password) {
    GestoraEventos* model = this->repo->getModel();
    OrganizadorContainer& container = model->getOrganizadores();
    return container.getOrganizadorByEmailAndPassword(email, password);
}

void OrganizadorService::addToBlacklist(const string& id) {
    GestoraEventos* model = this->repo->getModel();
    if (!model->getClientes().idVerification(id)) {
        throw NoDataException("Cliente nao encontrado com ID: " + id);
    }
    Blacklist& blacklist = model->getBlacklist();
    if (blacklist.contains(id)) {
        throw DuplicatedDataException("ID ja esta na blacklist: " + id);
    }
    blacklist.add(id);
}

void OrganizadorService::removeFromBlacklist(const string& id) {
    GestoraEventos* model = this->repo->getModel();
    Blacklist& blacklist = model->getBlacklist();
    if (!blacklist.contains(id)) {
        throw NoDataException("ID nao encontrado na blacklist: " + id);
    }
    blacklist.remove(id);
}

void OrganizadorService::getBlacklist(list<string>& ids) {
    GestoraEventos* model = this->repo->getModel();
    ids = model->getBlacklist().getAll();
}

bool OrganizadorService::isBlacklisted(const string& id) {
    return this->repo->getModel()->getBlacklist().contains(id);
}