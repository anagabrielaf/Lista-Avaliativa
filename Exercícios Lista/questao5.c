#include <stdio.h>
#include <locale.h>

 int main() {
 	setlocale(LC_ALL, "Portuguese");
 	int num, i;
 	
 	
 	printf("Digite um n�mero positivo: ");
 	scanf("%d", &num);
 	
 	printf("Os divisores do n�mero digitado %d �: ", num);
 	for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");


	return 0;
}
