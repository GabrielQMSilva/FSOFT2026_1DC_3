#include "Blacklist.h"

Blacklist::Blacklist() {}

void Blacklist::add(const string& id) {
    ids.push_back(id);
}

void Blacklist::remove(const string& id) {
    ids.remove(id);
}

bool Blacklist::contains(const string& id) const {
    for (const string& i : ids) {
        if (i == id) return true;
    }
    return false;
}

list<string>& Blacklist::getAll() {
    return ids;
}