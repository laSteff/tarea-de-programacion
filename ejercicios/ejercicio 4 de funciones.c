#include <stdio.h>
#include <math.h>

float resul_ecuacionSegundogrado(float a, float b, float c);


int main(){
	
	float a, b, c, funcion;
	printf("\nIntroduce el valor de a: "); scanf("%f", &a);
	printf("\nIntroduce el valor de b: "); scanf("%f", &b);
	printf("\nIntroduce el valor de c: "); scanf("%f", &c);
	            
	funcion = resul_ecuacionSegundogrado(a, b, c);

    if(funcion == 0){
		printf("\nla solucion de la ecuacion es:\n");
	    printf("\nSolucion : %.2f\n", - b / (2 * a));
    }else if (funcion > 0){
		printf("\nla solucion de la ecuacion es:\n");
		printf("\x1: %.2f\n", (- b + sqrt(funcion)) / (2 * a));
		printf("\nx1: %.2f\n", (- b - sqrt(funcion)) / (2 * a));
	}else{
		printf("\nla solucion de la ecuacion es:\n");
		printf("\nx1: %.2f+ %.2f i\n", - b / (2 * a), (sqrt(-funcion)) / (2 * a));
		printf("\nx2: %.2f- %.2f i\n", - b / (2 * a), (sqrt(-funcion)) / (2 * a));
	}
	
	return 0;
}


float resul_ecuacionSegundogrado(float a, float b, float c){ //19 
	
	float D;
	D = b * b - (4 * a * c);
	return D;
	
}














