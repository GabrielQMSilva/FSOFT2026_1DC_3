//
// Created by Lord Foog on 5/9/2026.
//

#ifndef ALUGUERMATERIALCONTAINER_H
#define ALUGUERMATERIALCONTAINER_H

#include <list>
#include "AluguerMaterial.h"
using namespace std;

class AluguerMaterialContainer {
private:
    list<AluguerMaterial*> alugueres;
    AluguerMaterial* search(const string& ID);

public:
    list<AluguerMaterial*> getAll();
    void add(AluguerMaterial* aluguerMaterial);
    bool idVerification(const string& ID);
    AluguerMaterial* getAM(const string& ID);
    AluguerMaterial* remove(const string& ID);

};

#endif //ALUGUERMATERIALCONTAINER_H
