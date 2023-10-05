/* Programa que dice si un año es bisiesto o no */

#include <stdio.h>

int main ()
{

	int agno; 
	char n=164;//Código ASCII de la "ñ"
	 
	printf("Ingrese un a%co: ",n);//Se agrega la letra "ñ"
	scanf("%d",&agno);
	 
	if (agno%4==0 && agno%100!=0 || agno%400==0)//Año bisiesto es divisible entre 4 y entre 100 o 400
	{
		printf("\n%d es un a%co bisiesto.",agno,n);
	} 
	else
	{
		printf("\n%d NO es un a%co bisiesto.",agno,n);
	}

	return 0;
}

