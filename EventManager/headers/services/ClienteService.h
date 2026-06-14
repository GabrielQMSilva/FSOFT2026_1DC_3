//
// Created by Lord Foog on 5/17/2026.
//

#ifndef CLIENTESERVICE_H
#define CLIENTESERVICE_H

#include "Evento.h"
#include "ClienteInDTO.h"
#include "ClienteOutDTO.h"
#include "IGestoraEventosRepository.h"

class ClienteService {

private:
    IGestoraEventosRepository* repo;

public:
    ClienteService(IGestoraEventosRepository* repo);

    void add(const ClienteInDTO & obj);
    void getAll(list<ClienteOutDTO>& list);
    void getEventos(list<Evento*>& eventos);
    void getClienteByNome(string nome, ClienteOutDTO & obj);
    void getClienteByNomeAndPassword(string nome, string password, ClienteOutDTO & obj);
    void remove(string ID, ClienteOutDTO & obj);
    void update(string nome, ClienteInDTO & obj);
};

#endif //CLIENTESERVICE_H
