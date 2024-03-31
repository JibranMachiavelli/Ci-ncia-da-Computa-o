#include <iostream>
#include "alunos.hpp"
#include <string>

using namespace std;

void menuNavegacao(alunos aluno[], int tamanho){
    int escolha;
    
    while(true){
        cout << "" << endl;
        cout << "Escolha uma opção:" << endl;
        cout << "1. Adicionar Aluno" << endl;
        cout << "2. Buscar Aluno" << endl;
        cout << "3. Lista de Alunos" << endl;
        cout << "4. Media Alunos" << endl;
        cout << "5. Media aluno Especifico" << endl;
        cout << "6. Alunos Aprovados" << endl;
        cout << "7. Atualizar Notas" << endl;
        cout << "0. Sair" << endl;
        cin >> escolha;
        cout << "" << endl;
        
        switch(escolha){
            case 1:
                adicionarAluno(aluno, tamanho);
                break;
            case 2:
                // Implemente a opção 2
                buscarAluno(aluno, tamanho);
                break;
            case 3:
                // Implemente a opção 3
                imprimirAlunos(aluno, tamanho);
                break;
            case 4:
                // Implemente a opção 4
                mediaAluno(aluno, tamanho);
                break;
            case 5:
                mediaAlunoEspecifico(aluno, tamanho);
                break;
            case 6:
                aprovados(aluno, tamanho);
                break;
            case 7:
                atualizarNotas(aluno, tamanho);
                break;
            case 0:
                cout << "" << endl;
                cout << "Saindo..." << endl;
                cout << "" << endl;
                return;
            default:
                cout << "" << endl;
                cout << "Opção inválida. Tente novamente." << endl;
                cout << "" << endl;
        }
    }
}

void adicionarAluno(alunos aluno[], int tamanho){
    int matricula;
    string nome;
    int qtdNotas;
    
    cout << "Digite quantas notas os alunos terão? " << endl;
    cin >> qtdNotas;
    
    for(int i = 0 ; i < tamanho ; i++){
            cout << "" << endl;
            cout << "---------------------------------------" << endl;
            cout << "Informações do " << i + 1 << "° aluno." << endl;
            cout << "Digite o nome do aluno : " << endl;
            cin >> nome;
            cout << "Digite a matricula do aluno : " << endl;
            cin >> matricula;
            
            // Aloca espaço para as notas do aluno
            double *nota = new double[qtdNotas];

            // Loop para inserir as notas
            for (int n = 0 ; n < qtdNotas ; n++){
                cout << "Digite a " << n + 1 << "° nota : " << endl;
                cin >> nota[n];
            }

            cout << "---------------------------------------" << endl;

            // Atribui os valores para o aluno atual
            aluno[i].matricula = matricula;
            aluno[i].nome = nome;
            aluno[i].nota = nota;
            aluno[i].qtdNotas = qtdNotas;
    }
}

void buscarAluno(alunos aluno[], int tamanho){
    int matricula = 0;
    int contador = 0;
    
    cout << "Digite a matricula do aluno : ";
    cin >> matricula;
    cout << "" << endl;
    
    for (int i = 0 ; i < tamanho ; i++){
        contador++;
        if (matricula == aluno[i].matricula){
            cout << contador << "° Aluno encontrado" << endl;
            cout << "Nome: " << aluno[i].nome << endl;
            cout << "Matrícula: " << aluno[i].matricula << endl;
            cout << "Notas:" << endl;
            for (int j = 0; j < aluno[i].qtdNotas; j++) {
                cout << "Nota " << j + 1 << ": " << aluno[i].nota[j] << endl;
            }
        }
    }
    cout << "" << endl;
    cout << "---------------------------------------" << endl;
    cout << "" << endl;
}

