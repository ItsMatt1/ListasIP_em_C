#include <stdio.h>

	main()
{
	float ganho_por_hora, numero_horas_trabalhadas_mes, salario_total;
	
	printf("Insira quanto você ganha por hora = ");
	scanf("%f", &ganho_por_hora);
	
	printf("Insira o número de horas trabalhas no mês = ", numero_horas_trabalhadas_mes);
	scanf("%f", &numero_horas_trabalhadas_mes);
	
	salario_total = (ganho_por_hora * numero_horas_trabalhadas_mes);
	
	printf ("O seu sálario total no mês é de = %f", salario_total);
	
	return(0);
	
}
