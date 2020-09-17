// Exercicio 5

#include <stdio.h>
#include <math.h>

main ()
{
	double  hPiramide, arestaHexagono, areaHexagono, volumePiramide;
	
	scanf("%lf", &hPiramide);
	scanf("%lf", &arestaHexagono);
	
	areaHexagono = ((3 * arestaHexagono * arestaHexagono * sqrt(3)) / 2);
	
	volumePiramide = ((1 * areaHexagono * hPiramide) / 3);
	
	printf("O VOLUME DA PIRAMIDE E = %.2lf METROS CUBICOS", volumePiramide);
}