void imprimirAlunos(alunos aluno[], int tamanho){
    
    int contador = 1;
    
    cout << "" << endl;
    cout << "---------------------------------------" << endl;
    cout << "Listagem de todos os Alunos cadastrados :" << endl;
    cout << "" << endl;
    
    for(int i = 0 ; i < tamanho ; i++){
        cout << contador << "° Aluno : Nome: " << aluno[i].nome << ", matrícula: " << aluno[i].matricula;
        for (int j = 0; j < aluno[i].qtdNotas; j++) {
        cout << ", nota " << j + 1 << "° : " << aluno[i].nota[j];
        }
        contador++;
        cout << "" << endl;
    }
    
    cout << "" << endl;
    cout << "---------------------------------------" << endl;
    cout << "" << endl;
}

void mediaAluno(alunos aluno[], int tamanho){
    
    double media = 0;
    
    cout << "" << endl;
    cout << "---------------------------------------" << endl;
    cout << "Listagem de todos os Alunos cadastrados:" << endl;
    cout << "" << endl;
    
    for(int i = 0 ; i < tamanho ; i++){
        cout << i + 1 << "° Aluno: Nome: " << aluno[i].nome << ", notas: ";
        for (int j = 0; j < aluno[i].qtdNotas; j++) {
            cout << "Nota " << j + 1 << ": " << aluno[i].nota[j] << ", ";
            media += aluno[i].nota[j];
        }
        media = media / aluno[i].qtdNotas;
        cout << " média: " << media << endl;
        media = 0; // Zerar a média para o próximo aluno
    }
    
    cout << "" << endl;
    cout << "---------------------------------------" << endl;
    cout << "" << endl;
}

void mediaAlunoEspecifico(alunos aluno[], int tamanho){
    int matricula = 0;
    int contador = 0;
    double media;
    
    cout << "Digite a matricula do aluno : ";
    cin >> matricula;
    cout << "" << endl;
    
    for (int i = 0 ; i < tamanho ; i++){
        contador++;
        if (matricula == aluno[i].matricula){
            cout << contador << "° Aluno encontrado" << endl;
            cout << "Nome: " << aluno[i].nome << endl;
            cout << "Matricula: " << aluno[i].matricula << endl;
            cout << "Notas:" << endl;
            for (int j = 0; j < aluno[i].qtdNotas; j++) {
                cout << "Nota " << j + 1 << ": " << aluno[i].nota[j] << endl;
                media += aluno[i].nota[j];
            }
        media = media / aluno[i].qtdNotas;
        cout << "Media: " << media << endl;
        media = 0; // Zerar a média para o próximo aluno
        }
    }
    cout << "" << endl;
    cout << "---------------------------------------" << endl;
    cout << "" << endl;
}

void aprovados(alunos aluno[], int tamanho){
    
    int contador = 1;
    
    cout << "" << endl;
    cout << "---------------------------------------" << endl;
    cout << "Listagem de todos os Alunos Aprovados :" << endl;
    cout << "" << endl;
    
    for (int i = 0; i < tamanho; i++) {
        double media = 0; 
        
        for (int j = 0; j < aluno[i].qtdNotas; j++) {
            media += aluno[i].nota[j];
        }
        
        media = media / aluno[i].qtdNotas;
        
        if(media >= 6){
            cout << contador << "Aluno: " << aluno[i].nome << " - Aprovado." << endl;
            contador++;
        }
    }
    
    cout << "" << endl;
    cout << "---------------------------------------" << endl;
    cout << "" << endl;
}

//7. Atualizar notas: Permite atualizar as notas de um aluno específico.

void atualizarNotas(alunos aluno[], int tamanho){
    int matricula = 0;
    int contador = 0;
    
    cout << "Digite a matricula do aluno : ";
    cin >> matricula;
    cout << "" << endl;
    
    for (int i = 0 ; i < tamanho ; i++){
        contador++;
        if (matricula == aluno[i].matricula){
            cout << contador << "° Aluno encontrado" << endl;
            cout << "Nome: " << aluno[i].nome << endl;
            for (int j = 0; j < aluno[i].qtdNotas; j++) {
                cout << "Nota " << j + 1 << " : ";
                cin >> aluno[i].nota[j];
                cout << "" << endl;
            }
        }
    }
    cout << "" << endl;
    cout << "---------------------------------------" << endl;
    cout << "" << endl;
}