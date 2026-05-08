//
// Created by Lord Foog on 5/7/2026.
//

#ifndef ALUGUER_MATERIAL_H
#define ALUGUER_MATERIAL_H

#include <string>
#include "Date.h"
using namespace std;

class AluguerMaterial {
private:
    string ID;
    string estado;
    Date dataInicio;
    Date dataFim;

public:
    AluguerMaterial(string ID, string estado, Date dataInicio, Date dataFim);
    void dataValidation();

};

#endif //ALUGUER_MATERIAL_H
