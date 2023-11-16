#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	
	srand(time(NULL));
	int i, j;
    int filas = 5;
    int columnas = 7;
    int A[filas][columnas];

    for (i = 0; i < filas; ++i) {
        for (j = 0; j < columnas; ++j) {
            A[i][j] = rand() % 10;
			printf("%d ", A[i][j]);
        }
		printf("\n");
    }

    int sumad = 0;
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            if (i == j)
                sumad += A[i][j];
        }
    }
    printf("\nSuma de la diagonal: %d\n", sumad);
    
    int sumaf1 = 0;
    for (j=0; j<columnas; ++j){
    	sumaf1 += A[0][j];
    }
	printf("Suma de la fila 1: %d\n", sumaf1);
	
	int sumac7 = 0;
    for (i=0; i<filas; ++i){
    	sumac7 += A[i][6];
    }
	printf("Suma de la columna 7: %d\n", sumac7);
	
	printf("--------------- \n");
	
	printf("Suma de la fila 1: %d\n", sumaf1);
	
	int sumaf3 = 0;
    for (j=0; j<columnas; ++j){
    	sumaf3 += A[2][j];
    }
	printf("Suma de la fila 3: %d\n", sumaf3);
	
	int sumaf5 = 0;
    for (j=0; j<columnas; ++j){
    	sumaf5 += A[4][j];
    }
	printf("Suma de la fila 5: %d\n", sumaf5);
	int sumafp = sumaf1 + sumaf3 + sumaf5;
	printf("Suma de las filas pares: %d\n", sumafp);
	
	printf("---------------- \n");
	
	int sumac2 = 0;
    for (i=0; i<filas; ++i){
    	sumac2 += A[i][1];
    }
	printf("Suma de la columna 2: %d\n", sumac2);
	
	int sumac4 = 0;
    for (i=0; i<filas; ++i){
    	sumac4 += A[i][3];
    }
	printf("Suma de la columna 4: %d\n", sumac4);
	
	int sumac6 = 0;
    for (i=0; i<filas; ++i){
    	sumac6 += A[i][5];
    }
	printf("Suma de la columna 6: %d\n", sumac6);
	
	int sumaci = sumac2 + sumac4 + sumac6;
	
	printf("Suma de las columnas impares: %d\n", sumaci);
	
	printf("---------------- \n");
	
	printf("\nSuma de la diagonal: %d\n", sumad);
	
	int sumats = 0;
	for (i = 0; i < filas; ++i) {
        for (j = i; j < columnas; ++j) {
            sumats += A[i][j]; 
        }
	}
	printf("Suma del triangulo superior: %d\n", sumats);
	
	printf("---------------- \n");
	
	printf("\nSuma de la diagonal: %d\n", sumad);
	
	int sumati = 0;
	for (i = 0; i < filas; ++i) {
        for (j = 0; j <= i; ++j) {
            sumati += A[i][j]; 
        }
	}
	
	printf("Suma del triangulo inferior: %d\n", sumati);
	
	return 0;
}
