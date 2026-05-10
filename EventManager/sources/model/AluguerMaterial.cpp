//
// Created by Lord Foog on 5/8/2026.
//

#include <iostream>
#include <string>
#include "Artista.h"
#include "AluguerMaterial.h"
using namespace std;

void AluguerMaterial::setAluguerMaterial(const string& ID, bool estado, Artista* artista) {
    this->ID = ID;
    this->estado = estado;
    this->artista = artista;
    /* Vai existir validação de dados para o artista quando o ArtistaContainer estiver feito */
}

void AluguerMaterial::setHorario(Date &dataInicio, Date &dataFim) {
    this->dataInicio = dataInicio;
    this->dataFim = dataFim;
}

const string& AluguerMaterial::getID() {
    return ID;
}

bool AluguerMaterial::operator == (const string & ID) const{
    if(this->ID == ID){
        return true;
    }
    return false;
}