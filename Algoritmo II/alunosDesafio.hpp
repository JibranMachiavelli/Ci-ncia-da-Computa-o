#ifndef ALUNOS_HPP
#define ALUNOS_HPP

#include <string> // Adicionando include para o tipo string

using namespace std;

    struct alunos {
    int matricula;
    string nome;
    double *nota;
    int qtdNotas;
    };

// Corrigindo o nome da função para menuNavegacao (sem o acento)
void menuNavegacao(alunos aluno[], int tamanho);
void adicionarAluno(alunos aluno[], int tamanho);
void buscarAluno(alunos aluno[], int tamanho);
void imprimirAlunos(alunos aluno[], int tamanho);
void mediaAluno(alunos aluno[], int tamanho);
void mediaAlunoEspecifico(alunos aluno[], int tamanho);
void aprovados(alunos aluno[], int tamanho);
void atualizarNotas(alunos aluno[], int tamanho);

#endif

