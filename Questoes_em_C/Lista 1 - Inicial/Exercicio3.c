// Exericio 3

#include <stdio.h>
#define PI 3.14159

main ()
{
	
	double r, h, areaCirculo, areaLateral, areaTotal, custo;
	
	scanf("%lf", &r);
	scanf("%lf", &h);
	
	areaCirculo = (PI * r * r);
	
	areaLateral = (2 * PI * r * h);
	
	areaTotal = ((2 * areaCirculo) + areaLateral);
	
	custo = (areaTotal * 100);
	
	printf("O VALOR DO CUSTO E = %.2lf\n", custo);
	
}
