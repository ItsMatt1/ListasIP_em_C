// Programa soma.c definido para exercitar a entrada de dados pelo teclado.

#include <stdio.h>

int main(void)
{
		int a, b;
		
		printf ("Digite o primeiro valor: ");
		scanf ("%d" , &a);
		
		printf ("Digite o segundo valor: ");
		scanf ("%d", &b);
		
		printf ("\n%d + %d eh: %d\n", a, b, a+b);
}
