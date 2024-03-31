#include <iostream>
#include "alunos.hpp"
#include <string>

using namespace std;

int main()
{
    int tamanho = 0;
    cout << "Quantos alunos deseja inserir? " << endl;
    cin >> tamanho;
    alunos aluno[tamanho];

    menuNavegacao(aluno, tamanho);
    
    return 0;
}
