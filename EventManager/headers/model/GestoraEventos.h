//
// Created by Lord Foog on 5/17/2026.
//

#ifndef GESTORAEVENTOS_H
#define GESTORAEVENTOS_H

#include <string>
#include "ClienteContainer.h"
#include "OrganizadorContainer.h"
#include "ArtistaContainer.h"
#include "EventoContainer.h"
#include "Blacklist.h"


class GestoraEventos {
private:
    string nome;
    ClienteContainer clientes;
    OrganizadorContainer organizadores;
    ArtistaContainer artistas;
    EventoContainer eventos;
    Blacklist blacklist;

public:
    GestoraEventos();
    GestoraEventos(const string& nome);
    GestoraEventos(const GestoraEventos& obj);

    const string& getNome() const;
    void setNome(const string& nome);

    ClienteContainer& getClientes();
    OrganizadorContainer& getOrganizadores();
    ArtistaContainer& getArtistas();
    EventoContainer& getEventos();
    Blacklist& getBlacklist();
};

#endif //GESTORAEVENTOS_H
