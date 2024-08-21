#include <iostream>
#include <vector>

#include "Atleta.h"
#include "Medalha.h"
#include "Modalidade.h"
#include "Pais.h"

using std::cout;
using std::endl;
using std::vector;

int main() {
  // Apresentação do Programa
  cout << "========> The Olympics CRUD <========\n" << endl;
  cout << "- Cadastre Atletas;" << endl;
  cout << "- Atribua Modalidade;" << endl;
  cout << "- Registre a Medalha Conquistada!\n" << endl;

  vector<Atleta> atletas;
  vector<Modalidade> modalidades;
  vector<Medalha> medalhas;
  vector<Pais> paises;

  // Exemplo 1
  cout << "Exemplos de Cadastro:\n" << endl;
  Pais pais1("Turquia", "Asia");
  Modalidade modalidade1("Tiro Esportivo", false);
  Atleta atleta1("Yusuf Dikec", pais1);

  atleta1.add_modality(modalidade1);
  Medalha medalha_lendaria("Prata", 2024, atleta1, modalidade1);

  atleta1.print();
  medalha_lendaria.print();
  cout << endl;

  // Exemplo 2
  Pais pais2("Servia", "Europa");
  Modalidade modalidade2("Tiro Esportivo", false);
  Atleta atleta2("Novak Djokovic", pais2);

  atleta2.add_modality(modalidade2);
  Medalha medalha2("Ouro", 2024, atleta2, modalidade2);

  atleta2.print();
  medalha2.print();

  // Salvando
  atletas.push_back(atleta1);
  modalidades.push_back(modalidade1);
  medalhas.push_back(medalha_lendaria);
  paises.push_back(pais1);

  atletas.push_back(atleta2);
  modalidades.push_back(modalidade2);
  medalhas.push_back(medalha2);
  paises.push_back(pais2);

  return 0;
}
