#include <iostream>

using namespace std;

int main()
{
    struct Carro {
        int ano;
        string nome;
        string marca;
        double preco;
    };
    
    Carro c1;
    c1.ano=1990;
    c1.nome="Uno Miller";
    c1.marca="Fiat";
    c1.preco=3000;
    
    Carro c2;
    c2.ano=2023;
    c2.nome="Song Plus";
    c2.marca="BYD";
    c2.preco=350000;
    
    int tamanho = 2;
    Carro carros[tamanho];
    carros[0]=c1;
    carros[1]=c2;
    
    for(int i = 0 ; i < tamanho ; i++){
        Carro c = carros[i];
        cout << c.nome << ", " << c.ano << ", " << c.marca << ", " << c.preco << endl;
    }
    return 0;
}