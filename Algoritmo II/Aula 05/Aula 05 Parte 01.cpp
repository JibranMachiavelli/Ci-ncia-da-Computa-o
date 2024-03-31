#include <iostream>

using namespace std;

  double calcularImposto(double salario){
    double taxa;
    if (salario <= 2000){
      taxa = 0;
    } else if (salario <= 5000){
      taxa = 0.1;
    } else {
      taxa = 0.2;
    }
    double imposto = salario * taxa;
    return imposto;
  }
    void aplicaDeducoes(double &imposto, double deducoes){
      imposto -= deducoes;
      if (imposto < 0){
        imposto = 0;
      }
    }

    void aplicarImposto(double &salario, double imposto){
      salario -= imposto;
    }

int main() {
  double salario = 4500;
  double deducoes = 300;
  double imposto = calcularImposto(salario);
  cout << "Imposto = " << imposto << endl;
  aplicaDeducoes(imposto, deducoes);
  cout << "Imposto = " << imposto << endl;
  aplicarImposto(salario, imposto);
  cout << "Salario = " << salario << endl;

  return 0;
}