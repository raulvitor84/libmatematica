#include <stdio.h>
#include <stdlib.h>
#include "matematica.h"
int main()
{
    float angulo = 50.0;

    float x = calcular_seno(angulo);

    float y =  calcular_cosseno(angulo);

    float z = calcular_tangente(angulo);



    printf("Seno: %.2f\n", x);
    printf("Cosseno: %.2f\n", y);
    printf("Tangente: %.2f\n", z);


    return 0;
}
