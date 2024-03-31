#include <iostream>
#include <string>

using namespace std;

double somar(double a, double b) {
    return a + b;
}

double subtrair(double a, double b) {
    return a - b;
}

double multiplicar(double a, double b) {
    return a * b;
}

double divisao(double a, double b) {
    if (b != 0)
        return a / b;
    else {
        cout << "Erro: divisão por zero." << endl;
        return 0;
    }
}

double potenciacao(double a, double b) {
    double resulPotenciacao = 1;
    for (int i = 0; i < b; ++i)
        resulPotenciacao *= a;
    return resulPotenciacao;
}

int menu() {
    int opcao;
    cout << "1 - Somar" << endl;
    cout << "2 - Subtrair" << endl;
    cout << "3 - Multiplicar" << endl;
    cout << "4 - Divisão" << endl;
    cout << "5 - Potenciação" << endl;
    cout << "Escolha a operação: ";
    cin >> opcao;
    return opcao;
}

int main() {
    double a, b;
    char continuar = 's';

    cout << "Bem-vindo à calculadora" << endl;

    do {
        int opcao = menu();

        cout << "Digite o primeiro número: ";
        cin >> a;
        cout << "Digite o segundo número: ";
        cin >> b;

        switch (opcao) {
            case 1: {
                cout << "A soma é: " << somar(a, b) << endl;
                break;
            }
            case 2: {
                cout << "A subtração é: " << subtrair(a, b) << endl;
                break;
            }
            case 3: {
                cout << "A multiplicação é: " << multiplicar(a, b) << endl;
                break;
            }
            case 4: {
                cout << "A divisão é: " << divisao(a, b) << endl;
                break;
            }
            case 5: {
                cout << "A potenciação é: " << potenciacao(a, b) << endl;
                break;
            }
            default: {
                cout << "Opção inválida" << endl;
            }
        }

        cout << "Deseja continuar (s/n)? ";
        cout << "\n";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');

    return 0;
}