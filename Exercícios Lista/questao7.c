#include <stdio.h>
#include <locale.h>

   int main() {
   setlocale(LC_ALL, "Portuguese");
    int n, i, fib1 = 0, fib2 = 1, fib;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
    }

    printf("O %d-esimo termo da sequência de Fibonacci é: %d\n", n, fib);

    return 0;
}

