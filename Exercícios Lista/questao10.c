#include <stdio.h>
#include <locale.h>
 
    int main() {
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;
    float media;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);
    printf("Digite o quarto número: ");
    scanf("%d", &num4);
    printf("Digite o quinto número: ");
    scanf("%d", &num5);
    printf("Digite o sexto número: ");
    scanf("%d", &num6);
    printf("Digite o setimo número: ");
    scanf("%d", &num7);
    printf("Digite o oitavo número: ");
    scanf("%d", &num8);
    printf("Digite o nono número: ");
    scanf("%d", &num9);
    printf("Digite o decimo número: ");
    scanf("%d", &num10);

    media = (num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9 + num10) / 10.0;

    printf("A media dos números digitados é: %.2f\n", media);

    return 0;
}

