#ifndef PAIS_H
#define PAIS_H

#include <string>

using std::string;

class Pais {
  string name;
  string continentee;

public:
  Pais(const string &name, const string &continentee);
  ~Pais();

  string get_name() const;
  void set_name(const string &name);

  string get_continentee() const;
  void set_continentee(const string &continentee);

  void print() const;
};

#endif
