//
// Created by Lord Foog on 5/8/2026.
//

#include <iostream>
#include <string>
#include "Evento.h"
#include "InvalidDataException.h"
using namespace std;

Evento::Evento(const string &nome, const string &tipo, ArtistaContainer &listaArtistas, int lotacao, int lotacaoMaxima, float preco, Date &horario, const string &ID)
  : nome(nome),
    tipo(tipo),
    ID(ID),
    listaArtistas(listaArtistas),
    lotacao(lotacao),
    lotacaoMaxima(lotacaoMaxima),
    preco(preco),
    horario(horario) {}

bool Evento::stringValidation(const string& nome) {
    bool result = false;
    if(nome.length() > 3 && nome.length() <= 20) {
        result = true;
    }
    return result;
}

bool Evento::intValidation(const int& lotacaoMaxima) {
    bool result = false;
    if(lotacaoMaxima > 0 && lotacaoMaxima <= 500) {
        result = true;
    }
    return result;
}

void Evento::setDetails(const string &nome, const string &tipo, int lotacaoMaxima, Date &horario) {
    if (!stringValidation(nome))
        throw InvalidDataException("Nome inválido! Deve ter entre 4 e 20 caracteres.");
    if (!stringValidation(tipo))
        throw InvalidDataException("Tipo inválido! Deve ter entre 4 e 20 caracteres.");
    if (!intValidation(lotacaoMaxima))
        throw InvalidDataException("Lotação máxima inválida! Deve ser entre 1 e 500.");

    this->nome = nome;
    this->tipo = tipo;
    this->lotacaoMaxima = lotacaoMaxima;
    this->horario = horario;
}

void Evento::setListaArtistas(ArtistaContainer& listaArtistas) {
    this->listaArtistas = listaArtistas;
}

void Evento::setID(const string &ID) {
    this->ID = ID;
}

bool Evento::operator == (const string & ID) const{
    if(this->ID == ID){
        return true;
    }
    return false;
}

const string& Evento::getID() const {
    return ID;
}

const string& Evento::getNome() const {
    return nome;
}

const string& Evento::getTipo() const {
    return tipo;
}

float Evento::getPreco() const {
    return preco;
}

const Date& Evento::getHorario() const {
    return horario;
}

ArtistaContainer& Evento::getListaArtistas() {
    return listaArtistas;
}

ClienteContainer& Evento::getListaClientes() {
    return listaClientes;
}