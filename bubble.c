#include <stdio.h>

int bubblesort(int *vetor, int tamanho);
int main(void)
{
    int vetor[10], tamanho = 10, vetorcomp[10];

    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite um valor para o vetor: ");
        scanf("%d", &vetor[i]);
        vetorcomp[i] = vetor[i];
    }

    bubblesort(vetor, tamanho);

    printf("\n-----------vetor normal---------");
    for (int i = 0; i < tamanho; i++)
    {
        printf("\n%d", vetorcomp[i]);
    }
    printf("\n----------Vetor ordenado com bubblesort-------");
    for (int i = 0; i < tamanho; i++)
    {
        printf("\n%d", vetor[i]);
    }
}

int bubblesort(int *vetor, int tamanho)
{
    int troca;
    for (int j = 1; j < tamanho; j++)
    {
        for (int i = 0; i < tamanho - 1; i++)
        {

            if (vetor[i] > vetor[i + 1])
            {
                troca = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = troca;
            }
        }
    }
    return *vetor;
}