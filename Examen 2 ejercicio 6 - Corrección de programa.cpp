/* Correcci�n de programa que dice si la suma de 2 n�meros que ingresamos es correcta o no*/

#include <stdio.h>

int main (){
	
	int n1, n2, resultado, suma;
	
	printf("Introduzca un numero:\n");
	scanf("%d", &n1);
	
	printf("Introduzca otro numero:\n");
	scanf("%d",&n2);
	
	printf("Cuanto suman?:\n");
	scanf("%d",&suma);
	
	resultado=n1+n2; //Operaci�n
	
	if (suma==resultado)
	{
		printf("Correcto\n");
	}
	else{
		printf("INCORRECTO: La suma es %d.\n",resultado);
	}
	
	return 0;
}
