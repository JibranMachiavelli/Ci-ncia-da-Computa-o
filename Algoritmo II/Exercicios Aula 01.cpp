#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    // 1. Solicitar ao usuário o seu nome e imprimir na tela
    string nome;
    cout << "Digite seu nome: ";
    cin >> nome;
    cout << "Olá " << nome << ", bem-vindo à primeira aula de algoritmos II" << endl;

    cout << "\n";
    // 2. Calcular a área de uma circunferência
    const double pi = 3.14159;
    double raio;
    cout << "Digite o raio da circunferência: ";
    cin >> raio;
    double area = pi * pow(raio, 2);
    cout << "A área da circunferência é: " << area << endl;

    cout << "\n";
    // 3. Transformar temperatura de Fahrenheit para Celsius
    double temperaturaFahrenheit, temperaturaCelsius;
    cout << "Digite a temperatura em Fahrenheit: ";
    cin >> temperaturaFahrenheit;
    temperaturaCelsius = (temperaturaFahrenheit - 32) * 5 / 9;
    cout << "A temperatura em Celsius é: " << temperaturaCelsius << " °C" << endl;

    cout << "\n";
    // 4. Calcular a posição de um objeto em função do tempo
    double S0, v0, a, t;
    cout << "Digite a posição inicial do objeto (S0): ";
    cin >> S0;
    cout << "Digite a velocidade inicial do objeto (v0): ";
    cin >> v0;
    cout << "Digite a aceleração do objeto (a): ";
    cin >> a;
    cout << "Digite o tempo (t): ";
    cin >> t;
    double S = S0 + v0 * t + 0.5 * a * pow(t, 2);
    cout << "A posição do objeto no tempo t é: " << S << endl;

    cout << "\n";
    // 5. Determinar a faixa etária do usuário
    int idade;
    cout << "Digite sua idade: ";
    cin >> idade;
    if (idade < 12) {
        cout << "Você é uma criança." << endl;
    } else if (idade >= 12 && idade < 18) {
        cout << "Você é um adolescente." << endl;
    } else if (idade >= 18 && idade < 65) {
        cout << "Você é um adulto." << endl;
    } else {
        cout << "Você é um idoso." << endl;
    }

    cout << "\n";
    // 6. Solicitar um número de 1 a 12 e imprimir o mês correspondente
    int numeroMes;
    cout << "Digite um número de 1 a 12: ";
    cin >> numeroMes;
    switch (numeroMes) {
        case 1:
            cout << "Janeiro" << endl;
            break;
        case 2:
            cout << "Fevereiro" << endl;
            break;
        case 3:
            cout << "Março" << endl;
            break;
        case 4:
            cout << "Abril" << endl;
            break;
        case 5:
            cout << "Maio" << endl;
            break;
        case 6:
            cout << "Junho" << endl;
            break;
        case 7:
            cout << "Julho" << endl;
            break;
        case 8:
            cout << "Agosto" << endl;
            break;
        case 9:
            cout << "Setembro" << endl;
            break;
        case 10:
            cout << "Outubro" << endl;
            break;
        case 11:
            cout << "Novembro" << endl;
            break;
        case 12:
            cout << "Dezembro" << endl;
            break;
        default:
            cout << "Número inválido." << endl;
            break;
    }

    return 0;
}
/*
  1. Solicitar ao usuário o seu nome e imprimir na tela: “Olá xxx, bem-vindo a primeira aula de algoritmos
  II”, substituir xxx pelo nome do usuário.
  
  2. Calcular a área de uma circunferência.
  
  3. Transforme a temperatura em graus Farenheit em graus Celsius.
  
  4. Considere a equação horária da posição de um obejo:
  onde S(t), S0, v0 e a referem-se, respectivamente, a posição do objeto no tempo t, posição inicial do
  objeto, velocidade inicial do objeto e aceleração do objeto. Crie um algoritmo para calcular a posição
  de um objeto em função do tempo conforme tal equação.
  
  5. Determine se o usuário é criança, adolescente, adulto ou idoso.
  
  6. Peça para o usuário um número de 1 a 12 e imprima o mês correspondente.
*/
  