#include <iostream>
#include <string>

using namespace std;

double CelsiusFahrenheit(double a) {
    return (a * 9 / 5) + 32;
}

double FahrenheitCelsius(double a) {
    return (a - 32) * 5 / 9;
}

double MetrosQuilômetros(double a) {
    return a / 1000;
}

double QuilômetrosMetros(double a) {
    return a * 1000;
}

int menu() {
    int opcao;
    cout << "1 - Celsius para Fahrenheit\n";
    cout << "2 - Fahrenheit para Celsius\n";
    cout << "3 - Metros para Quilômetros\n";
    cout << "4 - Quilômetros para Metros\n";
    cout << "\nDigite a opção desejada: ";
    cin >> opcao;
    return opcao;
}

int main() {
    double a;
    char continuar = 's';

    cout << "Bem-vindo ao conversor de unidades\n";

    while (continuar == 's' || continuar == 'S') {
        int opcao = menu();

        cout << "Digite o valor a ser convertido: ";
        cin >> a;

        switch(opcao) {
            case 1: {
                cout << "A conversão é: " << CelsiusFahrenheit(a) << endl;
                break;
            }
            case 2: {
                cout << "A conversão é: " << FahrenheitCelsius(a) << endl;
                break;
            }
            case 3: {
                cout << "A conversão é: " << MetrosQuilômetros(a) << endl;
                break;
            }
            case 4: {
                cout << "A conversão é: " << QuilômetrosMetros(a) << endl;
                break;
            }
            default: {
                cout << "Opção inválida" << endl;
                break;
            }
        }

        cout << "Deseja continuar (s/n)? ";
        cin >> continuar;
    }

    return 0;
}
