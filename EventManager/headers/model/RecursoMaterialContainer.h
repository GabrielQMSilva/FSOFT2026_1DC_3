//
// Created by Lord Foog on 5/9/2026.
//

#ifndef RECURSOMATERIALCONTAINER_H
#define RECURSOMATERIALCONTAINER_H

#include <list>
#include "RecursoMaterial.h"
using namespace std;

class RecursoMaterialContainer {
private:
    list<RecursoMaterial*> recursoMaterial;
    RecursoMaterial* search(int tipo);

public:
    list<RecursoMaterial*> getAll();
    void add(RecursoMaterial* recursoMaterial);
    RecursoMaterial* getRM(int tipo);
    RecursoMaterial* remove(int tipo);

};

#endif //RECURSOMATERIALCONTAINER_H
