#include <stdio.h>
#include <math.h> 
// procedimento (funcao sem retorno)

void calcularVolume(){
    float raio, pi = 3.1415;
    printf("Digite o valor do raio");
    scanf("%f", &raio);
    float volumeE = (4 * pi * pow(raio, 3))/3;
    printf("O volume da esfera e: %f", volumeE);
}

main(){
    calcularVolume();

}