#include <stdio.h>
// prototipo das funcoes
 maior(int n1, int n2);

main(){
    int numero1 = 10, numero2 = 20, resultado;
    resultado = maior(numero1, numero2);
    printf("%d", resultado);
}

int maior(int n1, int n2){
   if(n1 > n2) {
    return n1;
   } else {
    return n2;
   }

}