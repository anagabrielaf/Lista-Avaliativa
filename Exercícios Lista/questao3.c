#include <stdio.h>
#include <math.h>
#include <locale.h>

#define PI 3.14159

int main() {
	setlocale(LC_ALL, "Portuguese");
	double raio, volume, area;
	
	printf("Informe o valor da esfera: ");
	scanf("%lf", &raio);
	
     volume = (4.0/3) * PI * pow(raio, 3);
     area = 4 * PI * pow(raio,2);
     
     printf("O volume da esfera do raio %.2lf é: 2.lf\n", raio, volume);
     printf("A área da superfície da esfera do raio %.2lf é: %.2lf\n", raio, area);
     
     
	return 0;
}
