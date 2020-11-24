#include <stdio.h>

    main ()
	
{
	float valor_metros, valor_centimentros;
		
	printf("Insira o valor em metros = ");
	scanf("%f", &valor_metros);
	
	valor_centimentros = (valor_metros * 100);
	
	printf("O valor em centímetros é = %.2f", valor_centimentros);
	
	return(0);
	
}
