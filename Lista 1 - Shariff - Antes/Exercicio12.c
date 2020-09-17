// Exercicio 12

#include <stdio.h>

main()
{

	int Valor, Resultado, Resultado2, Resultado3, Resultado4, Resultado5, Resultado6, Resultado7;

	scanf("%d", &Valor);

	Resultado = (Valor / 100);
	Resultado2 = ((Valor - Resultado * 100) / 50);
	Resultado3 = ((Valor - Resultado * 100 - Resultado2 * 50) / 10);
	Resultado4 = (Valor - Resultado * 100 - Resultado2 * 50 - Resultado3 * 10);

	printf("NOTAS DE 100 = %d\n", Resultado);
	printf("NOTAS DE 50 = %d\n", Resultado2);
	printf("NOTAS DE 10 = %d\n", Resultado3);
	printf("MOEDAS DE 1 = %d\n", Resultado4);
}
