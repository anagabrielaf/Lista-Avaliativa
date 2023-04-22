#include <stdio.h>
#include <locale.h>

    int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int opcao, qtd, total = 0;
    char continua;

    do {
        printf("Escolha uma fruta:\n");
        printf("1 - Abacaxi (R$ 5,00)\n");
        printf("2 - Maçã (R$ 1,00)\n");
        printf("3 - Pêra (R$ 4,00)\n");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Quantos abacaxis você deseja comprar?\n");
                scanf("%d", &qtd);
                total += qtd * 5;
                break;
            case 2:
                printf("Quantas maçãs você deseja comprar?\n");
                scanf("%d", &qtd);
                total += qtd;
                break;
            case 3:
                printf("Quantas pêras você deseja comprar?\n");
                scanf("%d", &qtd);
                total += qtd * 4;
                break;
            default:
                printf("Opção inválida!\n");
        }

        printf("Deseja comprar mais frutas? (s/n)\n");
        scanf(" %c", &continua);
    } while(continua == 's' || continua == 'S');

    printf("Total da compra: R$ %d\n", total);

    return 0;
}

