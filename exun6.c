#include <stdio.h>
float calcularImc(float altura, float peso);
void mostrarSituacao(float);

main(){
    float p, a, imc;
    printf("Digite o peso:");
    scanf("%f", &p)
     printf("Digite o altura:");
    scanf("%f", &a);

    imc = calcularImc(a, p);
    mostrarSituacao(imc);

}
    float calcularImc(float altura, float peso){
        float imc = peso / (altura * altura);
        return imc;
    }
    void mostrarSituacao(float){
        if(imc < 16){
            printf("Abaixo do peso");
        }
        else if(imc >= 16 && imc < 25){
            printf("Peso normal");
        }
        else{
            printf("Acima do peso");
        }
    }

