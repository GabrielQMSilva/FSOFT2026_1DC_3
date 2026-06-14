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
    void addToBlacklist(const string& id);
    void removeFromBlacklist(const string& id);
    void getBlacklist(list<string>& ids);
    bool isBlacklisted(const string& id);
};

#endif //ORGANIZADORSERVICE_H