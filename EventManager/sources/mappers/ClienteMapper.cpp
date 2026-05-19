//
// Created by Lord Foog on 5/17/2026.
//

#include "ClienteMapper.h"
using namespace std;
void  ClienteMapper::model2DTO(Cliente* obj, ClienteOutDTO& dto){
    dto.nome = obj->getNome();
    dto.email = obj->getEmail();
    dto.ID=obj->getID();
}

void ClienteMapper::listModel2listDTO(list<Cliente*>& objs, list<ClienteOutDTO>& dtos){
    ClienteOutDTO dto;
    for (auto it = objs.begin(); it != objs.end(); ++it){
        model2DTO(*it, dto);
        dtos.push_back(dto);
    }
}
