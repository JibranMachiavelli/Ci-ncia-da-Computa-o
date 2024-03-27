#ifndef CARROS_HPP
#define CARROS_HPP

#include <string>

   struct Carro {
        int ano;
        char nome;
        char marca;
        double preco;
    };
    
    void cadastrarCarros(Carro carros[], int tamanho);
    void imprimirCarros(Carro carros[], int tamanho);
    void contagemCarros(Carro carros[], int tamanho);
    void atualizarPreco(Carro carros[], int tamanho);
    void imprimirFaixaPreco(Carro carros[], int tamanho);
        
#endif