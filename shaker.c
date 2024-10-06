#include <stdio.h>

int shakersort(int *vetor, int tamanho);

int main(void)
{
    int vetor[10], tamanho = 10, vetorcomp[10];

    for (int i = 0; i < tamanho; i++)
    {
        printf("digite um valor para o vetor:");
        scanf("%d", &vetor[i]);
        vetorcomp[i] = vetor[i];
    }

    printf("\n-----------vetor normal---------");
    for (int i = 0; i < tamanho; i++)
    {
        printf("\n%d", vetorcomp[i]);
    }

    shakersort(vetor, tamanho);

    printf("\n----------Vetor ordenado com shakersort-------");
    for (int i = 0; i < tamanho; i++)
    {
        printf("\n%d", vetor[i]);
    }
}

int shakersort(int *vetor, int tamanho)
{
    int a, b, c, d, troca;
    c = 1;
    b = tamanho - 1;
    d = tamanho - 1;
    do
    {
        for (a = d; a >= c; a--)
        {
            if (vetor[a - 1] > vetor[a])
            {
                troca = vetor[a-1];
                vetor[a-1] = vetor[a];
                vetor[a] = troca;
                b = a;
            }
        }
        c = b+1;
        for(a=c; a<d+1;a++)
        {
            if(vetor[a-1]>vetor[a])
            {
                troca = vetor[a-1];
                vetor[a-1] = vetor[a];
                vetor[a] = troca;
                b=a;
            }
        }
        d = b-1;
    } while (c <= d);
    return *vetor;
}