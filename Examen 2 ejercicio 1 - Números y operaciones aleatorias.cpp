/* Programa que genera números y operaciones aleatorios */

#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main ()
{
	srand(time(NULL));
	int nA1, nA2; //Numeros aleatorios
	int opc; //Operacion aleatoria
	int operacion;
	
	do 
	{	
		nA1=rand()%10;
		nA2=rand()%10;
		opc=rand()%6;
		
		switch(opc)
		{
			case 1:
			operacion=nA1+nA2;
			printf("%d + %d  = %d \n",nA1,nA2,operacion);
			break;
				
			case 2:
			operacion=nA1-nA2;
			printf("%d - %d  = %d \n",nA1,nA2,operacion);
			break;
			
			case 3:
			operacion=nA1*nA2;
			printf("%d * %d  = %d \n",nA1,nA2,operacion);
			break;
			
			case 4:
			operacion=nA1/nA2;
			printf("%d / %d  = %d \n",nA1,nA2,operacion);
			break;
				
		}
	} while (opc<5);
	
	return 0;
}
