//
// Created by Lord Foog on 5/8/2026.
//

#include <iostream>
#include <string>
#include "Artista.h"
#include "InvalidDataException.h"
using namespace std;

Artista::Artista(const string& nome, int membros, const string& agencia, float budget)
    : nome(nome), membros(membros), agencia(agencia), budget(budget) {}

bool Artista::stringValidation(const string& nome) {
    bool result = false;
    if(nome.length() > 3 && nome.length() <= 20) {
        result = true;
	}
    return result;
}

bool Artista::membrosValidation(int membros) {
    bool result = false;
    if(membros > 0 && membros <= 6) {
        result = true;
    }
    return result;
}

void Artista::setArtista(const string& nome, int membros, const string& agencia, float budget) {
    if (!stringValidation(nome))
        throw InvalidDataException("Nome inválido! Deve ter entre 4 e 20 caracteres.");
    if (!stringValidation(agencia))
        throw InvalidDataException("Agência inválida! Deve ter entre 4 e 20 caracteres.");
    if (!membrosValidation(membros))
        throw InvalidDataException("Número de membros inválido! Deve ser entre 1 e 6.");

    this->nome    = nome;
    this->agencia = agencia;
    this->membros = membros;
    this->budget  = budget;
}

const string& Artista::getNome() {
    return nome;
}

bool Artista::operator == (const string & nome) const{
    if(this->nome == nome){
        return true;
    }
    return false;
}