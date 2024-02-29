#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
  
  /*
  1. Somar os inteiros em um intervalo [x, y].
  */

  int x, y, soma = 0;
  cout << "Digite o valor de x: ";
  cin >> x;
  cout << "Digite o valor de y: ";
  cin >> y;

  soma = x + y;

  cout << "A soma dos inteiros entre " << x << " e " << y << " é: " << soma << endl;
  
  
  /*
  2. Somar os pares em um intervalo [x, y].
  */
  
  cout << "\n";
  
  int x2, y2, soma2 = 0;
  cout << "Digite o valor de x: \n";
  cin >> x2;
  cout << "Digite o valor de y: \n";
  cin >> y2;
  for (int i = x2; i <= y2; i++) {
    if (i % 2 == 0) {
      soma2 += i;
    }
  }

  cout << "A soma dos pares entre " << x2 << " e " << y2 << " é: " << soma2 << endl;
  
  
  /*
  3. Peça para o usuário digitar n números. Conte a quantidade de números
  divisíveis por 3.
  */

  int n, num, contador = 0;

  cout << "\n";

  cout << "Digite a quantidade de números: ";
  cin >> n;
  for (int i = 0; i < n; i++) {
    cout << "Digite o número " << i + 1 << ": ";
    cin >> num;
    if (num % 3 == 0) {
      contador++;
    }
  }
  
  cout << "A quantidade de números divisíveis por 3 é: " << contador << endl;
  

  /*
  4. Calcular o fatorial de n (n!).

  O fatorial de um número é o produto dele pelos seus antecessores maiores que 0. O fatorial de um número é a multiplicação desse número por todos os seus antecessores maiores que zero. Para representar o fatorial de um número, escrevemos o número seguido de um ponto de exclamação, ou seja, n! (lê-se “n fatorial”).
  */
  
  int n1, fatorial = 1;

  cout << "\n";

  cout << "Digite um número: ";
  cin >> n1;

  for (int i = 1; i <= n1; i++) {
    fatorial *= i;
  }
  
  cout << "O fatorial de " << n1 << " é: " << fatorial << endl;
  

  /*
  5. Determinar quantos anos serão necessários para que um pé de Eucalipto
  seja maior que uma Palmeira. Considere que o Eucalipto tem 1,10m e
  cresce 3 centímetros por ano enquanto que a Palmeira tem 1,50m e cresce
  2 centímetros por ano.
  */

  cout << "\n"; 
  
  float eucalipto = 1.10, palmeira = 1.50;
  int anos = 0;
  
  //        1.10      1.50
  while (eucalipto <= palmeira) {
    eucalipto += 0.03;
    palmeira += 0.02;
    anos++;
  }
  
  cout << "Serão necessários " << anos << " anos para que o Eucalipto ser maior que a Palmeira." << endl;
  
  return 0;
}

