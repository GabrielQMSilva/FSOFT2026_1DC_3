//
// Created by Lord Foog on 5/10/2026.
//

#ifndef HISTORICO_H
#define HISTORICO_H

#include <list>
using namespace std;

class Historico {
private:
    list<Historico*> bilhetes;
    Historico* search(const string& ID);
    string queixas;

public:
    list<Historico*>& getAll();
    void add(Historico* historico);

    const string& getQueixas();
};

#endif //HISTORICO_H
