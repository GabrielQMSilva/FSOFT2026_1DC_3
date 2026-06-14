#include <iostream>
#include "GestoraEventos.h"
#include "MockData.h"
#include "Controller.h"
#include "OrganizadorService.h"
#include "GestoraEventosRepositoryMemory.h"

using namespace std;

int main() {
    GestoraEventosRepositoryMemory * repo = GestoraEventosRepositoryMemory::getInstance();

    MockData mockData;
    mockData.generateData(*repo->getModel());

    ClienteService *clienteService = new ClienteService(repo);
    OrganizadorService *organizadorService = new OrganizadorService(repo);

    Controller controller(clienteService, organizadorService);
    controller.run();

    delete clienteService;
    delete organizadorService;

    return 0;
}