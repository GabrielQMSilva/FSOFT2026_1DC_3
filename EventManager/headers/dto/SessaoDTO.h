//
// Created by Lord Foog on 5/19/2026.
//

#ifndef SESSAODTO_H
#define SESSAODTO_H

#include <string>
using namespace std;

class SessaoDTO {
public:
    string nome;
    string ID;
    SessaoDTO() : nome(""), ID("") {}
    SessaoDTO(const SessaoDTO &obj) {
        nome = obj.nome;
        ID = obj.ID;
    }
};

#endif //SESSAODTO_H
