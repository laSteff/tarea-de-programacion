#include <stdio.h>

float promedio(float valores, int cantidad) {
    
    float promedio = 0.0;
	
	promedio = valores / cantidad;
    
	return promedio;
}
 

int main(){

    float numeros = 0, suma = 0;
    char opcion[3];
    int n, i;

    do {
        printf("Cuantos numeros son: ");
        scanf("%d", &n);

        for (i = 0; i < n; ++i){
            printf("  Numero %d: ", i + 1);
            scanf("%f", &numeros);
            fflush(stdin);
            suma = suma + numeros;
        }

        printf("El promedio es: %.1f\n", promedio(suma, n));

        printf("Desea calcular mas promedios (si/no)? ");
        scanf("%s", opcion);
    } while (opcion[0] == 's' || opcion[0] == 'S');

    return 0;
}
