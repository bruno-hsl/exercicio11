#include <stdio.h>

int maximo(int a, int b){
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int numA, numB;

    printf("Digite o valor de A: ");
    scanf("%d", &numA);

    printf("Digite o valor de B: ");
    scanf("%d", &numB);

    int maior = maximo(numA, numB);

    printf("Maior numero: %d", maior);

}
