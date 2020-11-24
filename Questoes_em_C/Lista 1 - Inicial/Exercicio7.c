// Exercicio 7

#include <stdio.h>
#include <math.h>

main()
{
	double L1, L2, L3, T, area;
	
	scanf("%lf", &L1);
	scanf("%lf", &L2);
	scanf("%lf", &L3);
	
	T = ((L1 + L2 + L3) / 2);
	
	area = sqrt(T * (T - L1) * (T - L2) * (T - L3));
		
	printf("A AREA DO TRIANGULO E = %.2lf", area );
}
