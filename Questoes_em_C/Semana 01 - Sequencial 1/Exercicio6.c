// Exercicio 6

#include <stdio.h>

 int main()
{
   int horas, minutos, segundos, segundosTotal;
   
    scanf("%d", &horas);
   
    scanf("%d", &minutos);
   
    scanf("%d", &segundos);
    
    segundosTotal = ((horas * 3600) + (minutos * 60) + segundos);
   
	printf("O TEMPO EM SEGUNDOS E = %d\n", segundosTotal);
	
	return 0;
}
