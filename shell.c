#include <stdio.h>

int shellsort(int *vetor, int tamanho);

int main(void)
{
    int vetor[10], tamanho = 10, vetorcomp[10];

    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite um valor para o vetor: ");
        scanf("%d", &vetor[i]);
        vetorcomp[i] = vetor[i];
    }

    shellsort(vetor, tamanho);

    printf("\n-----------vetor normal---------");
    for (int i = 0; i < tamanho; i++)
    {
        printf("\n%d", vetorcomp[i]);
    }
    printf("\n----------Vetor ordenado com shellsort-------");
    for (int i = 0; i < tamanho; i++)
    {
        printf("\n%d", vetor[i]);
    }
}

int shellsort(int *vetor, int tamanho)
{
    int i,j, k, s, w;
    int x, a[5] = {9, 5, 3, 2, 1};

    for (w = 0; w < 5; w++)
    {
        k = a[w]; s=-k;

        for(i=k; i<tamanho; i++)
        {
            x=vetor[i];
            j=i-k;
            if(s==0)
            {
                s=-k;
                s++;
                vetor[s] = x;
            }
            while (x<vetor[j] && j>=0 && j<=tamanho)
            {
                vetor[j+k] = vetor[j];
                j=j-k;
            }
            vetor[j+k] = x;
            
        }
    }
    return *vetor;
}
