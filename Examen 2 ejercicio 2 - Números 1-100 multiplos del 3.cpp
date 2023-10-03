/* Programa que muestra numeros del 1 al 100 y dice si es multiplo de 3 o no */

#include <stdio.h> 

int main ()
{
	int numero=1;
	
	for (numero=1;numero<=100;numero++)
	{
		if (numero%3==0)
		{
			printf("\033[0;36m");//Color cyan
			printf("%d es multiplo de 3\n", numero);
			printf("\033[0m");//Resetea color
		}
		else 
		{
			printf("%d NO es multiplo de 3\n",numero);
		}
		
	}	
	
	return 0;
}
