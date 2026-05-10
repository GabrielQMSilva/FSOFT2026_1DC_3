//
// Created by Lord Foog on 5/9/2026.
//

#include <string>
#include <list>
#include <iostream>
#include "RecursoMaterialContainer.h"
using namespace std;

void RecursoMaterialContainer::add(RecursoMaterial* recursoMaterial) {
    this->recursos.push_back(recursoMaterial);
}

list<RecursoMaterial*>& RecursoMaterialContainer::getAll() {
    return recursos;
}

RecursoMaterial* RecursoMaterialContainer::getRM(const string& ID) {
    RecursoMaterial* recursoMaterial = search(ID);
    if (recursoMaterial != NULL) {
        return recursoMaterial;
    }else{
        cout << "Aluguer não existe. " << endl;
        /* -- NO DATA EXCEPTION PLACE HOLDER -- */
        return NULL;
    }
}

RecursoMaterial* RecursoMaterialContainer::remove(const string &ID) {
    RecursoMaterial* recursoMaterial = NULL;
    list<RecursoMaterial*>::iterator it = this->recursos.begin();
    for (; it != this->recursos.end(); ++it) {
        if (**it == ID) {
            break;
        }
    }
    if (it == this->recursos.end()) {
        recursoMaterial = *it;
        this->recursos.erase(it);
        delete recursoMaterial;
        return recursoMaterial;
    }else{
        cout << "Aluguer não existe. " << endl;
        /* -- NO DATA EXCEPTION PLACE HOLDER -- */
        return NULL;
    }
}

RecursoMaterial* RecursoMaterialContainer::update(const string& ID, int quantidade) {
    RecursoMaterial* recursoMaterial = search(ID);
    if (recursoMaterial != NULL) {
        recursoMaterial->setQuantidade(quantidade);
        return recursoMaterial;
    }else{
        cout << "Cliente não existe. " << endl;
        /* -- NO DATA EXCEPTION PLACE HOLDER -- */
        return NULL;
    }
}