//ejercio 3 de funciones
#include<stdio.h>
#include<string.h>

int main(){
	
	char Cadena1[20], Cadena2[20], Final[50];
	
	printf("\nIngrese la palabra para cadena1: ");
	scanf("%s", Cadena1);
	printf("\nIngrese la palabra para cadena2: ");
	scanf("%s", Cadena2);
	
	strcat(Final, Cadena1 );
	strcat(Final, "-");
	strcat(Final, Cadena2);
	printf("\nLa cadena concatenada es: %s",Final);
	strrev(Final);
	printf("\nLa cadena resultante es: %s ", Final);
	return 0;
}



