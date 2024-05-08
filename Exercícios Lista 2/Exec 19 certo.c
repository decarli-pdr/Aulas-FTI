#include <stdio.h>

int main() {
    int r[10], s[20], x[30];
    int tamanhoX = 0;

    // Preenchendo o vetor r
    printf("Digite os elementos do vetor r (tamanho máximo 10):\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &r[i]);
        x[tamanhoX++] = r[i]; // Adicionando elemento de r em x
    }

    // Preenchendo o vetor s
    printf("Digite os elementos do vetor s (tamanho máximo 20):\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &s[i]);
        x[tamanhoX++] = s[i]; // Adicionando elemento de s em x
    }

    // Removendo elementos duplicados em x
    for (int i = 0; i < tamanhoX; i++) {
        for (int j = i + 1; j < tamanhoX;) {
            if (x[j] == x[i]) {
                for (int k = j; k < tamanhoX; k++) {
                    x[k] = x[k + 1];
                }
                tamanhoX--;
            } else {
                j++;
            }
        }
    }

    // Exibindo o vetor x
    printf("O vetor x (união de r e s) é:\n");
    for (int i = 0; i < tamanhoX; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");

    return 0;
}