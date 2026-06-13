//
// Created by Lord Foog on 5/8/2026.
//

#include <iostream>
#include <string>
#include "RecursoMaterial.h"
#include "InvalidDataException.h"
using namespace std;

bool RecursoMaterial::stringValidation(const string& tipo) {
    bool result = false;
    if(tipo.length() > 3 && tipo.length() <= 40) {
        result = true;
    }
    return result;
}

bool RecursoMaterial::quantidadeValidation(int quantidade) {
    bool result = false;
    if(quantidade > 0 && quantidade <= 50) {
        result = true;
    }
    return result;
}

void RecursoMaterial::setTipo(const string& tipo) {
    if (!stringValidation(tipo))
        throw InvalidDataException("Tipo de Material Inválido! Deve ter entre 4 e 40 caracteres.");
    this->tipo = tipo;
}

void RecursoMaterial::setQuantidade(int quantidade) {
    if (!quantidadeValidation(quantidade))
        throw InvalidDataException("Quantidade de material inválida! Deve ser entre 1 e 50.");
    this->quantidade = quantidade;
}

const string& RecursoMaterial::getTipo() {
    return tipo;
}

int RecursoMaterial::getQuantidade() {
    return quantidade;
}

bool RecursoMaterial::operator == (const string & tipo) const{
    if(this->tipo == tipo){
        return true;
    }
    return false;
}