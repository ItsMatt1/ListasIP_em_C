// Exercicio 8

#include <stdio.h>

main ()
{
	double precoDeFab, percDoDist, percDeImp, valorTotal;
	
	scanf("%lf", &precoDeFab);
	scanf("%lf", &percDoDist);
	scanf("%lf", &percDeImp);
	
	valorTotal = ((precoDeFab * (percDoDist / 100)) + ((percDeImp / 100) * precoDeFab) + precoDeFab);
	
	printf("O VALOR DO CARRO E = %.2lf", valorTotal);
	
}
