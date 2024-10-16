#include <iostream>
using namespace std;


void lerNotas(float* notas, int quantidadeAlunos) {
    cout << "Digite as notas dos alunos:" << endl;
    for (int i = 0; i < quantidadeAlunos; i++) {
        cout << "Nota do aluno " << i + 1 << ": ";
        cin >> *(notas + i); // Lê a nota do aluno e armazena no vetor
    }
}

void calcularMedia(float* notas, int quantidadeAlunos) {
    float soma = 0.0;
    float* ponteiro = notas; // Cria um ponteiro para o início do vetor
    for (int i = 0; i < quantidadeAlunos; i++) {
        soma += *ponteiro; // Soma as notas dos alunos
        ponteiro++; // Incrementa o ponteiro para apontar para o próximo elemento
    }
    float media = soma / quantidadeAlunos;
    cout << "Média aritmética das notas: " << media << endl;
}

int main() {
    int quantidadeAlunos;

    cout << "Digite a quantidade de alunos: ";
    cin >> quantidadeAlunos;

    // Alocação dinâmica de memória para o vetor de notas
    float* notas = new float[quantidadeAlunos];

    // Ler as notas dos alunos
    lerNotas(notas, quantidadeAlunos);

    // Calcular e imprimir a média aritmética das notas
    calcularMedia(notas, quantidadeAlunos);

    // Liberar a memória alocada
    delete[] notas;

    return 0;
}
