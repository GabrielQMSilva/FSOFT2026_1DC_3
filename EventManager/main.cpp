#include <iostream>
#include "GestoraEventos.h"
#include "MockData.h"
#include "Controller.h"
#include "GestoraEventosRepositoryMemory.h"

using namespace std;

int main() {
    GestoraEventosRepositoryMemory * repo = GestoraEventosRepositoryMemory::getInstance();

    MockData mockData;
    mockData.generateData(*repo->getModel());

    ClienteService *clienteService = new ClienteService(repo);

    Controller controller(clienteService);
    controller.run();

    delete clienteService;

    return 0;
}