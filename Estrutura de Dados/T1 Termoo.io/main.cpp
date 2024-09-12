#include <iostream>
#include <string>
#include "lde.hpp"
#include "ldl.hpp"
#include "request.hpp"
#include "Termoo.hpp"

int main() {
    std::string enderecoArquivo = "palavras.txt";

    LDL listaDeListas = lerTxt(enderecoArquivo);

    std::cout << "|------------------------------|\n";
    std::cout << "|    Bem-vindo ao jogo Termo   |\n";
    std::cout << "|------------------------------|\n";

    int opcao = 0;
    std::string palavra;

    while (true) {
        std::cout << "| Escolha uma opcao:           |\n";
        std::cout << "| 1. Iniciar Jogo.             |\n";
        std::cout << "| 2. Adicionar Palavra.        |\n";
        std::cout << "| 3. Remover Palavra.          |\n";
        std::cout << "| 4. Sair.                     |\n";
        std::cout << "|                              |\n";
        std::cout << "| Digite o numero da opcao: ";
        std::cin >> opcao;
        std::cout << "|                              | \n";

        switch (opcao) {
            case 1: {
                std::cout << "| 01 - Iniciando Jogo.         |\n";
                std::cout << "|                              |\n";
                iniciarJogo();
                break;
                }
            case 2: {
                std::cout << "| 02 - Adicionar palavra.      |\n";
                std::cout << "|                              |\n";
                std::cout << "| Digite uma palavra: ";
                std::cin >> palavra;
                std::cout << "|                              |\n";
                adicionarPalavra(enderecoArquivo, listaDeListas, palavra);
                std::cout << "| Palavra cadastrada.          |\n";
                std::cout << "|                              |\n";
                break;
                }
            case 3: {
                std::cout << "| 03 - Remover palavra.        |\n";
                std::cout << "|                              |\n";
                removerPalavra();
                break;
                }
            case 4: {
                std::cout << "| 04 - Encerrando o jogo...    |\n";
                std::cout << "|------------------------------|\n";
                return 0;
                }
            default: {
                std::cout << "|        Opcao invalida        |\n";
                std::cout << "|       Tente novamente :)     |\n";
                std::cout << "|                              |\n";
                break;
            }
        }
    }

    return 0;
}
