#ifndef LDE_HPP
#define LDE_HPP

#include <iostream>

class Node {
public:
    char info;
    Node* next;
    Node* prev;
};

class LDE {
public:
    Node* start;
    Node* end;
};

void inicializarLDE(LDE& list) {
    list.start = nullptr;
    list.end = nullptr;
}

void inserirFimLDE(LDE& list, char value) {
    Node* novo = new Node;
    novo->info = value;
    novo->next = nullptr;

    if (list.start == nullptr) {
        novo->prev = nullptr;
        list.start = novo;
        list.end = novo;
    }
    else {
        novo->prev = list.end;
        list.end->next = novo;
        list.end = novo;
    }
}

void deleteLDE(LDE* lista) {
    if (lista == nullptr) return; // Verifica se a lista � nula

    Node* current = lista->start;
    while (current != nullptr) {
        Node* toDelete = current;
        current = current->next;
        delete toDelete; // Libera a mem�ria do n�
    }

    // Finalmente, libera a mem�ria da lista LDE
    delete lista;
}

void printList(const LDE& list) {
    Node* current = list.start;
    while (current != nullptr) {
        std::cout << current->info << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

#endif
