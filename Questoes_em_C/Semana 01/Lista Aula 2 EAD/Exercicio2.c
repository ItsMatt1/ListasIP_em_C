#include <stdio.h>

	main()
{
	float ganho_por_hora, numero_horas_trabalhadas_mes, salario_total;
	
	printf("Insira quanto voc� ganha por hora = ");
	scanf("%f", &ganho_por_hora);
	
	printf("Insira o n�mero de horas trabalhas no m�s = ", numero_horas_trabalhadas_mes);
	scanf("%f", &numero_horas_trabalhadas_mes);
	
	salario_total = (ganho_por_hora * numero_horas_trabalhadas_mes);
	
	printf ("O seu s�lario total no m�s � de = %f", salario_total);
	
	return(0);
	
}
