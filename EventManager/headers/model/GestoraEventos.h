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
#include "AluguerMaterialContainer.h"
#include "RecursoMaterialContainer.h"
/* #include "BilheteContainer.h" */


class GestoraEventos {
private:
    string nome;
    ClienteContainer clientes;
    OrganizadorContainer organizadores;
    ArtistaContainer artistas;
    EventoContainer eventos;
    AluguerMaterialContainer alugueres;
    RecursoMaterialContainer recursos;

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
    AluguerMaterialContainer& getAlugueres();
    RecursoMaterialContainer& getRecursos();
};

#endif //GESTORAEVENTOS_H
