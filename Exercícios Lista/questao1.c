#include <stdio.h>
//Questão 1

void calcularDiferenca(int A, int B, int C, int D, int *diferenca) {
    *diferenca = (A * B - C * D);
}

int main() {
    int A, B, C, D, diferenca;
    
    scanf("%d %d %d %d", &A, &B, &C, &D);
    
    calcularDiferenca(A, B, C, D, &diferenca);
    
    printf("DIFERENCA = (%d * %d - %d * %d)\n", A, B, C, D);
    printf("DIFERENCA = (%d)\n", diferenca);
    
    return 0;
}

