#include <stdio.h>

	main()
{
	float taxaFixaPorDia, taxaPorKm, numeroDeDias, kmRodados, valorTotal, valorTotalComDesconto;
	
	printf("Insira a taxa fixa por dia : \n");
	scanf("%f", &taxaFixaPorDia);
	
	printf("Insira a taxa por Km : \n");
	scanf("%f", &taxaPorKm);
	
	printf("Insira o Número de dias : \n");
	scanf("%f", &numeroDeDias);
	
	printf("Insira os Km rodados : \n");
	scanf("%f", &kmRodados);
	
		
	valorTotalComDesconto = (((0.90 * taxaFixaPorDia) * numeroDeDias) + (taxaPorKm * kmRodados));
	
	valorTotal = (((taxaFixaPorDia * numeroDeDias) + (taxaPorKm * kmRodados)) - (valorTotalComDesconto)) ;
		
	printf("O valor total com desconto é de = %f\n", valorTotalComDesconto);	
	printf("O valor do desconto é de = %f\n", valorTotal);
	printf("O número de dias é = %f\n", numeroDeDias);
	printf("A quilometragem rodada é = %f\n", kmRodados);
		
}
