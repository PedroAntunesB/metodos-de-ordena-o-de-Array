#include <stdio.h>

int sortinsercao(int *vetor, int tamanho);

int main(void)
{
    int vetor[10], tamanho = 10, vetorcomp[10];

    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite um valor para o vetor: ");
        scanf("%d", &vetor[i]);
        vetorcomp[i] = vetor[i];
    }

    sortinsercao(vetor, tamanho);

    printf("\n-----------vetor normal---------");
    for (int i = 0; i < tamanho; i++)
    {
        printf("\n%d", vetorcomp[i]);
    }
    printf("\n----------Vetor ordenado com ordenacao por insercao-------");
    for (int i = 0; i < tamanho; i++)
    {
        printf("\n%d", vetor[i]);
    }
}

int sortinsercao(int *vetor, int tamanho)
{
    int a, b;
    int troca;

    for (a = 1; a < tamanho; a++)
    {
        troca = vetor[a];
        b = a - 1;
        while (b >= 0 && troca < vetor[b])
        {
            vetor[b+1] = vetor[b];
            b--;
        }
        vetor[b+1] = troca;
    }
    return *vetor;
}