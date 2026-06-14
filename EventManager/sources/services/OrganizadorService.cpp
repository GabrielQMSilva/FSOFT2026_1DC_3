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

void OrganizadorService::addToBlacklist(const string& nome) {
    GestoraEventos* model = this->repo->getModel();
    Blacklist& blacklist = model->getBlacklist();
    if (blacklist.contains(nome)) {
        throw DuplicatedDataException("Nome ja esta na blacklist: " + nome);
    }
    blacklist.add(nome);
}

void OrganizadorService::removeFromBlacklist(const string& nome) {
    GestoraEventos* model = this->repo->getModel();
    Blacklist& blacklist = model->getBlacklist();
    if (!blacklist.contains(nome)) {
        throw NoDataException("Nome nao encontrado na blacklist: " + nome);
    }
    blacklist.remove(nome);
}

void OrganizadorService::getBlacklist(list<string>& nomes) {
    GestoraEventos* model = this->repo->getModel();
    nomes = model->getBlacklist().getAll();
}