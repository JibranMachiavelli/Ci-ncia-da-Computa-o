#include <iostream>
#include <string>

using namespace std;

    int escolhaVerificar(){
        int escolha;
        cout << "Digite um valor de [1-10] para verificar se existe um elemento dentro do array\n";
        cin >> escolha;
        return escolha;
    }
    
    void substituirImparesPorParesAleatorios(int numeros[],int tam){
        srand(time(nullptr));
        
        for (int i = 0 ; i < tam ; i++){
            if(numeros[i] % 2 != 0){
                numeros[i] = rand() % 100;
            }
            cout << "Numeros impares para pares : " << numeros[i] << endl;
        }
    }
    
    int qtdNumerosDivisiveis(int numeros[],int tam){
        int numero = escolhaVerificar();
        int qtdivisivel = 0;
        for (int i = 0; i < tam ; i++){
            if (numeros[i] % numero == 0){
                qtdivisivel += 1;
            }
        }
        cout << "A quantidade de numeros divisiveis são : " << qtdivisivel << endl;
        return qtdivisivel;
    }


int main() {
    //1. Verificar se um elemento existe em um array
    //2. Contar quantas vezes um determinado valor aparece no array
    //3. Verificar quantos valores distintos existem em um array
    //4. Substituir valores ímpares por pares aleatórios em um array
    //5. Determinar quantos valores são divisíveis por um n em um array
    //6. Inverter o array.
    //7. Calcular a variância dos valores de um array
    
    int numeros[10] = {1,2,3,4,5,6,7,7,9,10};
    int tam = 10;
    int vezes = 0;
    int vezesDistintos = 0;
    
    int escolha = escolhaVerificar();
    
    for (int i = 0 ; i < tam ; i++){
        if (numeros[i] == escolha){
            vezes += 1;
        } else {
            vezes;
        }
        if (numeros[i] != escolha){
            vezesDistintos += 1;
        } else {
            vezesDistintos;
        }
    }
    cout << "Esse elemento existe dentro do vetor " << vezes << " vezes" << endl;
    cout << "Esse elemento existe dentro do vetor " << vezesDistintos << " vezes distintas" << endl;
    
    qtdNumerosDivisiveis(numeros,tam);
    
    cout << "\n";
    
    substituirImparesPorParesAleatorios(numeros,tam);
    
    return 0;
}
