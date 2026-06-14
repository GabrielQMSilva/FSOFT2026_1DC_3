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
    static int aluguerCounter;

public:
    list<AluguerMaterial*>& getAll();
    void add(AluguerMaterial* aluguerMaterial);
    bool idVerification(const string& ID);
    static string generateAluguerID(AluguerMaterialContainer& container);
    AluguerMaterial* remove(const string& ID);
    AluguerMaterial* update(const string& ID, bool estado);

};

#endif //ALUGUERMATERIALCONTAINER_H
