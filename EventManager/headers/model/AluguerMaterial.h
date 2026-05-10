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
    string ID;
    bool estado;
    Artista* artista;
    Date dataInicio;
    Date dataFim;

public:
    AluguerMaterial(string ID, bool estado, Date dataInicio, Date dataFim);
    void setAluguerMaterial(const string& ID, Artista* artista);
    void setEstado(bool estado);
    void setHorario(Date& dataInicio, Date& dataFim);
    const string& getID();
    const Date& getHorario();

    bool operator == (const string& ID) const;
};

#endif //ALUGUER_MATERIAL_H
