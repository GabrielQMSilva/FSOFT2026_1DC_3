//
// Created by Lord Foog on 5/8/2026.
//

#include <iostream>
#include <string>
#include "RecursoMaterial.h"
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

void RecursoMaterial::setTipo(string tipo) {
    if(stringValidation(tipo)) {
        this-> tipo = tipo;
    }else{
        cout << "Tipo de Material Inválido!" << endl;
        /* -- INVALID DATA EXCEPTION PLACE HOLDER -- */
    }
}

void RecursoMaterial::setQuantidade(int quantidade) {
    if (quantidadeValidation(quantidade)) {
        this-> quantidade = quantidade;
    }else{
        cout << "Quantidade de material inválida!" << endl;
        /* -- INVALID DATA EXCEPTION PLACE HOLDER -- */
    }
}

const string& RecursoMaterial::getTipo() {
    return tipo;
}

int RecursoMaterial::getQuantidade() {
    return quantidade;
}