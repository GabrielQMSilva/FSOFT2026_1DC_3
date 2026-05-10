//
// Created by Lord Foog on 5/8/2026.
//

#include <iostream>
#include <string>
#include "Evento.h"
using namespace std;

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
    if (stringValidation(nome)) {
        this->nome = nome;
    }else{
        cout << "Nome inválido!" << endl;
        /* -- INVALID DATA EXCEPTION PLACE HOLDER -- */
    }
    if (stringValidation(tipo)) {
        this->tipo = tipo;
    }else{
        cout << "Tipo inválido!" << endl;
        /* -- INVALID DATA EXCEPTION PLACE HOLDER -- */
    }
    if (intValidation(lotacaoMaxima)) {
        this->lotacaoMaxima = lotacaoMaxima;
    }else{
        cout << "Número inválido!" << endl;
        /* -- INVALID DATA EXCEPTION PLACE HOLDER -- */
    }
    this->horario = horario;
}

void Evento::setListaArtistas(list<Artista *> &listaArtistas) {
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