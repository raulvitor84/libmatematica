#include <stdio.h>
#include <stdlib.h>
#include "matematica.h"

// Código para utilizar as funções na prática

// Este código imprime na tela o angulo em radianos a partir de um valor

int main()
{

    // Declaração de uma variavel teste que recebe um valor float
    
    float angulo = 50.0;

    // Aplicação das funções criadas utilizando o valor da varaivel "angulo"

    float seno = calcular_seno(angulo);

    float cosseno =  calcular_cosseno(angulo);

    float tangente = calcular_tangente(angulo);


    // Impressão na tela dos valores fornecidos por cada função
    
    printf("Seno: %.2f\n", seno);
    printf("Cosseno: %.2f\n", cosseno);
    printf("Tangente: %.2f\n", tangente);


    return 0;
}
