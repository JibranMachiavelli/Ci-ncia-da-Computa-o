#include <iostream>
#include <cmath>

using namespace std;

void inverterArray(int numeros[], int tam) {
    for (int i = tam - 1; i >= 0; i--) {
        cout << numeros[i] << endl;
    }
}

double calMedia(int numeros[], int tam) {
    double soma = 0;
    double media = 0;
    for (int i = 0; i < tam; i++) {
        soma += numeros[i];
    }
    media = soma / tam;
    return media;
}

double calcularVariancia(int numeros[], int tam, double media) {
    double somaDiferencasQuadrado = 0;
    for (int i = 0; i < tam; i++) {
        somaDiferencasQuadrado += pow(numeros[i] - media, 2);
    }
    return somaDiferencasQuadrado / tam;
}

int main() {
    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 7, 9, 10};
    int tam = 10;

    inverterArray(numeros, tam);
    double media = calMedia(numeros, tam);
    double variancia = calcularVariancia(numeros, tam, media);

    cout << "Variância: " << variancia << endl;

    return 0;
}
