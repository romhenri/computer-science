#include "Medalha.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

// Construtor
Medalha::Medalha(
   const string &type,
   int ano,
   const Atleta &atleta, 
   const Modalidade &modalidade
) : type(type), ano(ano), atleta(atleta), modalidade(modalidade) {}

// Destrutor
Medalha::~Medalha() {} 

// "type"
std::string Medalha::get_type() const {
   return type;
}
void Medalha::set_type(const std::string &type) { 
   this->type = type; 
}

// "ano"
int Medalha::get_ano() const {
   return ano; 
}
void Medalha::set_ano(int ano) {
  this->ano = ano; 
}

void Medalha::print() const {
  cout << "Medalha: " << type;
  cout << ", Ano: " << ano << endl;
}
