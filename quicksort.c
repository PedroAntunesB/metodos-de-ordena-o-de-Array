#include <stdio.h>

void quick(int *vetor, int tamanho);
void qs(int *vetor, int left, int right);

int main(void)
{
    int vetor[10], tamanho = 10, vetorcomp[10];

    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite um valor para o vetor: ");
        scanf("%d", &vetor[i]);
        vetorcomp[i] = vetor[i];
    }

    quick(vetor, tamanho);

    printf("\n-----------vetor normal---------");
    for (int i = 0; i < tamanho; i++)
    {
        printf("\n%d", vetorcomp[i]);
    }
    printf("\n----------Vetor ordenado com quicksort-------");
    for (int i = 0; i < tamanho; i++)
    {
        printf("\n%d", vetor[i]);
    }
}

void quick(int *vetor, int tamanho)
{
    qs(vetor, 0, tamanho - 1);
}

void qs(int *vetor, int left, int right)
{
    int i, j;
    int x, y;
    i = left;
    j = right;
    x = vetor[(left + right) / 2];
    do
    {
        while (i < right && vetor[i] < x)
        {
            i++;
        }
        while (j > left && vetor[j] > x)
        {
            j--;
        }
        if (i <= j)
        {
            y = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = y;
            i++;
            j--;
        }
    } while (i <= j);
    if (left < j)
    {
        qs(vetor, left, j);
    }
    if (i < right)
    {
        qs(vetor, i, right);
    }
}