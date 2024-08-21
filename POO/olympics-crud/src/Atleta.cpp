#include "Atleta.h"
#include "Modalidade.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

// Construtor
Atleta::Atleta(
  const string &name,
  const Pais &pais
) : name(name), pais(pais) {}

// Destrutor
Atleta::~Atleta() {}

// "name"
string Atleta::get_name() const {
  return name;
}
void Atleta::set_name(const string &name) {
  this->name = name;
}

// "pais"
Pais Atleta::get_pais() const {
  return pais;
}
void Atleta::set_pais(const Pais &pais) {
  this->pais = pais;
}

// "modalidades"
void Atleta::add_modality(
  const Modalidade &modalidade
) {
  modalidades.push_back(modalidade);
}

void Atleta::print() const {
  cout << "Atleta: " << name << endl;
  
  pais.print();
  for (const auto &modalidade : modalidades) {
    modalidade.print();
  }
}