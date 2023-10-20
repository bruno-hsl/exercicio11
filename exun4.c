#include <stdio.h>

double calcularVolume(double, double);

main(){
    double r = 10, a = 5;
    double res = calcularVolume(a, r);

    printf("O volume  e: %lf", res);
}

double calcularVolume(double alt, double raio){
    double pi = 3.1415;
    double volumeC = pi * (raio * raio) * alt;
    return volumeC;
}