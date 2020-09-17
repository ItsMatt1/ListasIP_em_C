#include <stdio.h>

main ()
{
	float pesoDosPeixes, excesso, multa;
		
	printf("Insira o peso dos peixes.\n");	
	scanf("%f", &pesoDosPeixes);
	
	excesso = ((pesoDosPeixes) - 50);
	
	multa = ((excesso) * 4.0);
	
	printf("O excesso de Kgs dos Peixes é = %f\n", excesso);
	printf("O valor da multa é = %f\n", multa);
	printf("O peso dos peixes é = %f\n", pesoDosPeixes);
	
}
