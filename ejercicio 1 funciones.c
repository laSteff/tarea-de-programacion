//ejercicio 1 de funciones 
#include<stdio.h>

int suma(int num1, int num2);
int main () {
	int num1,num2;

	printf("\nIngrese el primer numero: ");
	scanf("%i", &num1);
	printf("\nIngrese el segundo numero: ");
	scanf("%i",&num2);
	
	printf("\nEl resultado de la suma es: %i", suma(num1, num2));
	
	return 0;
}
int suma(int num1, int num2){
	int suma;
	suma = num1 + num2;
	
	return suma;
}
