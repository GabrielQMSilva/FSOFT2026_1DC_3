//
// Created by Lord Foog on 5/17/2026.
//

#ifndef CLIENTEOUTDTO_H
#define CLIENTEOUTDTO_H

#include <string>
using namespace std;

class ClienteOutDTO {
public:
    string nome;
    string ID;
    string email;
    ClienteOutDTO() : nome(""), email(""), ID("") {}
    ClienteOutDTO(const ClienteOutDTO &obj) {
        nome = obj.nome;
        email = obj.email;
        ID = obj.ID;
    }
};

#endif //CLIENTEOUTDTO_H
