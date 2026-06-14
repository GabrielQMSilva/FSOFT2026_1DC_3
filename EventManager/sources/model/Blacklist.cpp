#include "Blacklist.h"

Blacklist::Blacklist() {}

void Blacklist::add(const string& nome) {
    nomes.push_back(nome);
}

void Blacklist::remove(const string& nome) {
    nomes.remove(nome);
}

bool Blacklist::contains(const string& nome) const {
    for (const string& n : nomes) {
        if (n == nome) return true;
    }
    return false;
}

list<string>& Blacklist::getAll() {
    return nomes;
}