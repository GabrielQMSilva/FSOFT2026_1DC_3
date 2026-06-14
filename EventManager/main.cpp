#include <iostream>
#include "GestoraEventos.h"
#include "MockData.h"
#include "Controller.h"
#include "EventoService.h"
#include "OrganizadorService.h"
#include "GestoraEventosRepositoryMemory.h"

using namespace std;

int main() {
    GestoraEventosRepositoryMemory * repo = GestoraEventosRepositoryMemory::getInstance();

    ClienteService *clienteService = new ClienteService(repo);
    EventoService *eventoService = new EventoService(repo);
    OrganizadorService *organizadorService = new OrganizadorService(repo);

    Controller controller(clienteService, eventoService, organizadorService);
    controller.run();

    delete clienteService;
    delete eventoService;
    delete organizadorService;

    return 0;
}