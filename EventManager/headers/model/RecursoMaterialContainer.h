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
    list<RecursoMaterial*> recursos;
    RecursoMaterial* search(const string& tipo);

public:
    list<RecursoMaterial*>& getAll();
    void add(RecursoMaterial* recursoMaterial);
    RecursoMaterial* getRM(const string& tipo);
    RecursoMaterial* remove(const string& tipo);
    RecursoMaterial* update(const string& tipo, int quantdade);

};

#endif //RECURSOMATERIALCONTAINER_H
