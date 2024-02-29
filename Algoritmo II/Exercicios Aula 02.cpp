#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

  /*
  1. Determinar o IMC do usuário
  
  O índice é calculado da seguinte maneira: divide-se o peso do paciente pela sua altura elevada ao quadrado. Diz-se que o indivíduo tem peso normal quando o resultado do IMC está entre 18,5 e 24,9.*/

  float peso, altura, imc;
  cout << "Informe seu peso: ";
  cin >> peso;
  cout << "Informe sua altura: ";
  cin >> altura;
  imc = peso / pow(altura, 2);
  cout << "Seu IMC é: " << imc << endl;
  if (imc < 18.5) {
    cout << "Você está abaixo do peso";
  } else if (imc >= 18.5 && imc <= 24.9) {
    cout << "Você está com o peso normal";
  } else {
    cout << "Você está acima do peso";
    cout << "\n";
  }
  /*
  2. Determinar se um triângulo é isósceles

  O cálculo da área do triângulo isósceles não se difere em relação à área dos outros triângulos, então, ela é calculada pelo produto entre a base e a altura dividido por 2.

  A área de um triângulo isósceles é igual à área de um triâng
  */
  cout << "\n";
  
  float base, alturaT, area;

  cout << "Informe a base do triangulo?\n";
  cin >> base;
  cout << "Informe a altura do triangulo?\n";
  cin >> alturaT;
  
  area = (base * altura) / 2;

  cout << "A area do triangulo é: " << area << endl;
  
  /*
  3. Simular as operações aritméticas de uma calculadora.
  */

  cout << "\n";
  
  char operador;
  double num1, num2;
  
  cout << "Digite o primeiro número: ";
  cin >> num1;
  cout << "Digite o operador (+, -, *, /): ";
  cin >> operador;
  cout << "Digite o segundo número: ";
  cin >> num2;

  switch (operador) {
      case '+':
          cout << "Resultado: " << num1 + num2 << endl;
          break;
      case '-':
          cout << "Resultado: " << num1 - num2 << endl;
          break;
      case '*':
          cout << "Resultado: " << num1 * num2 << endl;
          break;
      case '/':
          if (num2 != 0) {
              cout << "Resultado: " << num1 / num2 << endl;
          } else {
              cout << "Erro: divisão por zero!" << endl;
          }
          break;
      default:
          cout << "Operador inválido!" << endl;
  }

  return 0;
}

