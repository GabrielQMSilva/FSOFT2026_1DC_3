//
// Created by Lord Foog on 5/10/2026.
//

#ifndef IDGENERATOR_H
#define IDGENERATOR_H

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include "ClienteContainer.h"
#include "OrganizadorContainer.h"
#include "EventoContainer.h"
#include "AluguerMaterialContainer.h"
using namespace std;

class IDGenerator
{
private:
    static int clienteCounter;
    static int eventoCounter;
    static int organizadorCounter;
    static int aluguerCounter;

public:
    static string generateClienteID(ClienteContainer& container);
    static string generateOrganizadorID(OrganizadorContainer& container);
    static string generateEventoID(EventoContainer& container);
    static string generateAluguerID(AluguerMaterialContainer& container);

};

#endif //IDGENERATOR_H
