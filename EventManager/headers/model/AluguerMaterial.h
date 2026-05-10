//
// Created by Lord Foog on 5/7/2026.
//

#ifndef ALUGUER_MATERIAL_H
#define ALUGUER_MATERIAL_H

#include <string>
#include "Date.h"
#include "Artista.h"
using namespace std;

class AluguerMaterial {
private:
    int ID;
    bool estado;
    Artista* artista;
    Date dataInicio;
    Date dataFim;

public:
    AluguerMaterial(int ID, bool estado, Date dataInicio, Date dataFim);
    void setAluguerMaterial(int ID, bool estado, Artista* artista);
    void setHorario(Date& dataInicio, Date& dataFim);
    const int getID();
    const Date& getHorario();
};

#endif //ALUGUER_MATERIAL_H
