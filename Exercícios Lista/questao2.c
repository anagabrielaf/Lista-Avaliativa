#include <stdio.h>
#include <math.h>

  int main() {
  	
  	float x1, y1, x2, y2, distancia;
  	
  	
  	printf("Informe as coordenadas de p1 (x1,y1): ");
  	scanf("%f %f", &x1, &y1);
  	printf("Informe as coordenadas de p2 (x2,y2): ");
  	scanf("%f %f",&x2,&y2);
  	
  	
  	distancia = sqrtf(powf((x2 - x1), 2) + powf((y2 - y1), 2));
  	
  	  printf("A distância entre os pontos p1(%.2f, %.2f) e p2(%.2f, %.2f) é: %.4f\n", x1, y1, x2, y2, distancia);
    








	return 0;
}
