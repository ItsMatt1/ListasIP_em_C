// Exercicio 1

#include <stdio.h>


main ()

{
	double salarioMinimo, kWPorResidencia, custoPorkW, custoDoCons, custoComDesc;
	
	scanf  ("%lf", &salarioMinimo);
	
	scanf  ("%lf", &kWPorResidencia);
	
	custoPorkW = (salarioMinimo * 0.7 / 100) ;
	
	custoDoCons = (custoPorkW * kWPorResidencia);
	
	custoComDesc = (custoDoCons * 0.90);
	
	printf ("Custo por kW: R$ %.2lf\n", custoPorkW);
	printf ("Custo do consumo: R$ %.2lf\n", custoDoCons);
	printf ("Custo com desconto: R$ %.2lf\n", custoComDesc);
}

