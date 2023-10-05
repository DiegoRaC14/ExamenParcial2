/* Programa que intercambia valores de variables */

#include <stdio.h>

int main ()
{	 
	int v1,v2,v3,vextra,vtemp2;
	 
	 
	printf("Ingrese un valor para la variable 1: ");
	scanf("%d",&v1);
	
	printf("Ingrese un valor para la variable 2: ");	 
	scanf("%d",&v2);
	 
	printf("Ingrese un valor para la variable 3: "); 
	scanf("%d",&v3);
	  
	vextra=v1; 
	v1=v2; 
	v2=v3;
	v3=vextra;//Termina primera vuelta
	 
	vextra=v1; 
	v1=v2;
	v2=v3;
	v3=vextra;
	 
	printf("\033[0;36m");//Color cyan 
	printf("\nNuevas variables: ");
	printf("\033[0;0m");//Resetear color
	printf("\nVariable 1: %d\nVariable 2: %d\nVariable 3: %d\n",v1,v2,v3);//Imprimir variables

	return 0;	 
}

