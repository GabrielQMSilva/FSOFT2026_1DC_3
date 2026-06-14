//
// Created by gabri on 14/06/2026.
//

#ifndef ORGANIZADORSERVICE_H
#define ORGANIZADORSERVICE_H

#include "Organizador.h"
#include "IGestoraEventosRepository.h"

class OrganizadorService {
private:
    IGestoraEventosRepository* repo;
public:
    OrganizadorService(IGestoraEventosRepository* repo);
    Organizador* getOrganizadorByEmailAndPassword(const string& email, const string& password);
};

#endif //ORGANIZADORSERVICE_H