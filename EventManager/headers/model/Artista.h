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

public:
    Artista(string nome, int membros, string agencia, float budget);
    void dataValidation();

};

#endif //ARTISTA_H
