#include <stdio.h>
#include <locale.h>
 
    int main() {
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;
    float media;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);
    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro n�mero: ");
    scanf("%d", &num3);
    printf("Digite o quarto n�mero: ");
    scanf("%d", &num4);
    printf("Digite o quinto n�mero: ");
    scanf("%d", &num5);
    printf("Digite o sexto n�mero: ");
    scanf("%d", &num6);
    printf("Digite o setimo n�mero: ");
    scanf("%d", &num7);
    printf("Digite o oitavo n�mero: ");
    scanf("%d", &num8);
    printf("Digite o nono n�mero: ");
    scanf("%d", &num9);
    printf("Digite o decimo n�mero: ");
    scanf("%d", &num10);

    media = (num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9 + num10) / 10.0;

    printf("A media dos n�meros digitados �: %.2f\n", media);

    return 0;
}

