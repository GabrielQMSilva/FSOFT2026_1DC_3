//
// Created by gabri on 14/06/2026.
//

#include <iostream>
#include <iomanip>
#include "EventoView.h"
#include "Utils.h"

using namespace std;

EventoView::EventoView() {}

EventoInDTO EventoView::handleCriarEvento() {
    cout << "\n-- Criar Evento --\n";

    EventoInDTO dto;

    dto.nome  = Utils::getString("Nome do evento");
    dto.tipo  = Utils::getString("Tipo do evento");
    dto.lotacao = Utils::getNumber("Lotacao maxima");
    dto.preco   = Utils::getFloat("Preco do bilhete (EUR)");

    cout << "\n-- Data e Hora do Evento --\n";
    int year   = Utils::getNumber("Ano");
    int month  = Utils::getNumber("Mes");
    int day    = Utils::getNumber("Dia");
    int hour   = Utils::getNumber("Hora");
    int minute = Utils::getNumber("Minuto");
    dto.horario.setDate(year, month, day, hour, minute);

    cout << "\n-- Artistas (introduza 0 para terminar) --\n";
    while (true) {
        string nomeArtista = Utils::getString("Nome do artista (0 para terminar)");
        if (nomeArtista == "0") break;
        int membros     = Utils::getNumber("Numero de membros");
        string agencia  = Utils::getString("Agencia");
        float budget    = Utils::getFloat("Budget (EUR)");
        dto.listaArtistas.add(new Artista(nomeArtista, membros, agencia, budget));
    }

    return dto;
}

EventoInDTO EventoView::editEvento(Evento* evento) {
    int year, month, day, hour, minute;
    evento->getHorario().getDate(year, month, day, hour, minute);

    cout << "\n-- Editar Evento --\n";
    cout << "  Nome atual    : " << evento->getNome() << "\n";
    cout << "  Tipo atual    : " << evento->getTipo() << "\n";
    cout << "  Lotacao atual : " << evento->getLotacao() << "\n";
    cout << "  Data atual    : " << setfill('0')
         << setw(2) << day << "/" << setw(2) << month << "/" << year
         << " " << setw(2) << hour << ":" << setw(2) << minute << "\n";

    EventoInDTO dto;
    dto.preco = evento->getPreco();

    dto.nome    = Utils::getString("Novo nome");
    dto.tipo    = Utils::getString("Novo tipo");
    dto.lotacao = Utils::getNumber("Nova lotacao maxima");

    cout << "\n-- Nova Data e Hora --\n";
    int ny = Utils::getNumber("Ano");
    int nm = Utils::getNumber("Mes");
    int nd = Utils::getNumber("Dia");
    int nh = Utils::getNumber("Hora");
    int nmin = Utils::getNumber("Minuto");
    dto.horario.setDate(ny, nm, nd, nh, nmin);

    cout << "\n-- Artistas (introduza 0 para terminar) --\n";
    while (true) {
        string nomeArtista = Utils::getString("Nome do artista (0 para terminar)");
        if (nomeArtista == "0") break;
        int membros    = Utils::getNumber("Numero de membros");
        string agencia = Utils::getString("Agencia");
        float budget   = Utils::getFloat("Budget (EUR)");
        dto.listaArtistas.add(new Artista(nomeArtista, membros, agencia, budget));
    }

    return dto;
}