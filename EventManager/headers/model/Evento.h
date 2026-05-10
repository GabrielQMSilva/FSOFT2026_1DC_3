//
// Created by Lord Foog on 5/7/2026.
//

#ifndef EVENTO_H
#define EVENTO_H

#include <list>
#include <string>
#include <iostream>
#include "Date.h"
#include "Artista.h"
#include "Cliente.h"
using namespace std;

class Evento {
private:
    string nome;
    string tipo;
    string ID;
    list<Artista*>& listaArtistas;
    list<Cliente*>& listaClientes;
    int lotacao;
    int lotacaoMaxima;
    Date horario;
    bool stringValidation(const string& nome);
    bool intValidation(const int& number);

public:
    Evento(const string& nome, const string& tipo, const string& ID, list<Artista*>& listaArtistas, int lotacao, int lotacaoMaxima, Date& horario);
    void setDetails(const string& nome, const string& tipo, int lotacao, int lotacaoMaxima, Date& horario);
    void setID(const string& ID);
    const string& getID() const;
    const string& getStrings() const;
    const string& getInts() const;
    const Date& getHorario() const;
    const list<Artista*>& getListaArtistas() const;
    const list<Cliente*>& getListaClientes() const;

    bool operator == (const string& ID) const;
};

#endif //EVENTO_H
