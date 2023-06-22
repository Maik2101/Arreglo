#include <stdio.h>

void arregloEscalar(float* arreglo, int tam, float escal) {
    for (int i = 0; i < tam; i++) {
        arreglo[i] += escal;
    }
}

int main() {
    float arreglo[]={1,2,3,4,5} ;
    int tama=5;
    float escal;

    printf("Ingrese un numero: ");
    scanf("%f", &escal);

    arregloEscalar(arreglo, 5, escal);
        for (int i = 0; i < 5; i++) {
        printf("El arreglo %d resultante: %f\n", i,arreglo[i]);
    }


    return 0;
}
  

