//
// Created by Lord Foog on 5/7/2026.
//

#ifndef EVENTO_H
#define EVENTO_H

#include <list>
#include <string>
#include <iostream>
#include "Date.h"
#include "ClienteContainer.h"
#include "ArtistaContainer.h"

using namespace std;

class Evento {
private:
    string nome;
    string tipo;
    string ID;
    ArtistaContainer listaArtistas;
    ClienteContainer listaClientes;
    int lotacao;
    int lotacaoMaxima;
    float preco;
    Date horario;
    bool stringValidation(const string& nome);
    bool intValidation(const int& lotacaoMaxima);

public:
    Evento(const string& nome, const string& tipo, ArtistaContainer& listaArtistas, int lotacao, int lotacaoMaxima, float preco, Date& horario, const string& ID);
    void setDetails(const string& nome, const string& tipo, int lotacaoMaxima, Date& horario);
    void setID(const string& ID);
    void setListaArtistas(ArtistaContainer& listaArtistas);
    const string& getID() const;
    const string& getNome() const;
    const string& getTipo() const;
    const string& getStrings() const;
    const string& getInts() const;
    const Date& getHorario() const;
    float getPreco() const;
    ArtistaContainer& getListaArtistas();
    ClienteContainer& getListaClientes();

    bool operator == (const string& ID) const;
};

#endif //EVENTO_H
