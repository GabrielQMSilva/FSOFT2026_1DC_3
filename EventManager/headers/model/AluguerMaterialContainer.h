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
    list<AluguerMaterial*> aluguerMaterial;
    AluguerMaterial* search(int ID);

public:
    list<AluguerMaterial*> getAll();
    void add(AluguerMaterial* aluguerMaterial);
    AluguerMaterial* getAM(int ID);
    AluguerMaterial* remove(int ID);

};

#endif //ALUGUERMATERIALCONTAINER_H
