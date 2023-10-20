#include <stdio.h>
#include <string.h>
// prototipo da função
void mostrarMes(int num);

main(){
    int numero;
    printf("Digite um numero correspondente a um mes: ");
    scanf("%d", &numero);

    mostrarMes(numero);

}

// implementacao de funcao
void mostrarMes(int num){
    char nomeMes[20];
    int diaMes = 0;
    switch(num){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        diaMes = 31;
        if(num == 1){
            strcpy(nomeMes, "janeiro");
        }
        else if(num == 3){
             strcpy(nomeMes, "Marco");
        }
         else if(num == 5){
             strcpy(nomeMes, "Maio");
        }
         else if(num == 7){
             strcpy(nomeMes, "Julho");
        }
         else if(num == 8){
             strcpy(nomeMes, "Agosto");
        }
         else if(num == 10){
             strcpy(nomeMes, "Outubro");
        }
         else{
             strcpy(nomeMes, "Dezembro");
        }
        break;
        case 4: case 6: case 9: case 11:
        diaMes = 30;
         if(num == 4){
             strcpy(nomeMes, "Abril");
        }
         else if(num == 6){
             strcpy(nomeMes, "Junho");
        }
         else if(num == 9){
             strcpy(nomeMes, "Setembro");
        }
         else if(num == 11){
             strcpy(nomeMes, "Novembro");
        }
        break;
        case 2:
        diaMes = 28;
         
             strcpy(nomeMes, "Fevereiro");
        default:
        printf("Opcao invalida para mes");

    }
    printf("total dias: %d, e mes correspondente: %s", diaMes, nomeMes);
}