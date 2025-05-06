#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 200  // Tamanho do vetor
#define MAX 100  // Valores no intervalo de 0 a 99

int main() {
    int vetor[TAM];
    int auxiliar[MAX] = {0};  // Inicializa todos os elementos com zero
    int i, j, k = 0;

    srand(time(NULL));

    // Populando vetor com números aleatórios de 0 a 99
    for (i = 0; i < TAM; i++) {
        vetor[i] = rand() % MAX;
    }

    // Exibindo vetor original
    printf("Vetor original:\n");
    for (i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n\n");

    // Preenchendo o vetor auxiliar com contagem das ocorrências
    for (i = 0; i < TAM; i++) {
        auxiliar[vetor[i]]++;
    }
    
     // Exibindo vetor auxiliar
     printf("Vetor Auxiliar:\n");
     for (i = 0; i < MAX; i++) {
         printf("%d ", auxiliar[i]);
     }
     printf("\n");

    // Reconstruindo o vetor original, agora ordenado
    for (i = 0; i < MAX; i++) {
        for (j = 0; j < auxiliar[i]; j++) {
            vetor[k++] = i;
        }
    }
    printf("\n");

    // Exibindo vetor ordenado
    printf("Vetor ordenado:\n");
    for (i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Esvaziando vetor auxiliar
    for (i = 0; i < MAX; i++) {
        auxiliar[i] = 0;
    }
    return 0;
}