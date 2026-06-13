//
// Created by gabri on 12/06/2026.
//
#include "DuplicatedDataException.h"
#include "MockData.h"

void MockData::insertClientes(ClienteContainer& container) {
    for (size_t i = 0; i < nomeClientes.size(); i++) {
        string email = nomeClientes[i] + "@email.com";
        container.add(nomeClientes[i], email, "ELTEACH2026");
    }
}

/*void MockData::insertEventos(EventoContainer& container) {
    for (size_t i = 0; i < nomeEventos.size(); i++) {
        try {
            container.add(nomeEventos[i]);
        } catch (DuplicatedDataException& e) {
            // do nothing
        }
    }
}*/

void MockData::generateData(GestoraEventos& gestoraEventos){
  	srand (time(NULL));
  	insertClientes(gestoraEventos.getClientes());
}