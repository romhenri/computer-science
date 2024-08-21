#ifndef MEDALHA_H
#define MEDALHA_H

#include <string>

#include "Atleta.h"
#include "Modalidade.h"

using std::string;

class Medalha {
    string type;
    int ano;
    Atleta atleta;
    Modalidade modalidade;

public:
    Medalha(const string &type, int ano, const Atleta &atleta, const Modalidade &modalidade);
    ~Medalha();

    string get_type() const;
    void set_type(const string &type);

    int get_ano() const;
    void set_ano(int ano);

    void print() const;
};

#endif