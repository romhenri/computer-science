#ifndef MODALIDADE_H
#define MODALIDADE_H

#include <string>

using std::string;

class Modalidade {
    string name;
    bool is_collective;

public:
    Modalidade(const string &name, bool is_collective);
    ~Modalidade();

    string get_name() const;
    void set_name(const string &name);

    bool get_is_collective() const;
    void set_is_collective(bool is_collective);

    void print() const;
};

#endif