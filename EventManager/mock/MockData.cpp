//
// Created by gabri on 12/06/2026.
//
#include "MockData.h"

void MockData::insertClientes(ClienteContainer& container) {
    for (size_t i = 0; i < nomeClientes.size(); i++) {
        string email = nomeClientes[i] + "@email.com";
        container.add(nomeClientes[i], email, "ELTEACH2026");
    }
}

void MockData::insertEventos(EventoContainer& container) {
    vector<Date> horarios = {
        Date(2026, 7, 15, 20, 0),
        Date(2026, 8, 10, 19, 30),
        Date(2026, 9, 5, 18, 0),
        Date(2026, 10, 1, 20, 0),
        Date(2026, 11, 20, 21, 0),
        Date(2026, 12, 12, 19, 0),
    };
    ArtistaContainer emptyArtistas;
    for (size_t i = 0; i < nomeEventos.size(); i++) {
        container.add(nomeEventos[i], tipoEventos[i], emptyArtistas, 0, lotacaoMaxEventos[i], horarios[i]);
    }
}

void MockData::generateData(GestoraEventos& gestoraEventos){
    srand(time(NULL));
    insertClientes(gestoraEventos.getClientes());
    insertEventos(gestoraEventos.getEventos());
}