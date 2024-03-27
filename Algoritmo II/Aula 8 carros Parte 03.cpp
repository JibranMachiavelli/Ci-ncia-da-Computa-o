#include <iostream>
#include "carros.hpp"

using namespace std;

void imprimirCarros(Carro carros[], int tamanho){
    
    char marca;
    int n = 0;
    cout << "\n";
    cout << "Digite o carro a ser pesquisado pela marca : " << endl;
    cin >> marca;
    
        for(int i = 0 ; i < tamanho ; i++){
        Carro c = carros[i];
        if(c.marca == marca){
        cout << "Carro N° : " << n + 1 << " de marca " << c.marca << endl;
        cout << c.nome << ", " << c.ano << ", " << c.marca << ", " << c.preco << endl;
        }
    }
    cout << "\n";
}
    
void cadastrarCarros(Carro carros[], int tamanho){
    
    int ano;
    char nome;
    char marca;
    double preco;
    
        for(int i = 0 ; i < tamanho ; i++){
            cout << "Digite o nome do " << i + 1 << "° carro : " << endl;
            cin >> nome;

            cout << "Digite a marca do " << i + 1 << "° carro : " << endl;
            cin >> marca;

            cout << "Digite o ano do " << i + 1 << "° carro : " << endl;
            cin >> ano;

            cout << "Digite o preco do " << i + 1 << "° carro : " << endl;
            cin >> preco;
            
            cout << "\n";

            Carro carro;
            carro.nome = nome;
            carro.marca = marca;
            carro.ano = ano;
            carro.preco = preco;
            carros[i] = carro;
    }
}

void contagemCarros(Carro carros[], int tamanho){
    
    int ano;
    int n = 0;
    cout << "Digite o carro a ser pesquisado pelo ano : " << endl;
    cin >> ano;
    
        for(int i = 0 ; i < tamanho ; i++){
        Carro c = carros[i];
        if(c.ano == ano){
        n++;
        }
    }
    cout << "Existem " << n << "° carros do ano de : " << ano << endl;
    cout << "\n";
}

void atualizarPreco(Carro carros[], int tamanho){
    
    char nome;
    double n = 0;
    cout << "Digite o carro a ser pesquisado pelo nome: " << endl;
    cin >> nome;
    
        for(int i = 0 ; i < tamanho ; i++){
        Carro c = carros[i];
        if(c.nome == nome){
        cout << "Dados do carro escolhido. Nome : " << c.nome << ". Preco : " << c.preco << endl;
        cout << "Digite o valor para ser alterado : ";
        cin >> carros[i].preco;
        cout << "Preço atualizado para : " << carros[i].preco;
        }
    }
    cout << "\n";
}

void imprimirFaixaPreco(Carro carros[], int tamanho){
    
    double min = 0;
    double max = 0;
    int n = 0;    
        
    cout << "Digite o valor mínimo: " << endl;
    cin >> min;
    cout << "Digite o valor máximo: " << endl;
    cin >> max;
    
        for(int i = 0 ; i < tamanho ; i++){
        Carro c = carros[i];
        if(c.preco >= min && c.preco <= max){
        cout << "Nome do " << i + 1 << "° carro de nome, " << c.nome << endl;
        n++;
        }
    }
    cout << "Existem " << n << "° carros nessa faixa de preço." << endl;
    cout << "\n";
}
