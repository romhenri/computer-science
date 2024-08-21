#ifndef ATLETA_H
#define ATLETA_H

#include <string>
#include <vector>

#include "Modalidade.h"
#include "Pais.h"

using std::string;

class Atleta {
  std::string name;
  Pais pais;
  std::vector<Modalidade> modalidades;

public:
  Atleta(const string &name, const Pais &pais);
  ~Atleta();

  string get_name() const;
  void set_name(const string &name);

  Pais get_pais() const;
  void set_pais(const Pais &pais);

  void add_modality(const Modalidade &modalidade);
  void print() const;
};

#endif