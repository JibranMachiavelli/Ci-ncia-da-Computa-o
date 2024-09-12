#ifndef LDL_HPP
#define LDL_HPP

#include <iostream>
#include "lde.hpp"

class NodeLDL {
public:
    LDE* palavra;
    NodeLDL* next;
    NodeLDL* prev;
};

class LDL {
public:
    NodeLDL* start;
    NodeLDL* end;
};

void inicializarLDL(LDL& list) {
    list.start = nullptr;
    list.end = nullptr;
}

void inserirFimLDL(LDL& list, LDE* value) {
    NodeLDL* novo = new NodeLDL;
    novo->palavra = value;
    novo->next = nullptr;

    if (list.start == nullptr) {
        list.start = novo;
        list.end = novo;
    }
    else {
        list.end->next = novo;
        novo->prev = list.end;
        list.end = novo;
    }
}

void removerPalavraLDL(LDL& listaDeListas, LDE* listaParaRemover) {
    NodeLDL* current = listaDeListas.start;
    NodeLDL* anterior = nullptr;

    // Percorre a LDL para encontrar a lista que cont�m a palavra a ser removida
    while (current != nullptr) {
        if (current->palavra == listaParaRemover) {
            if (anterior == nullptr) {
                // Remover o primeiro elemento da lista
                listaDeListas.start = current->next;
            }
            else {
                // Remover um elemento que n�o � o primeiro
                anterior->next = current->next;
            }

            // Libera a mem�ria da LDE removida
            deleteLDE(current->palavra);

            // Libera a mem�ria do n� da LDL removido
            delete current;
            return; // Palavra removida com sucesso, sai da fun��o
        }

        anterior = current;
        current = current->next;
    }

    // Caso n�o encontre a lista, n�o faz nada
}


void printLDL(LDL& list) {
    NodeLDL* current = list.start;
    int count = 1;  // Contador para identificar a ordem das palavras

    while (current != nullptr) {
        if (current->palavra == nullptr || current->palavra->start == nullptr) {
            std::cout << "Erro: Palavra ou lista inv�lida." << std::endl;
            current = current->next;
            continue;
        }

        std::cout << "| Palavra " << count << ": ";

        // Acessa a LDE contida no n� LDL e percorre seus n�s
        Node* palavraAtual = current->palavra->start;
        while (palavraAtual != nullptr) {
            std::cout << palavraAtual->info;  // Imprime o caractere da palavra
            palavraAtual = palavraAtual->next;
        }

        std::cout << std::endl;  // Pula para a pr�xima linha ap�s imprimir a palavra
        current = current->next;
        count++;  // Incrementa o contador
    }
}

#endif
