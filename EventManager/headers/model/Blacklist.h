#ifndef BLACKLIST_H
#define BLACKLIST_H

#include <string>
#include <list>
using namespace std;

class Blacklist {
private:
    list<string> ids;
public:
    Blacklist();
    void add(const string& id);
    void remove(const string& id);
    bool contains(const string& id) const;
    list<string>& getAll();
};

#endif //BLACKLIST_H