//
// Created by Lord Foog on 5/8/2026.
//

#include <iostream>
#include <string>
#include "Artista.h"
#include "AluguerMaterial.h"
using namespace std;

void AluguerMaterial::setEstado(bool estado) {
    this->estado = estado;
}

void AluguerMaterial::setHorario(Date &dataInicio, Date &dataFim) {
    this->dataInicio = dataInicio;
    this->dataFim = dataFim;
}

const string& AluguerMaterial::getID() {
    return ID;
}

const Date& AluguerMaterial::getHorario() {
    return dataInicio;
}

bool AluguerMaterial::operator == (const string & ID) const{
    if(this->ID == ID){
        return true;
    }
    return false;
}