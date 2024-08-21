#include "Modalidade.h"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

// Construtor
Modalidade::Modalidade(const std::string &name, bool is_collective)
  : name(name), is_collective(is_collective) {}

// Destrutor
Modalidade::~Modalidade() {}

// "name"
string Modalidade::get_name() const { 
  return name; 
}
void Modalidade::set_name(const string &name) {
  this->name = name; 
}

// "is_collective"
bool Modalidade::get_is_collective() const {
  return is_collective; 
} 

// "modalidade"
void Modalidade::set_is_collective(bool is_collective) {
  this->is_collective = is_collective;
}
void Modalidade::print() const {
  cout << "Modalidade: " << name;
  cout << (is_collective ? " (Coletiva)" : " (Individual)") << endl;
}
