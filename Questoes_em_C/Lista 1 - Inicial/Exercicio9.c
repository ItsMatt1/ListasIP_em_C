// Exericio 9 

#include <stdio.h>

main()
{
	double massaDoAviao, aceleracaoDoAviao, tempoEmSegundosGasto, velocidade, espaco, trabalho;
	
	scanf("%lf", &massaDoAviao);
	scanf("%lf", &aceleracaoDoAviao);
	scanf("%lf", &tempoEmSegundosGasto);
	
	velocidade = ((aceleracaoDoAviao * tempoEmSegundosGasto) * 3.6);	
	
	espaco = ((aceleracaoDoAviao * (tempoEmSegundosGasto * tempoEmSegundosGasto)) / 2);
	
	trabalho =  ((massaDoAviao * 1000 ) * (aceleracaoDoAviao * tempoEmSegundosGasto) * (aceleracaoDoAviao * tempoEmSegundosGasto) / 2);
	
	printf("VELOCIDADE = %.2lf\n", velocidade);
	printf("ESPACO PERCORRIDO = %.2lf\n", espaco);
	printf("TRABALHO REALIZADO = %.2lf\n", trabalho);
}
