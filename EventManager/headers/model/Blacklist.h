#ifndef BLACKLIST_H
#define BLACKLIST_H

#include <string>
#include <list>
using namespace std;

class Blacklist {
private:
    list<string> nomes;
public:
    Blacklist();
    void add(const string& nome);
    void remove(const string& nome);
    bool contains(const string& nome) const;
    list<string>& getAll();
};

#endif //BLACKLIST_H