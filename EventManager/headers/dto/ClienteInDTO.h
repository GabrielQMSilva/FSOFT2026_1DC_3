//
// Created by Lord Foog on 5/17/2026.
//

#ifndef CLIENTEINDTO_H
#define CLIENTEINDTO_H

#include <string>
using namespace std;

class ClienteInDTO {
public:
    string nome;
    string password;
    string email;
    ClienteInDTO() : nome(""), email(""), password("") {}
    ClienteInDTO(const ClienteInDTO &obj) {
        nome = obj.nome;
        email = obj.email;
        password = obj.password;
    }
};


#endif //CLIENTEINDTO_H
