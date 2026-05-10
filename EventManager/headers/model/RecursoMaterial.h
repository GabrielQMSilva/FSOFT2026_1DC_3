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
    bool stringValidation(const string& tipo);
    bool quantidadeValidation(int quantidade);

public:
    RecursoMaterial(int quantidade, const string& tipo);
    void setTipo(const string& tipo);
    void setQuantidade(int quantidade);
    const string& getTipo();
    int getQuantidade();

    bool operator == (const string& tipo) const;
};

#endif //RECURSO_MATERIAL_H
