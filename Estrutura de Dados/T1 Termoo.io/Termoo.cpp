#include "Termoo.hpp"
#include <iostream>
#include <string>

using namespace std;

int quantidadetentativas() {
    int opcao = 0;

    do {
        cout << "| Deseja jogar com quantas     |\n";
        cout << "| palavras de forma simultanea?|\n";
        cout << "| 1 palavra - 6 tentativas.    |\n";
        cout << "| 2 palavras - 8 tentativas.   |\n";
        cout << "| 3 palavras - 10 tentativas.  |\n";
        cout << "| 4 palavras - 12 tentativas.  |\n";
        cout << "| Digite sua opcao: ";
        cin >> opcao;
        cout << "|                              | \n";

        if (opcao < 1 || opcao > 4) {
            cout << "| Valor invalido.              |\n";
            cout << "| Digite um numero entre 1 e 4.|\n";
            cout << "|                              |\n";
        }

    } while (opcao < 1 || opcao > 4);

    switch (opcao) {
    case 1: return 6;
    case 2: return 8;
    case 3: return 10;
    case 4: return 12;
    }
    cout << "| Erro! tente novamente.       |\n";
    cout << "|                              |\n";
    return 0;
}

void jogar(int dificuldade) {

    cout << "| Iniciando o jogo             |\n";
    cout << "| com dificuldade " << dificuldade << "...\n";
    cout << "|                              |\n";
}

void iniciarJogo() {
    int dificuldade = quantidadetentativas();
    jogar(dificuldade);
}
