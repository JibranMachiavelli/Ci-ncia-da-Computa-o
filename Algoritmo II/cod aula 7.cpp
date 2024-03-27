#include <iostream>
using namespace std;

bool inserirElemento(int array[], int tamanho, int elemento){
    for(int i=0; i<tamanho; i++){
        if(array[i] == -1){
            array[i] = elemento;
            return true;
        }
    }
    return false;
}

bool inserirElemento(int array[], int tamanho, int elemento, int posicao){
    if(posicao >= 0 && posicao < tamanho && array[posicao] == -1){
        array[posicao] = elemento;
        return true;
    }
    return false;
}

bool removerElemento(int array[], int tamanho, int elemento){
    for(int i=0; i<tamanho; i++){
        if(array[i] == elemento){
            array[i] = -1;
            return true;
        }
    }
    return false; 
}

bool removerElemento(int array[], int tamanho, int elemento, int ocorrencia){
   int removidos = 0;
    for(int i=0; i<tamanho && removidos<ocorrencia; i++){
        if(array[i] == elemento){
            array[i] = -1;
            removidos++;
        }
    }
    return removidos > 0; 
}

#include <cmath> 
double calcularPotencia(double base, int expoente = 2){
    return pow(base,expoente);
}
double calcularRaiz(double numero, int indice = 2){
    return pow(numero,(1/indice));
}
double calcularLogaritmo(double numero, int base = 10){
    return log10(numero)/log10(base);
}
int main()
{
    std::cout<<"Hello World";

    return 0;
}