#include "Pais.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

// Construtor
Pais::Pais(
  const string &name,
  const string &continentee
) : name(name), continentee(continentee) {}

// Destrutor
Pais::~Pais() {}

// "name"
string Pais::get_name() const {
  return name; 
}
void Pais::set_name(const string &name) { 
  this->name = name;
}

// "continentee"
string Pais::get_continentee() const { 
  return continentee; 
}
void Pais::set_continentee(const string &continentee) {
  this->continentee = continentee;
}

void Pais::print() const {
  cout << "País: " << name;
  cout << ", continentee: " << continentee << endl;
}
