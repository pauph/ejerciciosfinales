#include <stdio.h>

int main() {
    int filas = 3;
    int columnas = 3;
    int A[filas][columnas];
    int i, j;

    printf("Ingrese los elementos de la matriz de 3x3:\n");
    for (i = 0; i < filas; ++i) {
        for (j = 0; j < columnas; ++j) {
            printf("Posicion (%d,%d) ", i , j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nMatriz:\n");
    for (i = 0; i < filas; ++i) {
        for (j = 0; j < columnas; ++j) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int sumaf1 = 0;
    for (j=0; j<columnas; ++j){
    	sumaf1 += A[0][j];
    }
	printf("Suma de la fila 1: %d\n", sumaf1);
	
	int sumaf2 = 0;
    for (j=0; j<columnas; ++j){
    	sumaf2 += A[1][j];
    }
	printf("Suma de la fila 2: %d\n", sumaf2);
	
	int sumaf3 = 0;
    for (j=0; j<columnas; ++j){
    	sumaf3 += A[2][j];
    }
	printf("Suma de la fila 5: %d\n", sumaf3);
	
	int sumac1 = 0;
    for (i=0; i<filas; ++i){
    	sumac1 += A[i][0];
    }
	printf("Suma de la columna 1: %d\n", sumac1);
	
	int sumac2 = 0;
    for (i=0; i<filas; ++i){
    	sumac2 += A[i][1];
    }
	printf("Suma de la columna 2: %d\n", sumac2);
	
	int sumac3 = 0;
    for (i=0; i<filas; ++i){
    	sumac3 += A[i][2];
    }
	printf("Suma de la columna 3: %d\n", sumac3);
	
	int sumad = 0;
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            if (i == j)
                sumad += A[i][j];
        }
    }
    printf("Suma de la diagonal: %d\n", sumad);
    
    int sumads = 0;
    for (i = 0; i < filas; ++i) {
        sumads += A[i][columnas - 1 - i];
    }
    printf("Suma de la diagonal secundaria: %d\n", sumads);
    
    if (sumaf1 == sumaf2 && sumaf2 == sumaf3 && sumaf3 == sumac1 && sumac1 == sumac2 && sumac2 == sumac3 && sumac3 == sumad && sumad == sumads){
    	printf("La matriz es magica");
    	
    }
    else{
    	printf("La matriz no es magica");
    }
	
    return 0;
}
