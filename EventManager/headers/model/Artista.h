//
// Created by Lord Foog on 5/7/2026.
//

#ifndef ARTISTA_H
#define ARTISTA_H

#include <string>
using namespace std;

class Artista {
private:
    string nome;
    int membros;
    float budget;
    string agencia;
    bool dataValidation();

public:
    Artista(string nome, int membros, string agencia, float budget);
    void setArtista(const string& nome, int membros, const string& agencia, float budget, int ID);
    const string getNome();

};

#endif //ARTISTA_H
