//
// Created by Lord Foog on 5/9/2026.
//

#include <string>
#include <list>
#include <iostream>
#include "RecursoMaterialContainer.h"
#include "NoDataException.h"
using namespace std;

void RecursoMaterialContainer::add(RecursoMaterial* recursoMaterial) {
    this->recursos.push_back(recursoMaterial);
}

list<RecursoMaterial*>& RecursoMaterialContainer::getAll() {
    return recursos;
}

RecursoMaterial* RecursoMaterialContainer::search(const string& tipo){
    list<RecursoMaterial*>::iterator it = this->recursos.begin();
    for (; it != this->recursos.end(); ++it){
        if(**it == tipo){
            return *it;
        }
    }
    return NULL;
}

RecursoMaterial* RecursoMaterialContainer::remove(const string &ID) {
    RecursoMaterial* recursoMaterial = NULL;
    list<RecursoMaterial*>::iterator it = this->recursos.begin();
    for (; it != this->recursos.end(); ++it) {
        if (**it == ID) {
            break;
        }
    }
    if (it != this->recursos.end()) {
        recursoMaterial = *it;
        this->recursos.erase(it);
        delete recursoMaterial;
        return recursoMaterial;
    }else{
        throw NoDataException("Recurso não existe.");
    }
}

RecursoMaterial* RecursoMaterialContainer::update(const string& ID, int quantidade) {
    RecursoMaterial* recursoMaterial = search(ID);
    if (recursoMaterial != NULL) {
        recursoMaterial->setQuantidade(quantidade);
        return recursoMaterial;
    }else{
        throw NoDataException("Recurso não existe.");
    }
}