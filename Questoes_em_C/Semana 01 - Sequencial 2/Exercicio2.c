#include <stdio.h>

	main()
{
	float qntPao, valorPao, valorBroa, qntBroa, poupanca, valorArrecadado;
	
	printf("Insira a quantidade de p�es :\n");
	scanf("%f", &qntPao);
	
	printf("Insira a quantidade de broas :\n");
	scanf("%f", &qntBroa);
	
	
	valorPao = (qntPao * 0.12); 
	valorBroa = (qntBroa * 1.50);
	
	valorArrecadado = (valorPao + valorBroa);
	
	poupanca = (0.10 * valorArrecadado);
	
	
	printf("O Valor arrecadado � de = %f\n", valorArrecadado);
	printf("O Valor que deve colocar na poupan�a � de = %f", poupanca);
					
}
