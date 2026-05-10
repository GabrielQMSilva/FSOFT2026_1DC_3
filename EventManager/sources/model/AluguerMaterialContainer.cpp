//
// Created by Lord Foog on 5/9/2026.
//

#include <string>
#include <list>
#include <iostream>
#include "AluguerMaterialContainer.h"
using namespace std;

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