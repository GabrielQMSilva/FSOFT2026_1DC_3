//
// Created by gabri on 12/06/2026.
//
#include "MockData.h"
#include "Artista.h"

void MockData::insertClientes(ClienteContainer& container) {
    for (size_t i = 0; i < nomeClientes.size(); i++) {
        string email = nomeClientes[i] + "@email.com";
        container.add(nomeClientes[i], email, "ELTEACH2026");
    }
}

void MockData::insertOrganizadores(OrganizadorContainer& container) {
    for (size_t i = 0; i < nomeOrganizadores.size(); i++) {
        container.add(nomeOrganizadores[i], emailOrganizadores[i], passwordOrganizadores[i]);
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

    // Artist names per event, grouped by genre
    vector<vector<string>> artistasPorEvento = {
        {"Arctic Monkeys", "Kings of Leon", "Van Halen", "Black Sabbath", "Pearl Jam"},        // Rock In ISEP
        {"Olivia Rodrigo", "Harry Styles", "ABBA", "Duran Duran", "a-ha"},                     // Top Pop
        {"Red Hot Chili Peppers", "Pink Floyd", "Radiohead", "The Strokes", "Dire Straits"},   // Alchemy Live
        {"Rolling Stones", "U2", "David Bowie", "Queen", "The Police"},                        // Live Aid
        {"LON3R JOHNY", "Wet Bed Gang", "Julinho Ksd", "Yeat", "twikipedia"},                  // Trap Irony
        {"Yamandu Costa", "Django Reinhardt", "John Mayer", "Laufey", "Mazzy Star"},           // Jazzy Feel Good
    };

    vector<ArtistaContainer> artistaContainers(nomeEventos.size());
    for (size_t i = 0; i < nomeEventos.size(); i++) {
        for (const string& nome : artistasPorEvento[i]) {
            int membros = 1;
            float artistBudget = 1000.0f;
            for (size_t j = 0; j < nomeArtistas.size(); j++) {
                if (nomeArtistas[j] == nome) {
                    membros = numeroMembros[j];
                    artistBudget = budget[j];
                    break;
                }
            }
            artistaContainers[i].add(new Artista(nome, membros, "Agencia", artistBudget));
        }
        container.add(nomeEventos[i], tipoEventos[i], artistaContainers[i], lotacaoEventos[i], (float)precoEventos[i], horarios[i]);
    }
}

void MockData::generateData(GestoraEventos& gestoraEventos){
    srand(time(NULL));
    insertClientes(gestoraEventos.getClientes());
    insertOrganizadores(gestoraEventos.getOrganizadores());
    insertEventos(gestoraEventos.getEventos());
}