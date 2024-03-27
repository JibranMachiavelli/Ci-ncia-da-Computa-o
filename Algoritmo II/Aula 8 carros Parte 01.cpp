#include <iostream>
#include "carros.hpp"
#include <string>

using namespace std;

int main()
{
    
    int tamanho = 1;
    Carro carros[tamanho];

    cadastrarCarros(carros, tamanho);
    imprimirCarros(carros, tamanho);
    contagemCarros(carros, tamanho);
    atualizarPreco(carros, tamanho);
    imprimirCarros(carros, tamanho);
    imprimirFaixaPreco(carros, tamanho);
    
    return 0;
}