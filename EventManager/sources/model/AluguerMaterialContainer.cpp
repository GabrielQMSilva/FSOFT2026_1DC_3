//
// Created by Lord Foog on 5/9/2026.
//

#include <string>
#include <list>
#include <iostream>
#include <iomanip>
#include <sstream>
#include "AluguerMaterialContainer.h"
#include "NoDataException.h"
using namespace std;

int AluguerMaterialContainer::aluguerCounter = 0;

bool AluguerMaterialContainer::idVerification(const string& id)
{
    for (AluguerMaterial* aluguerMaterial : alugueres)
    {
        if (aluguerMaterial->getID() == id)
        {
            return true;
        }
    }
    return false;
}

AluguerMaterial* AluguerMaterialContainer::search(const string& ID){
    list<AluguerMaterial*>::iterator it = this->alugueres.begin();
    for (; it != this->alugueres.end(); ++it){
        if(**it == ID){
            return *it;
        }
    }
    return NULL;
}

string AluguerMaterialContainer::generateAluguerID(AluguerMaterialContainer& container) {
    string id;
    do {
        aluguerCounter++;
        stringstream ss;

        ss << "A"
           << setw(5)
           << setfill('0')
           << aluguerCounter;
        id = ss.str();
    } while (container.idVerification(id));
    return id;
}

void AluguerMaterialContainer::add(AluguerMaterial* aluguerMaterial) {
    this->alugueres.push_back(aluguerMaterial);
}

list<AluguerMaterial*>& AluguerMaterialContainer::getAll() {
    return alugueres;
}

AluguerMaterial* AluguerMaterialContainer::getAM(const string& ID) {
    AluguerMaterial* aluguerMaterial = search(ID);
    if (aluguerMaterial != NULL) {
        return aluguerMaterial;
    }else{
        throw NoDataException("Aluguer não existe.");
    }
}

AluguerMaterial* AluguerMaterialContainer::remove(const string &ID) {
    AluguerMaterial* aluguerMaterial = NULL;
    list<AluguerMaterial*>::iterator it = this->alugueres.begin();
    for (; it != this->alugueres.end(); ++it) {
        if (**it == ID) {
            break;
        }
    }
    if (it == this->alugueres.end()) {
        aluguerMaterial = *it;
        this->alugueres.erase(it);
        delete aluguerMaterial;
        return aluguerMaterial;
    }else{
        throw NoDataException("Aluguer não existe.");
    }
}

AluguerMaterial* AluguerMaterialContainer::update(const string& ID, bool estado) {
    AluguerMaterial* aluguerMaterial = search(ID);
    if (aluguerMaterial != NULL) {
        aluguerMaterial->setEstado(estado);
        return aluguerMaterial;
    }else{
        throw NoDataException("Aluguer não existe.");
    }
}