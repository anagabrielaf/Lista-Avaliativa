#include <stdio.h>
#include <locale.h>

    int main() {
    setlocale(LC_ALL, "Portuguese");
    	
    int n, max = -1000000, min = 1000000;

    while (1) {
        printf("Digite um numero inteiro (negativo para sair): ");
        scanf("%d", &n);

        if (n < 0) {
            break;
        }

        if (n > max) {
            max = n;
        }

        if (n < min) {
            min = n;
        }
    }

    printf("Maior numero: %d\n", max);
    printf("Menor numero: %d\n", min);

    return 0;
}

