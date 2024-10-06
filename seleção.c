#include <stdio.h>

int sortselecao(int *vetor, int tamanho);

int main(void)
{
    int vetor[10], tamanho = 10, vetorcomp[10];

    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite um valor para o vetor: ");
        scanf("%d", &vetor[i]);
        vetorcomp[i] = vetor[i];
    }

    sortselecao(vetor, tamanho);

    printf("\n-----------vetor normal---------");
    for (int i = 0; i < tamanho; i++)
    {
        printf("\n%d", vetorcomp[i]);
    }
    printf("\n----------Vetor ordenado com ordenacao por selecao-------");
    for (int i = 0; i < tamanho; i++)
    {
        printf("\n%d", vetor[i]);
    }
}

int sortselecao(int *vetor, int tamanho)
{
    int a, b, c;
    int troca;

    for (a = 0; a < tamanho-1; ++a)
    {
        c=a; 
        troca = vetor[a];
        for(b=a+1; b<tamanho; ++b)
        {
            if(vetor[b]<troca)
            {
                c=b;
                troca=vetor[b];
            }
        }
        vetor[c] = vetor[a];
        vetor[a] = troca;
    }
    return *vetor;
}