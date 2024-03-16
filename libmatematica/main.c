#include <stdio.h>
#include <stdlib.h>
#include "matematica.h"

int main()
{
    float angulo = 50.0;

    float seno = calcular_seno(angulo);

    float cosseno =  calcular_cosseno(angulo);

    float tangente = calcular_tangente(angulo);



    printf("Seno: %.2f\n", seno);
    printf("Cosseno: %.2f\n", cosseno);
    printf("Tangente: %.2f\n", tangente);


    return 0;
}
