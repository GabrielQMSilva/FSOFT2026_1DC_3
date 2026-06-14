//
// Created by Lord Foog on 6/13/2026.
//
#include "GestoraEventos.h"

GestoraEventos::GestoraEventos() {
    this->nome = "";
}

GestoraEventos::GestoraEventos(const string& nome) {
    this->nome = nome;
}

GestoraEventos::GestoraEventos(const GestoraEventos& obj) {
    this->nome = obj.nome;
    this->clientes = obj.clientes;
    this->organizadores = obj.organizadores;
    this->artistas = obj.artistas;
    this->eventos = obj.eventos;
    this->blacklist = obj.blacklist;
}

const string& GestoraEventos::getNome() const {
    return nome;
}

void GestoraEventos::setNome(const string& nome) {
    this->nome = nome;
}

ClienteContainer & GestoraEventos::getClientes() {
    return this->clientes;
}

OrganizadorContainer & GestoraEventos::getOrganizadores() {
    return this->organizadores;
}

ArtistaContainer & GestoraEventos::getArtistas() {
    return this->artistas;
}

EventoContainer & GestoraEventos::getEventos() {
    return this->eventos;
}

Blacklist & GestoraEventos::getBlacklist() {
    return this->blacklist;
}