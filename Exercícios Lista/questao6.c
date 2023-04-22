#include <stdio.h>
#include <locale.h>

    int main() {
    setlocale(LC_ALL, "Portuguese");
    	
    int i, sum = 0;

    for (i = 1; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    printf("A soma dos múltiplos de 3 ou 5 abaixo de 1000 e: %d\n", sum);

    return 0;
}

