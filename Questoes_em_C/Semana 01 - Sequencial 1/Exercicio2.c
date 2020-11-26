// Exercicio 2

#include  <stdio.h>

 main()
{
   double fah, cel, pol, mil; 
 
   scanf("%lf", &fah);
   
   scanf("%lf", &pol);
   
   mil = (pol * 25.4);
   
   cel = ((fah - 32) / 1.8);
     
   printf("O VALOR EM CELSIUS = %.2lf\n", cel);
   printf("A QUANTIDADE DE CHUVA E = %.2lf\n", mil);
   
}
