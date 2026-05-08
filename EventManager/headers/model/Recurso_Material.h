//
// Created by Lord Foog on 5/7/2026.
//

#ifndef RECURSO_MATERIAL_H
#define RECURSO_MATERIAL_H

#include <string>
using namespace std;

class RecursoMaterial {
private:
    string quantidade;
    string tipo;

public:
    RecursoMaterial(string quantidade, string tipo);
    void dataValidation();

};


#endif //RECURSO_MATERIAL_H
