//
// Created by Lord Foog on 5/17/2026.
//

#ifndef CLIENTEMAPPER_H
#define CLIENTEMAPPER_H

#include "Cliente.h"
#include "ClienteOutDTO.h"
#include "ClienteInDTO.h"


class ClienteMapper{
public:
    static void model2DTO(Cliente* obj, ClienteOutDTO& dto);
    static void listModel2listDTO(list<Cliente*>& objs, list<ClienteOutDTO>& dtos);
};

#endif //CLIENTEMAPPER_H
