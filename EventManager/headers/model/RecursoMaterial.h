//
// Created by Lord Foog on 5/7/2026.
//

#ifndef RECURSO_MATERIAL_H
#define RECURSO_MATERIAL_H

#include <string>
using namespace std;

class RecursoMaterial {
private:
    int quantidade;
    string tipo;
    bool dataValidation();

public:
    RecursoMaterial(string quantidade, string tipo);
    void setTipo(string tipo);
    void setQuantidade(int quantidade);
    const string getTipo();
    int getQuantidade();

};

#endif //RECURSO_MATERIAL_H
