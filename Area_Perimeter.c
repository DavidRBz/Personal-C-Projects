#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main() {
	float area;
	float perimeter;
	float radius;
	
	printf("Insert the radius\n");
	scanf("%f", &radius);
	
	area = M_PI * (radius * radius);
	perimeter = (2 * M_PI) * radius;
	
	printf("Circle area: %.1f\nCircle Perimeter: %.1f\n", area, perimeter);
	
	return 0;
}
