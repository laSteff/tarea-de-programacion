//ejercio 3 de funciones
#include<stdio.h>
#include<string.h>

int main(){
	
	char Cadena1[20], Cadena2[20], Final[50];
	
	printf("\nIngrese la palabra para cadena1: ");
	fgets(Cadena1, 20, stdin);
	strtok(Cadena1, "\n");
	printf("\nIngrese la palabra para cadena2: ");
	fgets(Cadena2, 20, stdin);
	strtok(Cadena2, "\n");
	
	strcat(Final, Cadena1 );
	strcat(Final,"-");
	strcat(Final, Cadena2);
	printf("\nLa cadena concatenada es: %s",Final);
	strrev(Final);
	printf("\nLa cadena resultante es: %s ", Final);
	
	return 0;
}



