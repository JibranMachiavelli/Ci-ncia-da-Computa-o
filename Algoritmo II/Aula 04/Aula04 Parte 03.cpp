#include <iostream>
#include <string>

using namespace std;

double saldo = 6000;
const double taxa_transferencia = 10; // Definição da taxa de transferência

double ConsultarSaldo() {
    return saldo;
}

double Depositar(double valor) {
    saldo += valor;
    return saldo;
}

double Sacar(double valor) {
    saldo -= valor;
  return saldo;
}

double Transferir(double valor) {
    saldo -= (valor + taxa_transferencia); // Deduz o valor transferido e a taxa
  return saldo;
}

int menu() {
    int opcao;
    cout << "\n1 - Consultar Saldo\n";
    cout << "2 - Depositar\n";
    cout << "3 - Sacar\n";
    cout << "4 - Transferir\n";
    cout << "5 - Sair\n";
    cout << "Digite a opção desejada: ";
    cin >> opcao;
    return opcao;
}

int main() {
    char continuar = 's';

    cout << "Banco Suave\n";

    while (continuar == 's' || continuar == 'S') {
        int opcao = menu();
        double valor;

        switch(opcao) {
            case 1: {
                cout << "O saldo é: " << ConsultarSaldo() << endl;
                break;
            }
            case 2: {
                cout << "Digite o valor a ser depositado: ";
                cin >> valor;
                Depositar(valor);
                cout << "Depósito realizado. Saldo atual: " << ConsultarSaldo() << endl;
                break;
            }
            case 3: {
                cout << "Digite o valor a ser sacado: ";
                cin >> valor;
                Sacar(valor);
                cout << "Saque realizado. Saldo atual: " << ConsultarSaldo() << endl;
                break;
            }
            case 4: {
                cout << "Digite o valor a ser transferido: ";
                cin >> valor;
                Transferir(valor);
                cout << "Transferência realizada. Saldo atual: " << ConsultarSaldo() << endl;
                break;
            }
            case 5: {
                return 0;
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
