//
// Created by Lord Foog on 5/8/2026.
//

#include <iostream>
#include <string>
#include "Artista.h"
using namespace std;

bool Artista::dataValidation() {
    bool result = false;
    cout << "Por favor introduza dados válidos." << endl;
    return result;
}

void Artista::setArtista(const string& nome, int membros,const string& agencia, float budget, int ID) {

}

const string Artista::getNome() {
    return nome;
}