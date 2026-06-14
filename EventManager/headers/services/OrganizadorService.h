//
// Created by gabri on 14/06/2026.
//

#ifndef ORGANIZADORSERVICE_H
#define ORGANIZADORSERVICE_H

#include <list>
#include <string>
#include "Organizador.h"
#include "IGestoraEventosRepository.h"

using namespace std;

class OrganizadorService {
private:
    IGestoraEventosRepository* repo;
public:
    OrganizadorService(IGestoraEventosRepository* repo);
    Organizador* getOrganizadorByEmailAndPassword(const string& email, const string& password);
    void addToBlacklist(const string& nome);
    void removeFromBlacklist(const string& nome);
    void getBlacklist(list<string>& nomes);
};

#endif //ORGANIZADORSERVICE_H