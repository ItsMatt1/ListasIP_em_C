#include <stdio.h>
#define PI 3.14

	main()
{
	
	float raio, area_total;
	
	printf("Insira o raio de um c�rculo : ");
	scanf("%f", &raio);
	
	area_total = (PI * (raio * raio));
	
	printf("A �rea do c�rculo � de = %.2f", area_total);
	
	return(0);
	
}

