//
// Created by Lord Foog on 5/10/2026.
//

#include "IDGenerator.h"
#include "ClienteContainer.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

int IDGenerator::clienteCounter = 0;
int IDGenerator::organizadorCounter = 0;
int IDGenerator::eventoCounter = 0;
int IDGenerator::aluguerCounter = 0;

string IDGenerator::generateClienteID(ClienteContainer& container) {

    string id;

    do {
        clienteCounter++;
        stringstream ss;

        ss << "C"
           << setw(5)
           << setfill('0')
           << clienteCounter;
        id = ss.str();

    } while (container.idVerification(id));

    return id;
}

string IDGenerator::generateEventoID(EventoContainer& container) {

    string id;

    do {
        clienteCounter++;
        stringstream ss;

        ss << "O"
           << setw(5)
           << setfill('0')
           << clienteCounter;
        id = ss.str();

    } while (container.idVerification(id));

    return id;
}

string IDGenerator::generateOrganizadorID(OrganizadorContainer& container) {

    string id;

    do {
        clienteCounter++;
        stringstream ss;

        ss << "E"
           << setw(5)
           << setfill('0')
           << clienteCounter;
        id = ss.str();

    } while (container.idVerification(id));

    return id;
}

string IDGenerator::generateAluguerID(AluguerMaterialContainer& container) {

    string id;

    do {
        clienteCounter++;
        stringstream ss;

        ss << "A"
           << setw(5)
           << setfill('0')
           << clienteCounter;
        id = ss.str();

    } while (container.idVerification(id));

    return id;
}
