#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float area;
	float perimetro;
	float raio;
	
	printf("Insira o valor do raio\n");
	scanf("%f", &raio);
	
	area = M_PI * (raio * raio);
	perimetro = (2 * M_PI) * raio;
	
	printf("Area do circulo: %.1f\nPerimetro do circulo: %.1f\n", area, perimetro);
	
	return 0;
}
