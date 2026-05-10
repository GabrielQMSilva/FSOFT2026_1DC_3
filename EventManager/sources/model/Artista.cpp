//
// Created by Lord Foog on 5/8/2026.
//

#include <iostream>
#include <string>
#include "Artista.h"
using namespace std;

bool Artista::stringValidation(const string& nome) {
    bool result = false;
    if(nome.length() > 3 && nome.length() < 20) {
        result = true;
	}
    return result;
}

bool Artista::membrosValidation(int membros) {
    bool result = false;
    if(membros > 0 && membros < 6) {
        result = true;
    }
    return result;
}

void Artista::setArtista(const string& nome, int membros, const string& agencia, float budget) {
    if (stringValidation(nome)) {
        this->nome = nome;
    }else{
        cout << "Nome inválido!" << endl;
        /* -- INVALID DATA EXCEPTION PLACE HOLDER -- */
    }
    if (stringValidation(agencia)) {
        this->agencia = agencia;
    }else{
        cout << "Agencia inválida!" << endl;
        /* -- INVALID DATA EXCEPTION PLACE HOLDER -- */
    }
    if (membrosValidation(membros)) {
        this->membros = membros;
    }else{
        cout << "Número inválido!" << endl;
        /* -- INVALID DATA EXCEPTION PLACE HOLDER -- */
    }
    this->budget = budget;
}

const string& Artista::getNome() {
    return nome;
}