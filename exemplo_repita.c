#include <stdio.h>

int main(){
	
double  km, milhas ;
char resposta;

//do	
	
do
{
 printf("digite o valor em km:");
 scanf("%lf", &km);

 // 1 milha = 1,6 km
 milhas = km * 1.60934;
 printf("o valor em milhas é: %.2f\n", milhas);

 printf("deseja repetir (s/n)");
   scanf("%c", &resposta); 
 }while (resposta == 's');	
	return 0;
}

