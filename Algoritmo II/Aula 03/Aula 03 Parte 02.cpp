#include <iostream>
#include <string>

using namespace std;

  double calcularMedia(){

    int qntValores;
    cout << "Deseja calcular a media de quantos valores?\n";
    cin >> qntValores;
    double soma = 0;
    double valor = 0;
    for (int i = 1; i <= qntValores; i++) {
      cout << "Digite o " << i << "º valor\n";
      cin >> valor;
      soma = soma + valor;
      }
  double media = soma/qntValores;
  return media;
  }

  void determinarAprovacao(){
    cout << "Deseja determinar a aprovação de qual aluno?\n";
    string nome;
    cin >> nome;

    cout << "Calculando a média de " << nome << endl;
    double media = calcularMedia();
    if (media >= 6){
      cout << "Aprovado\n";
    } else {
      cout << "Reprovado\n";
    }
  }

int main() {

  determinarAprovacao();
  return 0;
}