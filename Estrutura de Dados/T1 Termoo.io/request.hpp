#ifndef REQUEST_HPP
#define REQUEST_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include "lde.hpp"
#include "ldl.hpp"

LDL lerTxt(const std::string& nomeArquivo) {
    LDL listaDeListasTemp;
    inicializarLDL(listaDeListasTemp);

    std::ifstream arquivo(nomeArquivo);
    if (!arquivo.is_open()) {
        std::cerr << "Erro ao abrir o arquivo: " << nomeArquivo << std::endl;
        return listaDeListasTemp;
    }

    std::string line;
    while (std::getline(arquivo, line)) {
        LDE* listTemp = new LDE();
        inicializarLDE(*listTemp);

        for (char c : line) {
            inserirFimLDE(*listTemp, c);
        }

        if (listTemp->start != nullptr) {
            inserirFimLDL(listaDeListasTemp, listTemp);
        }
        else {
            delete listTemp;
        }
    }

    arquivo.close();
    return listaDeListasTemp;
}

void adicionarPalavra(const std::string& enderecoArquivo, LDL& listaDeListas, const std::string& palavraAdicionar) {
    LDE* novaLista = new LDE();
    inicializarLDE(*novaLista);

    for (char c : palavraAdicionar) {
        inserirFimLDE(*novaLista, c);
    }

    inserirFimLDL(listaDeListas, novaLista);

    std::ofstream arquivo(enderecoArquivo, std::ios::out);
    if (arquivo.is_open()) {
        NodeLDL* current = listaDeListas.start;
        while (current != nullptr) {
            Node* palavraAtual = current->palavra->start;
            while (palavraAtual != nullptr) {
                arquivo << palavraAtual->info;
                palavraAtual = palavraAtual->next;
            }
            arquivo << "\n";
            current = current->next;
        }
        arquivo.close();
        std::cout << "| Palavra " << palavraAdicionar << " adicionada com sucesso!\n";
    }
    else {
        std::cerr << "| Erro ao abrir o arquivo para grava��o.\n";
    }
}

void removerPalavra() {
    LDL listaDeListas = lerTxt("palavras.txt");
    std::string palavra;

    std::cout << "|------------------------------|\n";
    std::cout << "|       Lista de Palavras      |\n";
    printLDL(listaDeListas);

    do {
        std::cout << "| Digite a palavra que deseja remover (ou 'sair' para encerrar): ";
        std::cin >> palavra;
        std::cout << "|\n";

        if (palavra == "sair") {
            break;
        }

        bool encontrado = false;
        NodeLDL* current = listaDeListas.start;
        while (current != nullptr) {
            LDE* listaAtual = current->palavra;
            Node* nodeAtual = listaAtual->start;
            std::string palavraAtual;
            while (nodeAtual != nullptr) {
                palavraAtual += nodeAtual->info;
                nodeAtual = nodeAtual->next;
            }
            if (palavraAtual == palavra) {
                encontrado = true;
                removerPalavraLDL(listaDeListas, listaAtual);
                break;
            }
            current = current->next;
        }

        if (encontrado) {
            std::cout << "| Palavra '" << palavra << "' removida com sucesso!\n";
        }
        else {
            std::cout << "| Palavra '" << palavra << "' n�o encontrada na lista.\n";
        }

        std::ofstream arquivo("palavras.txt", std::ios::out);
        if (arquivo.is_open()) {
            NodeLDL* current = listaDeListas.start;
            while (current != nullptr) {
                Node* palavraAtual = current->palavra->start;
                while (palavraAtual != nullptr) {
                    arquivo << palavraAtual->info;
                    palavraAtual = palavraAtual->next;
                }
                arquivo << "\n";
                current = current->next;
            }
            arquivo.close();
        }
        else {
            std::cerr << "| Erro ao abrir o arquivo para grava��o.\n";
        }

    } while (true);

    std::cout << "|------------------------------|\n";
}

#endif
